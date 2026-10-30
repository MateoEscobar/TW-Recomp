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

// Function: sub_0047EEE8
// Address: 0x47eee8 - 0x47f0c0
void sub_0047EEE8_0x47eee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047EEE8_0x47eee8");
#endif

    switch (ctx->pc) {
        case 0x47eee8u: goto label_47eee8;
        case 0x47eeecu: goto label_47eeec;
        case 0x47eef0u: goto label_47eef0;
        case 0x47eef4u: goto label_47eef4;
        case 0x47eef8u: goto label_47eef8;
        case 0x47eefcu: goto label_47eefc;
        case 0x47ef00u: goto label_47ef00;
        case 0x47ef04u: goto label_47ef04;
        case 0x47ef08u: goto label_47ef08;
        case 0x47ef0cu: goto label_47ef0c;
        case 0x47ef10u: goto label_47ef10;
        case 0x47ef14u: goto label_47ef14;
        case 0x47ef18u: goto label_47ef18;
        case 0x47ef1cu: goto label_47ef1c;
        case 0x47ef20u: goto label_47ef20;
        case 0x47ef24u: goto label_47ef24;
        case 0x47ef28u: goto label_47ef28;
        case 0x47ef2cu: goto label_47ef2c;
        case 0x47ef30u: goto label_47ef30;
        case 0x47ef34u: goto label_47ef34;
        case 0x47ef38u: goto label_47ef38;
        case 0x47ef3cu: goto label_47ef3c;
        case 0x47ef40u: goto label_47ef40;
        case 0x47ef44u: goto label_47ef44;
        case 0x47ef48u: goto label_47ef48;
        case 0x47ef4cu: goto label_47ef4c;
        case 0x47ef50u: goto label_47ef50;
        case 0x47ef54u: goto label_47ef54;
        case 0x47ef58u: goto label_47ef58;
        case 0x47ef5cu: goto label_47ef5c;
        case 0x47ef60u: goto label_47ef60;
        case 0x47ef64u: goto label_47ef64;
        case 0x47ef68u: goto label_47ef68;
        case 0x47ef6cu: goto label_47ef6c;
        case 0x47ef70u: goto label_47ef70;
        case 0x47ef74u: goto label_47ef74;
        case 0x47ef78u: goto label_47ef78;
        case 0x47ef7cu: goto label_47ef7c;
        case 0x47ef80u: goto label_47ef80;
        case 0x47ef84u: goto label_47ef84;
        case 0x47ef88u: goto label_47ef88;
        case 0x47ef8cu: goto label_47ef8c;
        case 0x47ef90u: goto label_47ef90;
        case 0x47ef94u: goto label_47ef94;
        case 0x47ef98u: goto label_47ef98;
        case 0x47ef9cu: goto label_47ef9c;
        case 0x47efa0u: goto label_47efa0;
        case 0x47efa4u: goto label_47efa4;
        case 0x47efa8u: goto label_47efa8;
        case 0x47efacu: goto label_47efac;
        case 0x47efb0u: goto label_47efb0;
        case 0x47efb4u: goto label_47efb4;
        case 0x47efb8u: goto label_47efb8;
        case 0x47efbcu: goto label_47efbc;
        case 0x47efc0u: goto label_47efc0;
        case 0x47efc4u: goto label_47efc4;
        case 0x47efc8u: goto label_47efc8;
        case 0x47efccu: goto label_47efcc;
        case 0x47efd0u: goto label_47efd0;
        case 0x47efd4u: goto label_47efd4;
        case 0x47efd8u: goto label_47efd8;
        case 0x47efdcu: goto label_47efdc;
        case 0x47efe0u: goto label_47efe0;
        case 0x47efe4u: goto label_47efe4;
        case 0x47efe8u: goto label_47efe8;
        case 0x47efecu: goto label_47efec;
        case 0x47eff0u: goto label_47eff0;
        case 0x47eff4u: goto label_47eff4;
        case 0x47eff8u: goto label_47eff8;
        case 0x47effcu: goto label_47effc;
        case 0x47f000u: goto label_47f000;
        case 0x47f004u: goto label_47f004;
        case 0x47f008u: goto label_47f008;
        case 0x47f00cu: goto label_47f00c;
        case 0x47f010u: goto label_47f010;
        case 0x47f014u: goto label_47f014;
        case 0x47f018u: goto label_47f018;
        case 0x47f01cu: goto label_47f01c;
        case 0x47f020u: goto label_47f020;
        case 0x47f024u: goto label_47f024;
        case 0x47f028u: goto label_47f028;
        case 0x47f02cu: goto label_47f02c;
        case 0x47f030u: goto label_47f030;
        case 0x47f034u: goto label_47f034;
        case 0x47f038u: goto label_47f038;
        case 0x47f03cu: goto label_47f03c;
        case 0x47f040u: goto label_47f040;
        case 0x47f044u: goto label_47f044;
        case 0x47f048u: goto label_47f048;
        case 0x47f04cu: goto label_47f04c;
        case 0x47f050u: goto label_47f050;
        case 0x47f054u: goto label_47f054;
        case 0x47f058u: goto label_47f058;
        case 0x47f05cu: goto label_47f05c;
        case 0x47f060u: goto label_47f060;
        case 0x47f064u: goto label_47f064;
        case 0x47f068u: goto label_47f068;
        case 0x47f06cu: goto label_47f06c;
        case 0x47f070u: goto label_47f070;
        case 0x47f074u: goto label_47f074;
        case 0x47f078u: goto label_47f078;
        case 0x47f07cu: goto label_47f07c;
        case 0x47f080u: goto label_47f080;
        case 0x47f084u: goto label_47f084;
        case 0x47f088u: goto label_47f088;
        case 0x47f08cu: goto label_47f08c;
        case 0x47f090u: goto label_47f090;
        case 0x47f094u: goto label_47f094;
        case 0x47f098u: goto label_47f098;
        case 0x47f09cu: goto label_47f09c;
        case 0x47f0a0u: goto label_47f0a0;
        case 0x47f0a4u: goto label_47f0a4;
        case 0x47f0a8u: goto label_47f0a8;
        case 0x47f0acu: goto label_47f0ac;
        case 0x47f0b0u: goto label_47f0b0;
        case 0x47f0b4u: goto label_47f0b4;
        case 0x47f0b8u: goto label_47f0b8;
        case 0x47f0bcu: goto label_47f0bc;
        default: break;
    }

    ctx->pc = 0x47eee8u;

label_47eee8:
    // 0x47eee8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x47eee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_47eeec:
    // 0x47eeec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x47eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47eef0:
    // 0x47eef0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x47eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_47eef4:
    // 0x47eef4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47eef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47eef8:
    // 0x47eef8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x47eef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47eefc:
    // 0x47eefc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x47eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_47ef00:
    // 0x47ef00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x47ef00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47ef04:
    // 0x47ef04: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x47ef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_47ef08:
    // 0x47ef08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x47ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_47ef0c:
    // 0x47ef0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47ef10:
    // 0x47ef10: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x47ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47ef14:
    // 0x47ef14: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_47ef18:
    if (ctx->pc == 0x47EF18u) {
        ctx->pc = 0x47EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF14u;
        // 0x47ef18: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF1Cu;
        goto label_47ef1c;
    }
    ctx->pc = 0x47EF14u;
    {
        const bool branch_taken_0x47ef14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF14u;
        // 0x47ef18: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ef14) {
            ctx->pc = 0x47EF68u;
            goto label_47ef68;
        }
    }
    ctx->pc = 0x47EF1Cu;
label_47ef1c:
    // 0x47ef1c: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x47ef1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_47ef20:
    // 0x47ef20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_47ef24:
    if (ctx->pc == 0x47EF24u) {
        ctx->pc = 0x47EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF20u;
        // 0x47ef24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF28u;
        goto label_47ef28;
    }
    ctx->pc = 0x47EF20u;
    {
        const bool branch_taken_0x47ef20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF20u;
        // 0x47ef24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ef20) {
            ctx->pc = 0x47EF38u;
            goto label_47ef38;
        }
    }
    ctx->pc = 0x47EF28u;
label_47ef28:
    // 0x47ef28: 0x5062004d  beql        $v1, $v0, . + 4 + (0x4D << 2)
label_47ef2c:
    if (ctx->pc == 0x47EF2Cu) {
        ctx->pc = 0x47EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF28u;
        // 0x47ef2c: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF30u;
        goto label_47ef30;
    }
    ctx->pc = 0x47EF28u;
    {
        const bool branch_taken_0x47ef28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x47ef28) {
            ctx->pc = 0x47EF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47EF28u;
            // 0x47ef2c: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F060u;
            goto label_47f060;
        }
    }
    ctx->pc = 0x47EF30u;
label_47ef30:
    // 0x47ef30: 0x10000053  b           . + 4 + (0x53 << 2)
label_47ef34:
    if (ctx->pc == 0x47EF34u) {
        ctx->pc = 0x47EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF30u;
        // 0x47ef34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF38u;
        goto label_47ef38;
    }
    ctx->pc = 0x47EF30u;
    {
        const bool branch_taken_0x47ef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF30u;
        // 0x47ef34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ef30) {
            ctx->pc = 0x47F080u;
            goto label_47f080;
        }
    }
    ctx->pc = 0x47EF38u;
label_47ef38:
    // 0x47ef38: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_47ef3c:
    if (ctx->pc == 0x47EF3Cu) {
        ctx->pc = 0x47EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF38u;
        // 0x47ef3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF40u;
        goto label_47ef40;
    }
    ctx->pc = 0x47EF38u;
    {
        const bool branch_taken_0x47ef38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF38u;
        // 0x47ef3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ef38) {
            ctx->pc = 0x47F07Cu;
            goto label_47f07c;
        }
    }
    ctx->pc = 0x47EF40u;
label_47ef40:
    // 0x47ef40: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x47ef40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_47ef44:
    // 0x47ef44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ef48:
    // 0x47ef48: 0xc1305e2  jal         func_4C1788
label_47ef4c:
    if (ctx->pc == 0x47EF4Cu) {
        ctx->pc = 0x47EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF48u;
        // 0x47ef4c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF50u;
        goto label_47ef50;
    }
    ctx->pc = 0x47EF48u;
    SET_GPR_U32(ctx, 31, 0x47EF50u);
    ctx->pc = 0x47EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EF48u;
    // 0x47ef4c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1788u, 0x47EF48u, 0x47EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EF50u;
label_47ef50:
    // 0x47ef50: 0x10520048  beq         $v0, $s2, . + 4 + (0x48 << 2)
label_47ef54:
    if (ctx->pc == 0x47EF54u) {
        ctx->pc = 0x47EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF50u;
        // 0x47ef54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF58u;
        goto label_47ef58;
    }
    ctx->pc = 0x47EF50u;
    {
        const bool branch_taken_0x47ef50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x47EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF50u;
        // 0x47ef54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ef50) {
            ctx->pc = 0x47F074u;
            goto label_47f074;
        }
    }
    ctx->pc = 0x47EF58u;
label_47ef58:
    // 0x47ef58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47ef5c:
    // 0x47ef5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47ef60:
    // 0x47ef60: 0x10000049  b           . + 4 + (0x49 << 2)
label_47ef64:
    if (ctx->pc == 0x47EF64u) {
        ctx->pc = 0x47EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF60u;
        // 0x47ef64: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF68u;
        goto label_47ef68;
    }
    ctx->pc = 0x47EF60u;
    {
        const bool branch_taken_0x47ef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF60u;
        // 0x47ef64: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ef60) {
            ctx->pc = 0x47F088u;
            goto label_47f088;
        }
    }
    ctx->pc = 0x47EF68u;
label_47ef68:
    // 0x47ef68: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x47ef68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_47ef6c:
    // 0x47ef6c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47ef70:
    // 0x47ef70: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_47ef74:
    if (ctx->pc == 0x47EF74u) {
        ctx->pc = 0x47EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF70u;
        // 0x47ef74: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF78u;
        goto label_47ef78;
    }
    ctx->pc = 0x47EF70u;
    {
        const bool branch_taken_0x47ef70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ef70) {
            ctx->pc = 0x47EF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47EF70u;
            // 0x47ef74: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47EFC4u;
            goto label_47efc4;
        }
    }
    ctx->pc = 0x47EF78u;
label_47ef78:
    // 0x47ef78: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47ef7c:
    // 0x47ef7c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x47ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_47ef80:
    // 0x47ef80: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x47ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_47ef84:
    // 0x47ef84: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x47ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_47ef88:
    // 0x47ef88: 0x40f809  jalr        $v0
label_47ef8c:
    if (ctx->pc == 0x47EF8Cu) {
        ctx->pc = 0x47EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF88u;
        // 0x47ef8c: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF90u;
        goto label_47ef90;
    }
    ctx->pc = 0x47EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47EF90u);
        ctx->pc = 0x47EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF88u;
        // 0x47ef8c: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EF88u, 0x47EF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47EF90u;
label_47ef90:
    // 0x47ef90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_47ef94:
    if (ctx->pc == 0x47EF94u) {
        ctx->pc = 0x47EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF90u;
        // 0x47ef94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EF98u;
        goto label_47ef98;
    }
    ctx->pc = 0x47EF90u;
    {
        const bool branch_taken_0x47ef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EF90u;
        // 0x47ef94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ef90) {
            ctx->pc = 0x47EFB8u;
            goto label_47efb8;
        }
    }
    ctx->pc = 0x47EF98u;
label_47ef98:
    // 0x47ef98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ef9c:
    // 0x47ef9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47efa0:
    // 0x47efa0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47efa4:
    // 0x47efa4: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x47efa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_47efa8:
    // 0x47efa8: 0xc11eff2  jal         func_47BFC8
label_47efac:
    if (ctx->pc == 0x47EFACu) {
        ctx->pc = 0x47EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EFA8u;
        // 0x47efac: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EFB0u;
        goto label_47efb0;
    }
    ctx->pc = 0x47EFA8u;
    SET_GPR_U32(ctx, 31, 0x47EFB0u);
    ctx->pc = 0x47EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EFA8u;
    // 0x47efac: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47EFA8u, 0x47EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EFB0u;
label_47efb0:
    // 0x47efb0: 0x10000038  b           . + 4 + (0x38 << 2)
label_47efb4:
    if (ctx->pc == 0x47EFB4u) {
        ctx->pc = 0x47EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EFB0u;
        // 0x47efb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EFB8u;
        goto label_47efb8;
    }
    ctx->pc = 0x47EFB0u;
    {
        const bool branch_taken_0x47efb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EFB0u;
        // 0x47efb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47efb0) {
            ctx->pc = 0x47F094u;
            goto label_47f094;
        }
    }
    ctx->pc = 0x47EFB8u;
label_47efb8:
    // 0x47efb8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x47efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_47efbc:
    // 0x47efbc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x47efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_47efc0:
    // 0x47efc0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x47efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47efc4:
    // 0x47efc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x47efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47efc8:
    // 0x47efc8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x47efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_47efcc:
    // 0x47efcc: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x47efccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_47efd0:
    // 0x47efd0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_47efd4:
    if (ctx->pc == 0x47EFD4u) {
        ctx->pc = 0x47EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EFD0u;
        // 0x47efd4: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47EFD8u;
        goto label_47efd8;
    }
    ctx->pc = 0x47EFD0u;
    {
        const bool branch_taken_0x47efd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EFD0u;
        // 0x47efd4: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47efd0) {
            ctx->pc = 0x47F034u;
            goto label_47f034;
        }
    }
    ctx->pc = 0x47EFD8u;
label_47efd8:
    // 0x47efd8: 0x24a40200  addiu       $a0, $a1, 0x200
    ctx->pc = 0x47efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_47efdc:
    // 0x47efdc: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x47efdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_47efe0:
    // 0x47efe0: 0x2458821  addu        $s1, $s2, $a1
    ctx->pc = 0x47efe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_47efe4:
    // 0x47efe4: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x47efe4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_47efe8:
    // 0x47efe8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47efec:
    // 0x47efec: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x47efecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_47eff0:
    // 0x47eff0: 0x8c62ae28  lw          $v0, -0x51D8($v1)
    ctx->pc = 0x47eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946344)));
label_47eff4:
    // 0x47eff4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x47eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47eff8:
    // 0x47eff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47eff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47effc:
    // 0x47effc: 0x40f809  jalr        $v0
label_47f000:
    if (ctx->pc == 0x47F000u) {
        ctx->pc = 0x47F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EFFCu;
        // 0x47f000: 0x34c60404  ori         $a2, $a2, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F004u;
        goto label_47f004;
    }
    ctx->pc = 0x47EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F004u);
        ctx->pc = 0x47F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EFFCu;
        // 0x47f000: 0x34c60404  ori         $a2, $a2, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EFFCu, 0x47F004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F004u;
label_47f004:
    // 0x47f004: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_47f008:
    if (ctx->pc == 0x47F008u) {
        ctx->pc = 0x47F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F004u;
        // 0x47f008: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F00Cu;
        goto label_47f00c;
    }
    ctx->pc = 0x47F004u;
    {
        const bool branch_taken_0x47f004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f004) {
            ctx->pc = 0x47F008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F004u;
            // 0x47f008: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F030u;
            goto label_47f030;
        }
    }
    ctx->pc = 0x47F00Cu;
label_47f00c:
    // 0x47f00c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x47f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47f010:
    // 0x47f010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f014:
    // 0x47f014: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47f014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47f018:
    // 0x47f018: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47f018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47f01c:
    // 0x47f01c: 0x2252823  subu        $a1, $s1, $a1
    ctx->pc = 0x47f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_47f020:
    // 0x47f020: 0xc11eff2  jal         func_47BFC8
label_47f024:
    if (ctx->pc == 0x47F024u) {
        ctx->pc = 0x47F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F020u;
        // 0x47f024: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F028u;
        goto label_47f028;
    }
    ctx->pc = 0x47F020u;
    SET_GPR_U32(ctx, 31, 0x47F028u);
    ctx->pc = 0x47F024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F020u;
    // 0x47f024: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47F020u, 0x47F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F028u;
label_47f028:
    // 0x47f028: 0x1000001a  b           . + 4 + (0x1A << 2)
label_47f02c:
    if (ctx->pc == 0x47F02Cu) {
        ctx->pc = 0x47F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F028u;
        // 0x47f02c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F030u;
        goto label_47f030;
    }
    ctx->pc = 0x47F028u;
    {
        const bool branch_taken_0x47f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F028u;
        // 0x47f02c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f028) {
            ctx->pc = 0x47F094u;
            goto label_47f094;
        }
    }
    ctx->pc = 0x47F030u;
label_47f030:
    // 0x47f030: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x47f030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_47f034:
    // 0x47f034: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47f038:
    // 0x47f038: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x47f038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47f03c:
    // 0x47f03c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x47f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f040:
    // 0x47f040: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x47f040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47f044:
    // 0x47f044: 0xc10c190  jal         func_430640
label_47f048:
    if (ctx->pc == 0x47F048u) {
        ctx->pc = 0x47F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F044u;
        // 0x47f048: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F04Cu;
        goto label_47f04c;
    }
    ctx->pc = 0x47F044u;
    SET_GPR_U32(ctx, 31, 0x47F04Cu);
    ctx->pc = 0x47F048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F044u;
    // 0x47f048: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x47F044u, 0x47F04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F04Cu;
label_47f04c:
    // 0x47f04c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f050:
    // 0x47f050: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x47f050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47f054:
    // 0x47f054: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x47f054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_47f058:
    // 0x47f058: 0x10000011  b           . + 4 + (0x11 << 2)
label_47f05c:
    if (ctx->pc == 0x47F05Cu) {
        ctx->pc = 0x47F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F058u;
        // 0x47f05c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F060u;
        goto label_47f060;
    }
    ctx->pc = 0x47F058u;
    {
        const bool branch_taken_0x47f058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F058u;
        // 0x47f05c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f058) {
            ctx->pc = 0x47F0A0u;
            goto label_47f0a0;
        }
    }
    ctx->pc = 0x47F060u;
label_47f060:
    // 0x47f060: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x47f060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47f064:
    // 0x47f064: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x47f064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_47f068:
    // 0x47f068: 0x40f809  jalr        $v0
label_47f06c:
    if (ctx->pc == 0x47F06Cu) {
        ctx->pc = 0x47F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F068u;
        // 0x47f06c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F070u;
        goto label_47f070;
    }
    ctx->pc = 0x47F068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F070u);
        ctx->pc = 0x47F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F068u;
        // 0x47f06c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F068u, 0x47F070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F070u;
label_47f070:
    // 0x47f070: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x47f070u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_47f074:
    // 0x47f074: 0x1000000a  b           . + 4 + (0xA << 2)
label_47f078:
    if (ctx->pc == 0x47F078u) {
        ctx->pc = 0x47F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F074u;
        // 0x47f078: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F07Cu;
        goto label_47f07c;
    }
    ctx->pc = 0x47F074u;
    {
        const bool branch_taken_0x47f074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F074u;
        // 0x47f078: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f074) {
            ctx->pc = 0x47F0A0u;
            goto label_47f0a0;
        }
    }
    ctx->pc = 0x47F07Cu;
label_47f07c:
    // 0x47f07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f080:
    // 0x47f080: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x47f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_47f084:
    // 0x47f084: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47f084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47f088:
    // 0x47f088: 0xc11eff2  jal         func_47BFC8
label_47f08c:
    if (ctx->pc == 0x47F08Cu) {
        ctx->pc = 0x47F090u;
        goto label_47f090;
    }
    ctx->pc = 0x47F088u;
    SET_GPR_U32(ctx, 31, 0x47F090u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47F088u, 0x47F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F090u;
label_47f090:
    // 0x47f090: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47f090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47f094:
    // 0x47f094: 0xc11f024  jal         func_47C090
label_47f098:
    if (ctx->pc == 0x47F098u) {
        ctx->pc = 0x47F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F094u;
        // 0x47f098: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F09Cu;
        goto label_47f09c;
    }
    ctx->pc = 0x47F094u;
    SET_GPR_U32(ctx, 31, 0x47F09Cu);
    ctx->pc = 0x47F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F094u;
    // 0x47f098: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47F094u, 0x47F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F09Cu;
label_47f09c:
    // 0x47f09c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47f09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f0a0:
    // 0x47f0a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x47f0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47f0a4:
    // 0x47f0a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x47f0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47f0a8:
    // 0x47f0a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x47f0a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47f0ac:
    // 0x47f0ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47f0acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f0b0:
    // 0x47f0b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x47f0b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47f0b4:
    // 0x47f0b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47f0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47f0b8:
    // 0x47f0b8: 0x3e00008  jr          $ra
label_47f0bc:
    if (ctx->pc == 0x47F0BCu) {
        ctx->pc = 0x47F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0B8u;
        // 0x47f0bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F0C0u;
        goto label_fallthrough_0x47f0b8;
    }
    ctx->pc = 0x47F0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0B8u;
        // 0x47f0bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47f0b8:
    ctx->pc = 0x47F0C0u;
}
