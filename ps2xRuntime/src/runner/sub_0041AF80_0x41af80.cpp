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

// Function: sub_0041AF80
// Address: 0x41af80 - 0x41b0d0
void sub_0041AF80_0x41af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AF80_0x41af80");
#endif

    switch (ctx->pc) {
        case 0x41af80u: goto label_41af80;
        case 0x41af84u: goto label_41af84;
        case 0x41af88u: goto label_41af88;
        case 0x41af8cu: goto label_41af8c;
        case 0x41af90u: goto label_41af90;
        case 0x41af94u: goto label_41af94;
        case 0x41af98u: goto label_41af98;
        case 0x41af9cu: goto label_41af9c;
        case 0x41afa0u: goto label_41afa0;
        case 0x41afa4u: goto label_41afa4;
        case 0x41afa8u: goto label_41afa8;
        case 0x41afacu: goto label_41afac;
        case 0x41afb0u: goto label_41afb0;
        case 0x41afb4u: goto label_41afb4;
        case 0x41afb8u: goto label_41afb8;
        case 0x41afbcu: goto label_41afbc;
        case 0x41afc0u: goto label_41afc0;
        case 0x41afc4u: goto label_41afc4;
        case 0x41afc8u: goto label_41afc8;
        case 0x41afccu: goto label_41afcc;
        case 0x41afd0u: goto label_41afd0;
        case 0x41afd4u: goto label_41afd4;
        case 0x41afd8u: goto label_41afd8;
        case 0x41afdcu: goto label_41afdc;
        case 0x41afe0u: goto label_41afe0;
        case 0x41afe4u: goto label_41afe4;
        case 0x41afe8u: goto label_41afe8;
        case 0x41afecu: goto label_41afec;
        case 0x41aff0u: goto label_41aff0;
        case 0x41aff4u: goto label_41aff4;
        case 0x41aff8u: goto label_41aff8;
        case 0x41affcu: goto label_41affc;
        case 0x41b000u: goto label_41b000;
        case 0x41b004u: goto label_41b004;
        case 0x41b008u: goto label_41b008;
        case 0x41b00cu: goto label_41b00c;
        case 0x41b010u: goto label_41b010;
        case 0x41b014u: goto label_41b014;
        case 0x41b018u: goto label_41b018;
        case 0x41b01cu: goto label_41b01c;
        case 0x41b020u: goto label_41b020;
        case 0x41b024u: goto label_41b024;
        case 0x41b028u: goto label_41b028;
        case 0x41b02cu: goto label_41b02c;
        case 0x41b030u: goto label_41b030;
        case 0x41b034u: goto label_41b034;
        case 0x41b038u: goto label_41b038;
        case 0x41b03cu: goto label_41b03c;
        case 0x41b040u: goto label_41b040;
        case 0x41b044u: goto label_41b044;
        case 0x41b048u: goto label_41b048;
        case 0x41b04cu: goto label_41b04c;
        case 0x41b050u: goto label_41b050;
        case 0x41b054u: goto label_41b054;
        case 0x41b058u: goto label_41b058;
        case 0x41b05cu: goto label_41b05c;
        case 0x41b060u: goto label_41b060;
        case 0x41b064u: goto label_41b064;
        case 0x41b068u: goto label_41b068;
        case 0x41b06cu: goto label_41b06c;
        case 0x41b070u: goto label_41b070;
        case 0x41b074u: goto label_41b074;
        case 0x41b078u: goto label_41b078;
        case 0x41b07cu: goto label_41b07c;
        case 0x41b080u: goto label_41b080;
        case 0x41b084u: goto label_41b084;
        case 0x41b088u: goto label_41b088;
        case 0x41b08cu: goto label_41b08c;
        case 0x41b090u: goto label_41b090;
        case 0x41b094u: goto label_41b094;
        case 0x41b098u: goto label_41b098;
        case 0x41b09cu: goto label_41b09c;
        case 0x41b0a0u: goto label_41b0a0;
        case 0x41b0a4u: goto label_41b0a4;
        case 0x41b0a8u: goto label_41b0a8;
        case 0x41b0acu: goto label_41b0ac;
        case 0x41b0b0u: goto label_41b0b0;
        case 0x41b0b4u: goto label_41b0b4;
        case 0x41b0b8u: goto label_41b0b8;
        case 0x41b0bcu: goto label_41b0bc;
        case 0x41b0c0u: goto label_41b0c0;
        case 0x41b0c4u: goto label_41b0c4;
        case 0x41b0c8u: goto label_41b0c8;
        case 0x41b0ccu: goto label_41b0cc;
        default: break;
    }

    ctx->pc = 0x41af80u;

label_41af80:
    // 0x41af80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41af84:
    // 0x41af84: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41af84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41af88:
    // 0x41af88: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41af88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41af8c:
    // 0x41af8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41af8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41af90:
    // 0x41af90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41af90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41af94:
    // 0x41af94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x41af94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41af98:
    // 0x41af98: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_41af9c:
    // 0x41af9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41afa0:
    // 0x41afa0: 0x92020410  lbu         $v0, 0x410($s0)
    ctx->pc = 0x41afa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
label_41afa4:
    // 0x41afa4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_41afa8:
    if (ctx->pc == 0x41AFA8u) {
        ctx->pc = 0x41AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFA4u;
        // 0x41afa8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFACu;
        goto label_41afac;
    }
    ctx->pc = 0x41AFA4u;
    {
        const bool branch_taken_0x41afa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFA4u;
        // 0x41afa8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41afa4) {
            ctx->pc = 0x41B0B0u;
            goto label_41b0b0;
        }
    }
    ctx->pc = 0x41AFACu;
label_41afac:
    // 0x41afac: 0x8202033c  lb          $v0, 0x33C($s0)
    ctx->pc = 0x41afacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 828)));
label_41afb0:
    // 0x41afb0: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_41afb4:
    if (ctx->pc == 0x41AFB4u) {
        ctx->pc = 0x41AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFB0u;
        // 0x41afb4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFB8u;
        goto label_41afb8;
    }
    ctx->pc = 0x41AFB0u;
    {
        const bool branch_taken_0x41afb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41afb0) {
            ctx->pc = 0x41AFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41AFB0u;
            // 0x41afb4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B0B4u;
            goto label_41b0b4;
        }
    }
    ctx->pc = 0x41AFB8u;
label_41afb8:
    // 0x41afb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x41afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41afbc:
    // 0x41afbc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41afbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41afc0:
    // 0x41afc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41afc4:
    // 0x41afc4: 0x40f809  jalr        $v0
label_41afc8:
    if (ctx->pc == 0x41AFC8u) {
        ctx->pc = 0x41AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFC4u;
        // 0x41afc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFCCu;
        goto label_41afcc;
    }
    ctx->pc = 0x41AFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41AFCCu);
        ctx->pc = 0x41AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFC4u;
        // 0x41afc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AFC4u, 0x41AFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AFCCu;
label_41afcc:
    // 0x41afcc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x41afccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_41afd0:
    // 0x41afd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x41afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41afd4:
    // 0x41afd4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41afd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41afd8:
    // 0x41afd8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41afdc:
    // 0x41afdc: 0x40f809  jalr        $v0
label_41afe0:
    if (ctx->pc == 0x41AFE0u) {
        ctx->pc = 0x41AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFDCu;
        // 0x41afe0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFE4u;
        goto label_41afe4;
    }
    ctx->pc = 0x41AFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41AFE4u);
        ctx->pc = 0x41AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFDCu;
        // 0x41afe0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AFDCu, 0x41AFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AFE4u;
label_41afe4:
    // 0x41afe4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41afe8:
    // 0x41afe8: 0xc0e4060  jal         func_390180
label_41afec:
    if (ctx->pc == 0x41AFECu) {
        ctx->pc = 0x41AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFE8u;
        // 0x41afec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFF0u;
        goto label_41aff0;
    }
    ctx->pc = 0x41AFE8u;
    SET_GPR_U32(ctx, 31, 0x41AFF0u);
    ctx->pc = 0x41AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AFE8u;
    // 0x41afec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41AFE8u, 0x41AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AFF0u;
label_41aff0:
    // 0x41aff0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_41aff4:
    if (ctx->pc == 0x41AFF4u) {
        ctx->pc = 0x41AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFF0u;
        // 0x41aff4: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFF8u;
        goto label_41aff8;
    }
    ctx->pc = 0x41AFF0u;
    {
        const bool branch_taken_0x41aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFF0u;
        // 0x41aff4: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aff0) {
            ctx->pc = 0x41B0B0u;
            goto label_41b0b0;
        }
    }
    ctx->pc = 0x41AFF8u;
label_41aff8:
    // 0x41aff8: 0xc0e4060  jal         func_390180
label_41affc:
    if (ctx->pc == 0x41AFFCu) {
        ctx->pc = 0x41AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFF8u;
        // 0x41affc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B000u;
        goto label_41b000;
    }
    ctx->pc = 0x41AFF8u;
    SET_GPR_U32(ctx, 31, 0x41B000u);
    ctx->pc = 0x41AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AFF8u;
    // 0x41affc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41AFF8u, 0x41B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B000u;
label_41b000:
    // 0x41b000: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_41b004:
    if (ctx->pc == 0x41B004u) {
        ctx->pc = 0x41B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B000u;
        // 0x41b004: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B008u;
        goto label_41b008;
    }
    ctx->pc = 0x41B000u;
    {
        const bool branch_taken_0x41b000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B000u;
        // 0x41b004: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b000) {
            ctx->pc = 0x41B0B0u;
            goto label_41b0b0;
        }
    }
    ctx->pc = 0x41B008u;
label_41b008:
    // 0x41b008: 0x2605033c  addiu       $a1, $s0, 0x33C
    ctx->pc = 0x41b008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 828));
label_41b00c:
    // 0x41b00c: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x41b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b010:
    // 0x41b010: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41b010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b014:
    // 0x41b014: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41b014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41b018:
    // 0x41b018: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41b01c:
    // 0x41b01c: 0x40f809  jalr        $v0
label_41b020:
    if (ctx->pc == 0x41B020u) {
        ctx->pc = 0x41B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B01Cu;
        // 0x41b020: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B024u;
        goto label_41b024;
    }
    ctx->pc = 0x41B01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B024u);
        ctx->pc = 0x41B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B01Cu;
        // 0x41b020: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B01Cu, 0x41B024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B024u;
label_41b024:
    // 0x41b024: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_41b028:
    if (ctx->pc == 0x41B028u) {
        ctx->pc = 0x41B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B024u;
        // 0x41b028: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B02Cu;
        goto label_41b02c;
    }
    ctx->pc = 0x41B024u;
    {
        const bool branch_taken_0x41b024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B024u;
        // 0x41b028: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b024) {
            ctx->pc = 0x41B0B0u;
            goto label_41b0b0;
        }
    }
    ctx->pc = 0x41B02Cu;
label_41b02c:
    // 0x41b02c: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x41b02cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_41b030:
    // 0x41b030: 0xc0e44cc  jal         func_391330
label_41b034:
    if (ctx->pc == 0x41B034u) {
        ctx->pc = 0x41B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B030u;
        // 0x41b034: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B038u;
        goto label_41b038;
    }
    ctx->pc = 0x41B030u;
    SET_GPR_U32(ctx, 31, 0x41B038u);
    ctx->pc = 0x41B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B030u;
    // 0x41b034: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x41B030u, 0x41B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B038u;
label_41b038:
    // 0x41b038: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x41b038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b03c:
    // 0x41b03c: 0x24500028  addiu       $s0, $v0, 0x28
    ctx->pc = 0x41b03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_41b040:
    // 0x41b040: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41b040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41b044:
    // 0x41b044: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b048:
    // 0x41b048: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x41b048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_41b04c:
    // 0x41b04c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x41b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_41b050:
    // 0x41b050: 0x60f809  jalr        $v1
label_41b054:
    if (ctx->pc == 0x41B054u) {
        ctx->pc = 0x41B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B050u;
        // 0x41b054: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B058u;
        goto label_41b058;
    }
    ctx->pc = 0x41B050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B058u);
        ctx->pc = 0x41B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B050u;
        // 0x41b054: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B050u, 0x41B058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B058u;
label_41b058:
    // 0x41b058: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x41b058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b05c:
    // 0x41b05c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41b05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41b060:
    // 0x41b060: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b064:
    // 0x41b064: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x41b064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_41b068:
    // 0x41b068: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x41b068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_41b06c:
    // 0x41b06c: 0x60f809  jalr        $v1
label_41b070:
    if (ctx->pc == 0x41B070u) {
        ctx->pc = 0x41B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B06Cu;
        // 0x41b070: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B074u;
        goto label_41b074;
    }
    ctx->pc = 0x41B06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B074u);
        ctx->pc = 0x41B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B06Cu;
        // 0x41b070: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B06Cu, 0x41B074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B074u;
label_41b074:
    // 0x41b074: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x41b074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b078:
    // 0x41b078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b07c:
    // 0x41b07c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b080:
    // 0x41b080: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x41b080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_41b084:
    // 0x41b084: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x41b084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_41b088:
    // 0x41b088: 0x60f809  jalr        $v1
label_41b08c:
    if (ctx->pc == 0x41B08Cu) {
        ctx->pc = 0x41B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B088u;
        // 0x41b08c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B090u;
        goto label_41b090;
    }
    ctx->pc = 0x41B088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B090u);
        ctx->pc = 0x41B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B088u;
        // 0x41b08c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B088u, 0x41B090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B090u;
label_41b090:
    // 0x41b090: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x41b090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b094:
    // 0x41b094: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x41b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41b098:
    // 0x41b098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41b098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b09c:
    // 0x41b09c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41b0a0:
    // 0x41b0a0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41b0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41b0a4:
    // 0x41b0a4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41b0a8:
    // 0x41b0a8: 0x60f809  jalr        $v1
label_41b0ac:
    if (ctx->pc == 0x41B0ACu) {
        ctx->pc = 0x41B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0A8u;
        // 0x41b0ac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B0B0u;
        goto label_41b0b0;
    }
    ctx->pc = 0x41B0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B0B0u);
        ctx->pc = 0x41B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0A8u;
        // 0x41b0ac: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B0A8u, 0x41B0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B0B0u;
label_41b0b0:
    // 0x41b0b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41b0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41b0b4:
    // 0x41b0b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41b0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b0b8:
    // 0x41b0b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41b0b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b0bc:
    // 0x41b0bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x41b0bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b0c0:
    // 0x41b0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41b0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41b0c4:
    // 0x41b0c4: 0x3e00008  jr          $ra
label_41b0c8:
    if (ctx->pc == 0x41B0C8u) {
        ctx->pc = 0x41B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0C4u;
        // 0x41b0c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B0CCu;
        goto label_41b0cc;
    }
    ctx->pc = 0x41B0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0C4u;
        // 0x41b0c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B0CCu;
label_41b0cc:
    // 0x41b0cc: 0x0  nop
    ctx->pc = 0x41b0ccu;
    // NOP
    ctx->pc = 0x41b0d0u;
}
