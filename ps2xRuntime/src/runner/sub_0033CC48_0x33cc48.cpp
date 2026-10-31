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

// Function: sub_0033CC48
// Address: 0x33cc48 - 0x33cd70
void sub_0033CC48_0x33cc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CC48_0x33cc48");
#endif

    switch (ctx->pc) {
        case 0x33cc48u: goto label_33cc48;
        case 0x33cc4cu: goto label_33cc4c;
        case 0x33cc50u: goto label_33cc50;
        case 0x33cc54u: goto label_33cc54;
        case 0x33cc58u: goto label_33cc58;
        case 0x33cc5cu: goto label_33cc5c;
        case 0x33cc60u: goto label_33cc60;
        case 0x33cc64u: goto label_33cc64;
        case 0x33cc68u: goto label_33cc68;
        case 0x33cc6cu: goto label_33cc6c;
        case 0x33cc70u: goto label_33cc70;
        case 0x33cc74u: goto label_33cc74;
        case 0x33cc78u: goto label_33cc78;
        case 0x33cc7cu: goto label_33cc7c;
        case 0x33cc80u: goto label_33cc80;
        case 0x33cc84u: goto label_33cc84;
        case 0x33cc88u: goto label_33cc88;
        case 0x33cc8cu: goto label_33cc8c;
        case 0x33cc90u: goto label_33cc90;
        case 0x33cc94u: goto label_33cc94;
        case 0x33cc98u: goto label_33cc98;
        case 0x33cc9cu: goto label_33cc9c;
        case 0x33cca0u: goto label_33cca0;
        case 0x33cca4u: goto label_33cca4;
        case 0x33cca8u: goto label_33cca8;
        case 0x33ccacu: goto label_33ccac;
        case 0x33ccb0u: goto label_33ccb0;
        case 0x33ccb4u: goto label_33ccb4;
        case 0x33ccb8u: goto label_33ccb8;
        case 0x33ccbcu: goto label_33ccbc;
        case 0x33ccc0u: goto label_33ccc0;
        case 0x33ccc4u: goto label_33ccc4;
        case 0x33ccc8u: goto label_33ccc8;
        case 0x33ccccu: goto label_33cccc;
        case 0x33ccd0u: goto label_33ccd0;
        case 0x33ccd4u: goto label_33ccd4;
        case 0x33ccd8u: goto label_33ccd8;
        case 0x33ccdcu: goto label_33ccdc;
        case 0x33cce0u: goto label_33cce0;
        case 0x33cce4u: goto label_33cce4;
        case 0x33cce8u: goto label_33cce8;
        case 0x33ccecu: goto label_33ccec;
        case 0x33ccf0u: goto label_33ccf0;
        case 0x33ccf4u: goto label_33ccf4;
        case 0x33ccf8u: goto label_33ccf8;
        case 0x33ccfcu: goto label_33ccfc;
        case 0x33cd00u: goto label_33cd00;
        case 0x33cd04u: goto label_33cd04;
        case 0x33cd08u: goto label_33cd08;
        case 0x33cd0cu: goto label_33cd0c;
        case 0x33cd10u: goto label_33cd10;
        case 0x33cd14u: goto label_33cd14;
        case 0x33cd18u: goto label_33cd18;
        case 0x33cd1cu: goto label_33cd1c;
        case 0x33cd20u: goto label_33cd20;
        case 0x33cd24u: goto label_33cd24;
        case 0x33cd28u: goto label_33cd28;
        case 0x33cd2cu: goto label_33cd2c;
        case 0x33cd30u: goto label_33cd30;
        case 0x33cd34u: goto label_33cd34;
        case 0x33cd38u: goto label_33cd38;
        case 0x33cd3cu: goto label_33cd3c;
        case 0x33cd40u: goto label_33cd40;
        case 0x33cd44u: goto label_33cd44;
        case 0x33cd48u: goto label_33cd48;
        case 0x33cd4cu: goto label_33cd4c;
        case 0x33cd50u: goto label_33cd50;
        case 0x33cd54u: goto label_33cd54;
        case 0x33cd58u: goto label_33cd58;
        case 0x33cd5cu: goto label_33cd5c;
        case 0x33cd60u: goto label_33cd60;
        case 0x33cd64u: goto label_33cd64;
        case 0x33cd68u: goto label_33cd68;
        case 0x33cd6cu: goto label_33cd6c;
        default: break;
    }

    ctx->pc = 0x33cc48u;

label_33cc48:
    // 0x33cc48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33cc4c:
    // 0x33cc4c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_33cc50:
    // 0x33cc50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33cc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_33cc54:
    // 0x33cc54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_33cc58:
    // 0x33cc58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33cc5c:
    // 0x33cc5c: 0x3c108002  lui         $s0, 0x8002
    ctx->pc = 0x33cc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32770 << 16));
label_33cc60:
    // 0x33cc60: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x33cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_33cc64:
    // 0x33cc64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33cc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33cc68:
    // 0x33cc68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_33cc6c:
    // 0x33cc6c: 0x247316d0  addiu       $s3, $v1, 0x16D0
    ctx->pc = 0x33cc6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5840));
label_33cc70:
    // 0x33cc70: 0x344224b0  ori         $v0, $v0, 0x24B0
    ctx->pc = 0x33cc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9392);
label_33cc74:
    // 0x33cc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33cc78:
    // 0x33cc78: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x33cc78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_33cc7c:
    // 0x33cc7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33cc7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cc80:
    // 0x33cc80: 0x3610243f  ori         $s0, $s0, 0x243F
    ctx->pc = 0x33cc80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)9279);
label_33cc84:
    // 0x33cc84: 0x0  nop
    ctx->pc = 0x33cc84u;
    // NOP
label_33cc88:
    // 0x33cc88: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x33cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33cc8c:
    // 0x33cc8c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_33cc90:
    if (ctx->pc == 0x33CC90u) {
        ctx->pc = 0x33CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC8Cu;
        // 0x33cc90: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CC94u;
        goto label_33cc94;
    }
    ctx->pc = 0x33CC8Cu;
    {
        const bool branch_taken_0x33cc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC8Cu;
        // 0x33cc90: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc8c) {
            ctx->pc = 0x33CD40u;
            goto label_33cd40;
        }
    }
    ctx->pc = 0x33CC94u;
label_33cc94:
    // 0x33cc94: 0xc0d069a  jal         func_341A68
label_33cc98:
    if (ctx->pc == 0x33CC98u) {
        ctx->pc = 0x33CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC94u;
        // 0x33cc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CC9Cu;
        goto label_33cc9c;
    }
    ctx->pc = 0x33CC94u;
    SET_GPR_U32(ctx, 31, 0x33CC9Cu);
    ctx->pc = 0x33CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC94u;
    // 0x33cc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33CC94u, 0x33CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC9Cu;
label_33cc9c:
    // 0x33cc9c: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x33cc9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_33cca0:
    // 0x33cca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33cca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cca4:
    // 0x33cca4: 0xae300040  sw          $s0, 0x40($s1)
    ctx->pc = 0x33cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
label_33cca8:
    // 0x33cca8: 0x7e220060  sq          $v0, 0x60($s1)
    ctx->pc = 0x33cca8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 2));
label_33ccac:
    // 0x33ccac: 0xa620003c  sh          $zero, 0x3C($s1)
    ctx->pc = 0x33ccacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 0));
label_33ccb0:
    // 0x33ccb0: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x33ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_33ccb4:
    // 0x33ccb4: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x33ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_33ccb8:
    // 0x33ccb8: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x33ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
label_33ccbc:
    // 0x33ccbc: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x33ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_33ccc0:
    // 0x33ccc0: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x33ccc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33ccc4:
    // 0x33ccc4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x33ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_33ccc8:
    // 0x33ccc8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x33ccc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_33cccc:
    // 0x33cccc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x33ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_33ccd0:
    // 0x33ccd0: 0x60f809  jalr        $v1
label_33ccd4:
    if (ctx->pc == 0x33CCD4u) {
        ctx->pc = 0x33CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCD0u;
        // 0x33ccd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CCD8u;
        goto label_33ccd8;
    }
    ctx->pc = 0x33CCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33CCD8u);
        ctx->pc = 0x33CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCD0u;
        // 0x33ccd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CCD0u, 0x33CCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CCD8u;
label_33ccd8:
    // 0x33ccd8: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x33ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_33ccdc:
    // 0x33ccdc: 0x94820032  lhu         $v0, 0x32($a0)
    ctx->pc = 0x33ccdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
label_33cce0:
    // 0x33cce0: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x33cce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_33cce4:
    // 0x33cce4: 0xa4820032  sh          $v0, 0x32($a0)
    ctx->pc = 0x33cce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 2));
label_33cce8:
    // 0x33cce8: 0x8e300080  lw          $s0, 0x80($s1)
    ctx->pc = 0x33cce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_33ccec:
    // 0x33ccec: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_33ccf0:
    if (ctx->pc == 0x33CCF0u) {
        ctx->pc = 0x33CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCECu;
        // 0x33ccf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CCF4u;
        goto label_33ccf4;
    }
    ctx->pc = 0x33CCECu;
    {
        const bool branch_taken_0x33ccec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ccec) {
            ctx->pc = 0x33CCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CCECu;
            // 0x33ccf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CD1Cu;
            goto label_33cd1c;
        }
    }
    ctx->pc = 0x33CCF4u;
label_33ccf4:
    // 0x33ccf4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x33ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_33ccf8:
    // 0x33ccf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33ccf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ccfc:
    // 0x33ccfc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x33ccfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_33cd00:
    // 0x33cd00: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x33cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_33cd04:
    // 0x33cd04: 0x60f809  jalr        $v1
label_33cd08:
    if (ctx->pc == 0x33CD08u) {
        ctx->pc = 0x33CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD04u;
        // 0x33cd08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD0Cu;
        goto label_33cd0c;
    }
    ctx->pc = 0x33CD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33CD0Cu);
        ctx->pc = 0x33CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD04u;
        // 0x33cd08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CD04u, 0x33CD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CD0Cu;
label_33cd0c:
    // 0x33cd0c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x33cd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33cd10:
    // 0x33cd10: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_33cd14:
    if (ctx->pc == 0x33CD14u) {
        ctx->pc = 0x33CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD10u;
        // 0x33cd14: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD18u;
        goto label_33cd18;
    }
    ctx->pc = 0x33CD10u;
    {
        const bool branch_taken_0x33cd10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cd10) {
            ctx->pc = 0x33CD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CD10u;
            // 0x33cd14: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ccf8;
        }
    }
    ctx->pc = 0x33CD18u;
label_33cd18:
    // 0x33cd18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33cd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cd1c:
    // 0x33cd1c: 0xc0d01e8  jal         func_3407A0
label_33cd20:
    if (ctx->pc == 0x33CD20u) {
        ctx->pc = 0x33CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD1Cu;
        // 0x33cd20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD24u;
        goto label_33cd24;
    }
    ctx->pc = 0x33CD1Cu;
    SET_GPR_U32(ctx, 31, 0x33CD24u);
    ctx->pc = 0x33CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CD1Cu;
    // 0x33cd20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3407A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3407A0u, 0x33CD1Cu, 0x33CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CD24u;
label_33cd24:
    // 0x33cd24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33cd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33cd28:
    // 0x33cd28: 0xc0d019a  jal         func_340668
label_33cd2c:
    if (ctx->pc == 0x33CD2Cu) {
        ctx->pc = 0x33CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD28u;
        // 0x33cd2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD30u;
        goto label_33cd30;
    }
    ctx->pc = 0x33CD28u;
    SET_GPR_U32(ctx, 31, 0x33CD30u);
    ctx->pc = 0x33CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CD28u;
    // 0x33cd2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x33CD28u, 0x33CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CD30u;
label_33cd30:
    // 0x33cd30: 0xc0d07ca  jal         func_341F28
label_33cd34:
    if (ctx->pc == 0x33CD34u) {
        ctx->pc = 0x33CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD30u;
        // 0x33cd34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD38u;
        goto label_33cd38;
    }
    ctx->pc = 0x33CD30u;
    SET_GPR_U32(ctx, 31, 0x33CD38u);
    ctx->pc = 0x33CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CD30u;
    // 0x33cd34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341F28u, 0x33CD30u, 0x33CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CD38u;
label_33cd38:
    // 0x33cd38: 0x10000005  b           . + 4 + (0x5 << 2)
label_33cd3c:
    if (ctx->pc == 0x33CD3Cu) {
        ctx->pc = 0x33CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD38u;
        // 0x33cd3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD40u;
        goto label_33cd40;
    }
    ctx->pc = 0x33CD38u;
    {
        const bool branch_taken_0x33cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD38u;
        // 0x33cd3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd38) {
            ctx->pc = 0x33CD50u;
            goto label_33cd50;
        }
    }
    ctx->pc = 0x33CD40u;
label_33cd40:
    // 0x33cd40: 0x2862003c  slti        $v0, $v1, 0x3C
    ctx->pc = 0x33cd40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
label_33cd44:
    // 0x33cd44: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_33cd48:
    if (ctx->pc == 0x33CD48u) {
        ctx->pc = 0x33CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD44u;
        // 0x33cd48: 0x263100e0  addiu       $s1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD4Cu;
        goto label_33cd4c;
    }
    ctx->pc = 0x33CD44u;
    {
        const bool branch_taken_0x33cd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD44u;
        // 0x33cd48: 0x263100e0  addiu       $s1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd44) {
            ctx->pc = 0x33CC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33cc88;
        }
    }
    ctx->pc = 0x33CD4Cu;
label_33cd4c:
    // 0x33cd4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33cd4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cd50:
    // 0x33cd50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33cd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33cd54:
    // 0x33cd54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33cd54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33cd58:
    // 0x33cd58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33cd58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33cd5c:
    // 0x33cd5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x33cd5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33cd60:
    // 0x33cd60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33cd64:
    // 0x33cd64: 0x3e00008  jr          $ra
label_33cd68:
    if (ctx->pc == 0x33CD68u) {
        ctx->pc = 0x33CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD64u;
        // 0x33cd68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD6Cu;
        goto label_33cd6c;
    }
    ctx->pc = 0x33CD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD64u;
        // 0x33cd68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CD6Cu;
label_33cd6c:
    // 0x33cd6c: 0x0  nop
    ctx->pc = 0x33cd6cu;
    // NOP
    ctx->pc = 0x33cd70u;
}
