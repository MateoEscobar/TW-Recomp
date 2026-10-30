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

// Function: sub_0016CC60
// Address: 0x16cc60 - 0x16cdf0
void sub_0016CC60_0x16cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CC60_0x16cc60");
#endif

    switch (ctx->pc) {
        case 0x16cc60u: goto label_16cc60;
        case 0x16cc64u: goto label_16cc64;
        case 0x16cc68u: goto label_16cc68;
        case 0x16cc6cu: goto label_16cc6c;
        case 0x16cc70u: goto label_16cc70;
        case 0x16cc74u: goto label_16cc74;
        case 0x16cc78u: goto label_16cc78;
        case 0x16cc7cu: goto label_16cc7c;
        case 0x16cc80u: goto label_16cc80;
        case 0x16cc84u: goto label_16cc84;
        case 0x16cc88u: goto label_16cc88;
        case 0x16cc8cu: goto label_16cc8c;
        case 0x16cc90u: goto label_16cc90;
        case 0x16cc94u: goto label_16cc94;
        case 0x16cc98u: goto label_16cc98;
        case 0x16cc9cu: goto label_16cc9c;
        case 0x16cca0u: goto label_16cca0;
        case 0x16cca4u: goto label_16cca4;
        case 0x16cca8u: goto label_16cca8;
        case 0x16ccacu: goto label_16ccac;
        case 0x16ccb0u: goto label_16ccb0;
        case 0x16ccb4u: goto label_16ccb4;
        case 0x16ccb8u: goto label_16ccb8;
        case 0x16ccbcu: goto label_16ccbc;
        case 0x16ccc0u: goto label_16ccc0;
        case 0x16ccc4u: goto label_16ccc4;
        case 0x16ccc8u: goto label_16ccc8;
        case 0x16ccccu: goto label_16cccc;
        case 0x16ccd0u: goto label_16ccd0;
        case 0x16ccd4u: goto label_16ccd4;
        case 0x16ccd8u: goto label_16ccd8;
        case 0x16ccdcu: goto label_16ccdc;
        case 0x16cce0u: goto label_16cce0;
        case 0x16cce4u: goto label_16cce4;
        case 0x16cce8u: goto label_16cce8;
        case 0x16ccecu: goto label_16ccec;
        case 0x16ccf0u: goto label_16ccf0;
        case 0x16ccf4u: goto label_16ccf4;
        case 0x16ccf8u: goto label_16ccf8;
        case 0x16ccfcu: goto label_16ccfc;
        case 0x16cd00u: goto label_16cd00;
        case 0x16cd04u: goto label_16cd04;
        case 0x16cd08u: goto label_16cd08;
        case 0x16cd0cu: goto label_16cd0c;
        case 0x16cd10u: goto label_16cd10;
        case 0x16cd14u: goto label_16cd14;
        case 0x16cd18u: goto label_16cd18;
        case 0x16cd1cu: goto label_16cd1c;
        case 0x16cd20u: goto label_16cd20;
        case 0x16cd24u: goto label_16cd24;
        case 0x16cd28u: goto label_16cd28;
        case 0x16cd2cu: goto label_16cd2c;
        case 0x16cd30u: goto label_16cd30;
        case 0x16cd34u: goto label_16cd34;
        case 0x16cd38u: goto label_16cd38;
        case 0x16cd3cu: goto label_16cd3c;
        case 0x16cd40u: goto label_16cd40;
        case 0x16cd44u: goto label_16cd44;
        case 0x16cd48u: goto label_16cd48;
        case 0x16cd4cu: goto label_16cd4c;
        case 0x16cd50u: goto label_16cd50;
        case 0x16cd54u: goto label_16cd54;
        case 0x16cd58u: goto label_16cd58;
        case 0x16cd5cu: goto label_16cd5c;
        case 0x16cd60u: goto label_16cd60;
        case 0x16cd64u: goto label_16cd64;
        case 0x16cd68u: goto label_16cd68;
        case 0x16cd6cu: goto label_16cd6c;
        case 0x16cd70u: goto label_16cd70;
        case 0x16cd74u: goto label_16cd74;
        case 0x16cd78u: goto label_16cd78;
        case 0x16cd7cu: goto label_16cd7c;
        case 0x16cd80u: goto label_16cd80;
        case 0x16cd84u: goto label_16cd84;
        case 0x16cd88u: goto label_16cd88;
        case 0x16cd8cu: goto label_16cd8c;
        case 0x16cd90u: goto label_16cd90;
        case 0x16cd94u: goto label_16cd94;
        case 0x16cd98u: goto label_16cd98;
        case 0x16cd9cu: goto label_16cd9c;
        case 0x16cda0u: goto label_16cda0;
        case 0x16cda4u: goto label_16cda4;
        case 0x16cda8u: goto label_16cda8;
        case 0x16cdacu: goto label_16cdac;
        case 0x16cdb0u: goto label_16cdb0;
        case 0x16cdb4u: goto label_16cdb4;
        case 0x16cdb8u: goto label_16cdb8;
        case 0x16cdbcu: goto label_16cdbc;
        case 0x16cdc0u: goto label_16cdc0;
        case 0x16cdc4u: goto label_16cdc4;
        case 0x16cdc8u: goto label_16cdc8;
        case 0x16cdccu: goto label_16cdcc;
        case 0x16cdd0u: goto label_16cdd0;
        case 0x16cdd4u: goto label_16cdd4;
        case 0x16cdd8u: goto label_16cdd8;
        case 0x16cddcu: goto label_16cddc;
        case 0x16cde0u: goto label_16cde0;
        case 0x16cde4u: goto label_16cde4;
        case 0x16cde8u: goto label_16cde8;
        case 0x16cdecu: goto label_16cdec;
        default: break;
    }

    ctx->pc = 0x16cc60u;

label_16cc60:
    // 0x16cc60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16cc64:
    // 0x16cc64: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16cc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_16cc68:
    // 0x16cc68: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_16cc6c:
    // 0x16cc6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16cc6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cc70:
    // 0x16cc70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16cc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_16cc74:
    // 0x16cc74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16cc78:
    // 0x16cc78: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x16cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_16cc7c:
    // 0x16cc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16cc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16cc80:
    // 0x16cc80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16cc84:
    // 0x16cc84: 0x0  nop
    ctx->pc = 0x16cc84u;
    // NOP
label_16cc88:
    // 0x16cc88: 0xc05b0e2  jal         func_16C388
label_16cc8c:
    if (ctx->pc == 0x16CC8Cu) {
        ctx->pc = 0x16CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC88u;
        // 0x16cc8c: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CC90u;
        goto label_16cc90;
    }
    ctx->pc = 0x16CC88u;
    SET_GPR_U32(ctx, 31, 0x16CC90u);
    ctx->pc = 0x16CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC88u;
    // 0x16cc8c: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16CC88u, 0x16CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC90u;
label_16cc90:
    // 0x16cc90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16cc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cc94:
    // 0x16cc94: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_16cc98:
    // 0x16cc98: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_16cc9c:
    if (ctx->pc == 0x16CC9Cu) {
        ctx->pc = 0x16CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC98u;
        // 0x16cc9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCA0u;
        goto label_16cca0;
    }
    ctx->pc = 0x16CC98u;
    {
        const bool branch_taken_0x16cc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC98u;
        // 0x16cc9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc98) {
            ctx->pc = 0x16CDBCu;
            goto label_16cdbc;
        }
    }
    ctx->pc = 0x16CCA0u;
label_16cca0:
    // 0x16cca0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x16cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_16cca4:
    // 0x16cca4: 0x10430046  beq         $v0, $v1, . + 4 + (0x46 << 2)
label_16cca8:
    if (ctx->pc == 0x16CCA8u) {
        ctx->pc = 0x16CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCA4u;
        // 0x16cca8: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCACu;
        goto label_16ccac;
    }
    ctx->pc = 0x16CCA4u;
    {
        const bool branch_taken_0x16cca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCA4u;
        // 0x16cca8: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cca4) {
            ctx->pc = 0x16CDC0u;
            goto label_16cdc0;
        }
    }
    ctx->pc = 0x16CCACu;
label_16ccac:
    // 0x16ccac: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x16ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_16ccb0:
    // 0x16ccb0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x16ccb0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16ccb4:
    // 0x16ccb4: 0x16430028  bne         $s2, $v1, . + 4 + (0x28 << 2)
label_16ccb8:
    if (ctx->pc == 0x16CCB8u) {
        ctx->pc = 0x16CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCB4u;
        // 0x16ccb8: 0x26110048  addiu       $s1, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCBCu;
        goto label_16ccbc;
    }
    ctx->pc = 0x16CCB4u;
    {
        const bool branch_taken_0x16ccb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x16CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCB4u;
        // 0x16ccb8: 0x26110048  addiu       $s1, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccb4) {
            ctx->pc = 0x16CD58u;
            goto label_16cd58;
        }
    }
    ctx->pc = 0x16CCBCu;
label_16ccbc:
    // 0x16ccbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ccc0:
    // 0x16ccc0: 0xc05a632  jal         func_1698C8
label_16ccc4:
    if (ctx->pc == 0x16CCC4u) {
        ctx->pc = 0x16CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCC0u;
        // 0x16ccc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCC8u;
        goto label_16ccc8;
    }
    ctx->pc = 0x16CCC0u;
    SET_GPR_U32(ctx, 31, 0x16CCC8u);
    ctx->pc = 0x16CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CCC0u;
    // 0x16ccc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698C8u, 0x16CCC0u, 0x16CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CCC8u;
label_16ccc8:
    // 0x16ccc8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x16ccc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_16cccc:
    // 0x16cccc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x16ccccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_16ccd0:
    // 0x16ccd0: 0xc0e409a  jal         func_390268
label_16ccd4:
    if (ctx->pc == 0x16CCD4u) {
        ctx->pc = 0x16CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCD0u;
        // 0x16ccd4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCD8u;
        goto label_16ccd8;
    }
    ctx->pc = 0x16CCD0u;
    SET_GPR_U32(ctx, 31, 0x16CCD8u);
    ctx->pc = 0x16CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CCD0u;
    // 0x16ccd4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16CCD0u, 0x16CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CCD8u;
label_16ccd8:
    // 0x16ccd8: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_16ccdc:
    if (ctx->pc == 0x16CCDCu) {
        ctx->pc = 0x16CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCD8u;
        // 0x16ccdc: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCE0u;
        goto label_16cce0;
    }
    ctx->pc = 0x16CCD8u;
    {
        const bool branch_taken_0x16ccd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ccd8) {
            ctx->pc = 0x16CCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CCD8u;
            // 0x16ccdc: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CDC0u;
            goto label_16cdc0;
        }
    }
    ctx->pc = 0x16CCE0u;
label_16cce0:
    // 0x16cce0: 0xc087502  jal         func_21D408
label_16cce4:
    if (ctx->pc == 0x16CCE4u) {
        ctx->pc = 0x16CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCE0u;
        // 0x16cce4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCE8u;
        goto label_16cce8;
    }
    ctx->pc = 0x16CCE0u;
    SET_GPR_U32(ctx, 31, 0x16CCE8u);
    ctx->pc = 0x16CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CCE0u;
    // 0x16cce4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16CCE0u, 0x16CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CCE8u;
label_16cce8:
    // 0x16cce8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x16cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_16ccec:
    // 0x16ccec: 0x14700034  bne         $v1, $s0, . + 4 + (0x34 << 2)
label_16ccf0:
    if (ctx->pc == 0x16CCF0u) {
        ctx->pc = 0x16CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCECu;
        // 0x16ccf0: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCF4u;
        goto label_16ccf4;
    }
    ctx->pc = 0x16CCECu;
    {
        const bool branch_taken_0x16ccec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x16CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCECu;
        // 0x16ccf0: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccec) {
            ctx->pc = 0x16CDC0u;
            goto label_16cdc0;
        }
    }
    ctx->pc = 0x16CCF4u;
label_16ccf4:
    // 0x16ccf4: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x16ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_16ccf8:
    // 0x16ccf8: 0x244502bc  addiu       $a1, $v0, 0x2BC
    ctx->pc = 0x16ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 700));
label_16ccfc:
    // 0x16ccfc: 0x50a00030  beql        $a1, $zero, . + 4 + (0x30 << 2)
label_16cd00:
    if (ctx->pc == 0x16CD00u) {
        ctx->pc = 0x16CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCFCu;
        // 0x16cd00: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD04u;
        goto label_16cd04;
    }
    ctx->pc = 0x16CCFCu;
    {
        const bool branch_taken_0x16ccfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ccfc) {
            ctx->pc = 0x16CD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CCFCu;
            // 0x16cd00: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CDC0u;
            goto label_16cdc0;
        }
    }
    ctx->pc = 0x16CD04u;
label_16cd04:
    // 0x16cd04: 0x804202bc  lb          $v0, 0x2BC($v0)
    ctx->pc = 0x16cd04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 700)));
label_16cd08:
    // 0x16cd08: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_16cd0c:
    if (ctx->pc == 0x16CD0Cu) {
        ctx->pc = 0x16CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD08u;
        // 0x16cd0c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD10u;
        goto label_16cd10;
    }
    ctx->pc = 0x16CD08u;
    {
        const bool branch_taken_0x16cd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD08u;
        // 0x16cd0c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd08) {
            ctx->pc = 0x16CDBCu;
            goto label_16cdbc;
        }
    }
    ctx->pc = 0x16CD10u;
label_16cd10:
    // 0x16cd10: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x16cd10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_16cd14:
    // 0x16cd14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16cd18:
    // 0x16cd18: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x16cd18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_16cd1c:
    // 0x16cd1c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x16cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_16cd20:
    // 0x16cd20: 0x40f809  jalr        $v0
label_16cd24:
    if (ctx->pc == 0x16CD24u) {
        ctx->pc = 0x16CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD20u;
        // 0x16cd24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD28u;
        goto label_16cd28;
    }
    ctx->pc = 0x16CD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16CD28u);
        ctx->pc = 0x16CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD20u;
        // 0x16cd24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CD20u, 0x16CD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CD28u;
label_16cd28:
    // 0x16cd28: 0x14520025  bne         $v0, $s2, . + 4 + (0x25 << 2)
label_16cd2c:
    if (ctx->pc == 0x16CD2Cu) {
        ctx->pc = 0x16CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD28u;
        // 0x16cd2c: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD30u;
        goto label_16cd30;
    }
    ctx->pc = 0x16CD28u;
    {
        const bool branch_taken_0x16cd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x16CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD28u;
        // 0x16cd2c: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd28) {
            ctx->pc = 0x16CDC0u;
            goto label_16cdc0;
        }
    }
    ctx->pc = 0x16CD30u;
label_16cd30:
    // 0x16cd30: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x16cd30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_16cd34:
    // 0x16cd34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cd38:
    // 0x16cd38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16cd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cd3c:
    // 0x16cd3c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16cd40:
    // 0x16cd40: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x16cd40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_16cd44:
    // 0x16cd44: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x16cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16cd48:
    // 0x16cd48: 0x60f809  jalr        $v1
label_16cd4c:
    if (ctx->pc == 0x16CD4Cu) {
        ctx->pc = 0x16CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD48u;
        // 0x16cd4c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD50u;
        goto label_16cd50;
    }
    ctx->pc = 0x16CD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16CD50u);
        ctx->pc = 0x16CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD48u;
        // 0x16cd4c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CD48u, 0x16CD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CD50u;
label_16cd50:
    // 0x16cd50: 0x1000001b  b           . + 4 + (0x1B << 2)
label_16cd54:
    if (ctx->pc == 0x16CD54u) {
        ctx->pc = 0x16CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD50u;
        // 0x16cd54: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD58u;
        goto label_16cd58;
    }
    ctx->pc = 0x16CD50u;
    {
        const bool branch_taken_0x16cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD50u;
        // 0x16cd54: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd50) {
            ctx->pc = 0x16CDC0u;
            goto label_16cdc0;
        }
    }
    ctx->pc = 0x16CD58u;
label_16cd58:
    // 0x16cd58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16cd58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cd5c:
    // 0x16cd5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16cd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cd60:
    // 0x16cd60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16cd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16cd64:
    // 0x16cd64: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16cd64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_16cd68:
    // 0x16cd68: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_16cd6c:
    if (ctx->pc == 0x16CD6Cu) {
        ctx->pc = 0x16CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD68u;
        // 0x16cd6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD70u;
        goto label_16cd70;
    }
    ctx->pc = 0x16CD68u;
    {
        const bool branch_taken_0x16cd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD68u;
        // 0x16cd6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd68) {
            ctx->pc = 0x16CDA8u;
            goto label_16cda8;
        }
    }
    ctx->pc = 0x16CD70u;
label_16cd70:
    // 0x16cd70: 0xc137826  jal         func_4DE098
label_16cd74:
    if (ctx->pc == 0x16CD74u) {
        ctx->pc = 0x16CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD70u;
        // 0x16cd74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD78u;
        goto label_16cd78;
    }
    ctx->pc = 0x16CD70u;
    SET_GPR_U32(ctx, 31, 0x16CD78u);
    ctx->pc = 0x16CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD70u;
    // 0x16cd74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16CD70u, 0x16CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD78u;
label_16cd78:
    // 0x16cd78: 0xc0e409a  jal         func_390268
label_16cd7c:
    if (ctx->pc == 0x16CD7Cu) {
        ctx->pc = 0x16CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD78u;
        // 0x16cd7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD80u;
        goto label_16cd80;
    }
    ctx->pc = 0x16CD78u;
    SET_GPR_U32(ctx, 31, 0x16CD80u);
    ctx->pc = 0x16CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD78u;
    // 0x16cd7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16CD78u, 0x16CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD80u;
label_16cd80:
    // 0x16cd80: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_16cd84:
    if (ctx->pc == 0x16CD84u) {
        ctx->pc = 0x16CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD80u;
        // 0x16cd84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD88u;
        goto label_16cd88;
    }
    ctx->pc = 0x16CD80u;
    {
        const bool branch_taken_0x16cd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD80u;
        // 0x16cd84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd80) {
            ctx->pc = 0x16CD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cd60;
        }
    }
    ctx->pc = 0x16CD88u;
label_16cd88:
    // 0x16cd88: 0xc087502  jal         func_21D408
label_16cd8c:
    if (ctx->pc == 0x16CD8Cu) {
        ctx->pc = 0x16CD90u;
        goto label_16cd90;
    }
    ctx->pc = 0x16CD88u;
    SET_GPR_U32(ctx, 31, 0x16CD90u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16CD88u, 0x16CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD90u;
label_16cd90:
    // 0x16cd90: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x16cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_16cd94:
    // 0x16cd94: 0xc0a3658  jal         func_28D960
label_16cd98:
    if (ctx->pc == 0x16CD98u) {
        ctx->pc = 0x16CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD94u;
        // 0x16cd98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD9Cu;
        goto label_16cd9c;
    }
    ctx->pc = 0x16CD94u;
    SET_GPR_U32(ctx, 31, 0x16CD9Cu);
    ctx->pc = 0x16CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD94u;
    // 0x16cd98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x16CD94u, 0x16CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD9Cu;
label_16cd9c:
    // 0x16cd9c: 0x440fff1  bltz        $v0, . + 4 + (-0xF << 2)
label_16cda0:
    if (ctx->pc == 0x16CDA0u) {
        ctx->pc = 0x16CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD9Cu;
        // 0x16cda0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDA4u;
        goto label_16cda4;
    }
    ctx->pc = 0x16CD9Cu;
    {
        const bool branch_taken_0x16cd9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD9Cu;
        // 0x16cda0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd9c) {
            ctx->pc = 0x16CD64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cd64;
        }
    }
    ctx->pc = 0x16CDA4u;
label_16cda4:
    // 0x16cda4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16cda4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cda8:
    // 0x16cda8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cdac:
    // 0x16cdac: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
label_16cdb0:
    if (ctx->pc == 0x16CDB0u) {
        ctx->pc = 0x16CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDACu;
        // 0x16cdb0: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDB4u;
        goto label_16cdb4;
    }
    ctx->pc = 0x16CDACu;
    {
        const bool branch_taken_0x16cdac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDACu;
        // 0x16cdb0: 0x141400  sll         $v0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdac) {
            ctx->pc = 0x16CDC0u;
            goto label_16cdc0;
        }
    }
    ctx->pc = 0x16CDB4u;
label_16cdb4:
    // 0x16cdb4: 0xc05a87a  jal         func_16A1E8
label_16cdb8:
    if (ctx->pc == 0x16CDB8u) {
        ctx->pc = 0x16CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDB4u;
        // 0x16cdb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDBCu;
        goto label_16cdbc;
    }
    ctx->pc = 0x16CDB4u;
    SET_GPR_U32(ctx, 31, 0x16CDBCu);
    ctx->pc = 0x16CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CDB4u;
    // 0x16cdb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1E8u, 0x16CDB4u, 0x16CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CDBCu;
label_16cdbc:
    // 0x16cdbc: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x16cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
label_16cdc0:
    // 0x16cdc0: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x16cdc0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
label_16cdc4:
    // 0x16cdc4: 0x2a630020  slti        $v1, $s3, 0x20
    ctx->pc = 0x16cdc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
label_16cdc8:
    // 0x16cdc8: 0x5460ffaf  bnel        $v1, $zero, . + 4 + (-0x51 << 2)
label_16cdcc:
    if (ctx->pc == 0x16CDCCu) {
        ctx->pc = 0x16CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDC8u;
        // 0x16cdcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDD0u;
        goto label_16cdd0;
    }
    ctx->pc = 0x16CDC8u;
    {
        const bool branch_taken_0x16cdc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cdc8) {
            ctx->pc = 0x16CDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CDC8u;
            // 0x16cdcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cc88;
        }
    }
    ctx->pc = 0x16CDD0u;
label_16cdd0:
    // 0x16cdd0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16cdd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16cdd4:
    // 0x16cdd4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16cdd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16cdd8:
    // 0x16cdd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16cdd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16cddc:
    // 0x16cddc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16cddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16cde0:
    // 0x16cde0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x16cde0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16cde4:
    // 0x16cde4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16cde8:
    // 0x16cde8: 0x3e00008  jr          $ra
label_16cdec:
    if (ctx->pc == 0x16CDECu) {
        ctx->pc = 0x16CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDE8u;
        // 0x16cdec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDF0u;
        goto label_fallthrough_0x16cde8;
    }
    ctx->pc = 0x16CDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDE8u;
        // 0x16cdec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16cde8:
    ctx->pc = 0x16CDF0u;
}
