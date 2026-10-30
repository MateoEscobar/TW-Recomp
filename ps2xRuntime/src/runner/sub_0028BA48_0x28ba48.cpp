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

// Function: sub_0028BA48
// Address: 0x28ba48 - 0x28bb58
void sub_0028BA48_0x28ba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BA48_0x28ba48");
#endif

    switch (ctx->pc) {
        case 0x28ba48u: goto label_28ba48;
        case 0x28ba4cu: goto label_28ba4c;
        case 0x28ba50u: goto label_28ba50;
        case 0x28ba54u: goto label_28ba54;
        case 0x28ba58u: goto label_28ba58;
        case 0x28ba5cu: goto label_28ba5c;
        case 0x28ba60u: goto label_28ba60;
        case 0x28ba64u: goto label_28ba64;
        case 0x28ba68u: goto label_28ba68;
        case 0x28ba6cu: goto label_28ba6c;
        case 0x28ba70u: goto label_28ba70;
        case 0x28ba74u: goto label_28ba74;
        case 0x28ba78u: goto label_28ba78;
        case 0x28ba7cu: goto label_28ba7c;
        case 0x28ba80u: goto label_28ba80;
        case 0x28ba84u: goto label_28ba84;
        case 0x28ba88u: goto label_28ba88;
        case 0x28ba8cu: goto label_28ba8c;
        case 0x28ba90u: goto label_28ba90;
        case 0x28ba94u: goto label_28ba94;
        case 0x28ba98u: goto label_28ba98;
        case 0x28ba9cu: goto label_28ba9c;
        case 0x28baa0u: goto label_28baa0;
        case 0x28baa4u: goto label_28baa4;
        case 0x28baa8u: goto label_28baa8;
        case 0x28baacu: goto label_28baac;
        case 0x28bab0u: goto label_28bab0;
        case 0x28bab4u: goto label_28bab4;
        case 0x28bab8u: goto label_28bab8;
        case 0x28babcu: goto label_28babc;
        case 0x28bac0u: goto label_28bac0;
        case 0x28bac4u: goto label_28bac4;
        case 0x28bac8u: goto label_28bac8;
        case 0x28baccu: goto label_28bacc;
        case 0x28bad0u: goto label_28bad0;
        case 0x28bad4u: goto label_28bad4;
        case 0x28bad8u: goto label_28bad8;
        case 0x28badcu: goto label_28badc;
        case 0x28bae0u: goto label_28bae0;
        case 0x28bae4u: goto label_28bae4;
        case 0x28bae8u: goto label_28bae8;
        case 0x28baecu: goto label_28baec;
        case 0x28baf0u: goto label_28baf0;
        case 0x28baf4u: goto label_28baf4;
        case 0x28baf8u: goto label_28baf8;
        case 0x28bafcu: goto label_28bafc;
        case 0x28bb00u: goto label_28bb00;
        case 0x28bb04u: goto label_28bb04;
        case 0x28bb08u: goto label_28bb08;
        case 0x28bb0cu: goto label_28bb0c;
        case 0x28bb10u: goto label_28bb10;
        case 0x28bb14u: goto label_28bb14;
        case 0x28bb18u: goto label_28bb18;
        case 0x28bb1cu: goto label_28bb1c;
        case 0x28bb20u: goto label_28bb20;
        case 0x28bb24u: goto label_28bb24;
        case 0x28bb28u: goto label_28bb28;
        case 0x28bb2cu: goto label_28bb2c;
        case 0x28bb30u: goto label_28bb30;
        case 0x28bb34u: goto label_28bb34;
        case 0x28bb38u: goto label_28bb38;
        case 0x28bb3cu: goto label_28bb3c;
        case 0x28bb40u: goto label_28bb40;
        case 0x28bb44u: goto label_28bb44;
        case 0x28bb48u: goto label_28bb48;
        case 0x28bb4cu: goto label_28bb4c;
        case 0x28bb50u: goto label_28bb50;
        case 0x28bb54u: goto label_28bb54;
        default: break;
    }

    ctx->pc = 0x28ba48u;

label_28ba48:
    // 0x28ba48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28ba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28ba4c:
    // 0x28ba4c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x28ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_28ba50:
    // 0x28ba50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_28ba54:
    // 0x28ba54: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28ba54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_28ba58:
    // 0x28ba58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28ba5c:
    // 0x28ba5c: 0xc0a3fc6  jal         func_28FF18
label_28ba60:
    if (ctx->pc == 0x28BA60u) {
        ctx->pc = 0x28BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA5Cu;
        // 0x28ba60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA64u;
        goto label_28ba64;
    }
    ctx->pc = 0x28BA5Cu;
    SET_GPR_U32(ctx, 31, 0x28BA64u);
    ctx->pc = 0x28BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA5Cu;
    // 0x28ba60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF18u, 0x28BA5Cu, 0x28BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA64u;
label_28ba64:
    // 0x28ba64: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_28ba68:
    if (ctx->pc == 0x28BA68u) {
        ctx->pc = 0x28BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA64u;
        // 0x28ba68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA6Cu;
        goto label_28ba6c;
    }
    ctx->pc = 0x28BA64u;
    {
        const bool branch_taken_0x28ba64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA64u;
        // 0x28ba68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba64) {
            ctx->pc = 0x28BB08u;
            goto label_28bb08;
        }
    }
    ctx->pc = 0x28BA6Cu;
label_28ba6c:
    // 0x28ba6c: 0x9203014c  lbu         $v1, 0x14C($s0)
    ctx->pc = 0x28ba6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 332)));
label_28ba70:
    // 0x28ba70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ba74:
    // 0x28ba74: 0x54620032  bnel        $v1, $v0, . + 4 + (0x32 << 2)
label_28ba78:
    if (ctx->pc == 0x28BA78u) {
        ctx->pc = 0x28BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA74u;
        // 0x28ba78: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA7Cu;
        goto label_28ba7c;
    }
    ctx->pc = 0x28BA74u;
    {
        const bool branch_taken_0x28ba74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ba74) {
            ctx->pc = 0x28BA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BA74u;
            // 0x28ba78: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BB40u;
            goto label_28bb40;
        }
    }
    ctx->pc = 0x28BA7Cu;
label_28ba7c:
    // 0x28ba7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28ba80:
    // 0x28ba80: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x28ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28ba84:
    // 0x28ba84: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28ba88:
    // 0x28ba88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28ba88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28ba8c:
    // 0x28ba8c: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x28ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_28ba90:
    // 0x28ba90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28ba94:
    // 0x28ba94: 0x84660040  lh          $a2, 0x40($v1)
    ctx->pc = 0x28ba94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28ba98:
    // 0x28ba98: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28ba9c:
    // 0x28ba9c: 0x40f809  jalr        $v0
label_28baa0:
    if (ctx->pc == 0x28BAA0u) {
        ctx->pc = 0x28BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA9Cu;
        // 0x28baa0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAA4u;
        goto label_28baa4;
    }
    ctx->pc = 0x28BA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BAA4u);
        ctx->pc = 0x28BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA9Cu;
        // 0x28baa0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BA9Cu, 0x28BAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BAA4u;
label_28baa4:
    // 0x28baa4: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x28baa4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28baa8:
    // 0x28baa8: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
label_28baac:
    if (ctx->pc == 0x28BAACu) {
        ctx->pc = 0x28BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAA8u;
        // 0x28baac: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAB0u;
        goto label_28bab0;
    }
    ctx->pc = 0x28BAA8u;
    {
        const bool branch_taken_0x28baa8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x28BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAA8u;
        // 0x28baac: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28baa8) {
            ctx->pc = 0x28BB00u;
            goto label_28bb00;
        }
    }
    ctx->pc = 0x28BAB0u;
label_28bab0:
    // 0x28bab0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28bab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28bab4:
    // 0x28bab4: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28bab4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28bab8:
    // 0x28bab8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28babc:
    if (ctx->pc == 0x28BABCu) {
        ctx->pc = 0x28BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAB8u;
        // 0x28babc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAC0u;
        goto label_28bac0;
    }
    ctx->pc = 0x28BAB8u;
    {
        const bool branch_taken_0x28bab8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAB8u;
        // 0x28babc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bab8) {
            ctx->pc = 0x28BACCu;
            goto label_28bacc;
        }
    }
    ctx->pc = 0x28BAC0u;
label_28bac0:
    // 0x28bac0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28bac4:
    // 0x28bac4: 0x10000002  b           . + 4 + (0x2 << 2)
label_28bac8:
    if (ctx->pc == 0x28BAC8u) {
        ctx->pc = 0x28BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAC4u;
        // 0x28bac8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BACCu;
        goto label_28bacc;
    }
    ctx->pc = 0x28BAC4u;
    {
        const bool branch_taken_0x28bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAC4u;
        // 0x28bac8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bac4) {
            ctx->pc = 0x28BAD0u;
            goto label_28bad0;
        }
    }
    ctx->pc = 0x28BACCu;
label_28bacc:
    // 0x28bacc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28baccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bad0:
    // 0x28bad0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x28bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_28bad4:
    // 0x28bad4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x28bad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_28bad8:
    // 0x28bad8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x28bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_28badc:
    // 0x28badc: 0x40f809  jalr        $v0
label_28bae0:
    if (ctx->pc == 0x28BAE0u) {
        ctx->pc = 0x28BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BADCu;
        // 0x28bae0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAE4u;
        goto label_28bae4;
    }
    ctx->pc = 0x28BADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BAE4u);
        ctx->pc = 0x28BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BADCu;
        // 0x28bae0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BADCu, 0x28BAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BAE4u;
label_28bae4:
    // 0x28bae4: 0x50520015  beql        $v0, $s2, . + 4 + (0x15 << 2)
label_28bae8:
    if (ctx->pc == 0x28BAE8u) {
        ctx->pc = 0x28BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAE4u;
        // 0x28bae8: 0xa200014c  sb          $zero, 0x14C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAECu;
        goto label_28baec;
    }
    ctx->pc = 0x28BAE4u;
    {
        const bool branch_taken_0x28bae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x28bae4) {
            ctx->pc = 0x28BAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BAE4u;
            // 0x28bae8: 0xa200014c  sb          $zero, 0x14C($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BB3Cu;
            goto label_28bb3c;
        }
    }
    ctx->pc = 0x28BAECu;
label_28baec:
    // 0x28baec: 0xc0a35f6  jal         func_28D7D8
label_28baf0:
    if (ctx->pc == 0x28BAF0u) {
        ctx->pc = 0x28BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAECu;
        // 0x28baf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAF4u;
        goto label_28baf4;
    }
    ctx->pc = 0x28BAECu;
    SET_GPR_U32(ctx, 31, 0x28BAF4u);
    ctx->pc = 0x28BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BAECu;
    // 0x28baf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x28BAECu, 0x28BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAF4u;
label_28baf4:
    // 0x28baf4: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x28baf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_28baf8:
    // 0x28baf8: 0x463ffef  bgezl       $v1, . + 4 + (-0x11 << 2)
label_28bafc:
    if (ctx->pc == 0x28BAFCu) {
        ctx->pc = 0x28BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAF8u;
        // 0x28bafc: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB00u;
        goto label_28bb00;
    }
    ctx->pc = 0x28BAF8u;
    {
        const bool branch_taken_0x28baf8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x28baf8) {
            ctx->pc = 0x28BAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BAF8u;
            // 0x28bafc: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bab8;
        }
    }
    ctx->pc = 0x28BB00u;
label_28bb00:
    // 0x28bb00: 0x1000000e  b           . + 4 + (0xE << 2)
label_28bb04:
    if (ctx->pc == 0x28BB04u) {
        ctx->pc = 0x28BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB00u;
        // 0x28bb04: 0xa200014c  sb          $zero, 0x14C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB08u;
        goto label_28bb08;
    }
    ctx->pc = 0x28BB00u;
    {
        const bool branch_taken_0x28bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB00u;
        // 0x28bb04: 0xa200014c  sb          $zero, 0x14C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb00) {
            ctx->pc = 0x28BB3Cu;
            goto label_28bb3c;
        }
    }
    ctx->pc = 0x28BB08u;
label_28bb08:
    // 0x28bb08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28bb0c:
    // 0x28bb0c: 0xc08a08a  jal         func_228228
label_28bb10:
    if (ctx->pc == 0x28BB10u) {
        ctx->pc = 0x28BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB0Cu;
        // 0x28bb10: 0xa202014c  sb          $v0, 0x14C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB14u;
        goto label_28bb14;
    }
    ctx->pc = 0x28BB0Cu;
    SET_GPR_U32(ctx, 31, 0x28BB14u);
    ctx->pc = 0x28BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB0Cu;
    // 0x28bb10: 0xa202014c  sb          $v0, 0x14C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x28BB0Cu, 0x28BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB14u;
label_28bb14:
    // 0x28bb14: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_28bb18:
    if (ctx->pc == 0x28BB18u) {
        ctx->pc = 0x28BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB14u;
        // 0x28bb18: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB1Cu;
        goto label_28bb1c;
    }
    ctx->pc = 0x28BB14u;
    {
        const bool branch_taken_0x28bb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bb14) {
            ctx->pc = 0x28BB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BB14u;
            // 0x28bb18: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BB40u;
            goto label_28bb40;
        }
    }
    ctx->pc = 0x28BB1Cu;
label_28bb1c:
    // 0x28bb1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28bb20:
    // 0x28bb20: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x28bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_28bb24:
    // 0x28bb24: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x28bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_28bb28:
    // 0x28bb28: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x28bb28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_28bb2c:
    // 0x28bb2c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x28bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_28bb30:
    // 0x28bb30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28bb34:
    // 0x28bb34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28bb34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28bb38:
    // 0x28bb38: 0x7e030230  sq          $v1, 0x230($s0)
    ctx->pc = 0x28bb38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), GPR_VEC(ctx, 3));
label_28bb3c:
    // 0x28bb3c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28bb3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28bb40:
    // 0x28bb40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28bb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28bb44:
    // 0x28bb44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28bb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28bb48:
    // 0x28bb48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28bb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28bb4c:
    // 0x28bb4c: 0x3e00008  jr          $ra
label_28bb50:
    if (ctx->pc == 0x28BB50u) {
        ctx->pc = 0x28BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB4Cu;
        // 0x28bb50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB54u;
        goto label_28bb54;
    }
    ctx->pc = 0x28BB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB4Cu;
        // 0x28bb50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BB54u;
label_28bb54:
    // 0x28bb54: 0x0  nop
    ctx->pc = 0x28bb54u;
    // NOP
    ctx->pc = 0x28bb58u;
}
