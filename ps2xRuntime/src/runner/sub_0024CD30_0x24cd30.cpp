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

// Function: sub_0024CD30
// Address: 0x24cd30 - 0x24ce40
void sub_0024CD30_0x24cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CD30_0x24cd30");
#endif

    switch (ctx->pc) {
        case 0x24cd30u: goto label_24cd30;
        case 0x24cd34u: goto label_24cd34;
        case 0x24cd38u: goto label_24cd38;
        case 0x24cd3cu: goto label_24cd3c;
        case 0x24cd40u: goto label_24cd40;
        case 0x24cd44u: goto label_24cd44;
        case 0x24cd48u: goto label_24cd48;
        case 0x24cd4cu: goto label_24cd4c;
        case 0x24cd50u: goto label_24cd50;
        case 0x24cd54u: goto label_24cd54;
        case 0x24cd58u: goto label_24cd58;
        case 0x24cd5cu: goto label_24cd5c;
        case 0x24cd60u: goto label_24cd60;
        case 0x24cd64u: goto label_24cd64;
        case 0x24cd68u: goto label_24cd68;
        case 0x24cd6cu: goto label_24cd6c;
        case 0x24cd70u: goto label_24cd70;
        case 0x24cd74u: goto label_24cd74;
        case 0x24cd78u: goto label_24cd78;
        case 0x24cd7cu: goto label_24cd7c;
        case 0x24cd80u: goto label_24cd80;
        case 0x24cd84u: goto label_24cd84;
        case 0x24cd88u: goto label_24cd88;
        case 0x24cd8cu: goto label_24cd8c;
        case 0x24cd90u: goto label_24cd90;
        case 0x24cd94u: goto label_24cd94;
        case 0x24cd98u: goto label_24cd98;
        case 0x24cd9cu: goto label_24cd9c;
        case 0x24cda0u: goto label_24cda0;
        case 0x24cda4u: goto label_24cda4;
        case 0x24cda8u: goto label_24cda8;
        case 0x24cdacu: goto label_24cdac;
        case 0x24cdb0u: goto label_24cdb0;
        case 0x24cdb4u: goto label_24cdb4;
        case 0x24cdb8u: goto label_24cdb8;
        case 0x24cdbcu: goto label_24cdbc;
        case 0x24cdc0u: goto label_24cdc0;
        case 0x24cdc4u: goto label_24cdc4;
        case 0x24cdc8u: goto label_24cdc8;
        case 0x24cdccu: goto label_24cdcc;
        case 0x24cdd0u: goto label_24cdd0;
        case 0x24cdd4u: goto label_24cdd4;
        case 0x24cdd8u: goto label_24cdd8;
        case 0x24cddcu: goto label_24cddc;
        case 0x24cde0u: goto label_24cde0;
        case 0x24cde4u: goto label_24cde4;
        case 0x24cde8u: goto label_24cde8;
        case 0x24cdecu: goto label_24cdec;
        case 0x24cdf0u: goto label_24cdf0;
        case 0x24cdf4u: goto label_24cdf4;
        case 0x24cdf8u: goto label_24cdf8;
        case 0x24cdfcu: goto label_24cdfc;
        case 0x24ce00u: goto label_24ce00;
        case 0x24ce04u: goto label_24ce04;
        case 0x24ce08u: goto label_24ce08;
        case 0x24ce0cu: goto label_24ce0c;
        case 0x24ce10u: goto label_24ce10;
        case 0x24ce14u: goto label_24ce14;
        case 0x24ce18u: goto label_24ce18;
        case 0x24ce1cu: goto label_24ce1c;
        case 0x24ce20u: goto label_24ce20;
        case 0x24ce24u: goto label_24ce24;
        case 0x24ce28u: goto label_24ce28;
        case 0x24ce2cu: goto label_24ce2c;
        case 0x24ce30u: goto label_24ce30;
        case 0x24ce34u: goto label_24ce34;
        case 0x24ce38u: goto label_24ce38;
        case 0x24ce3cu: goto label_24ce3c;
        default: break;
    }

    ctx->pc = 0x24cd30u;

label_24cd30:
    // 0x24cd30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24cd34:
    // 0x24cd34: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24cd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_24cd38:
    // 0x24cd38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_24cd3c:
    // 0x24cd3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24cd3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24cd40:
    // 0x24cd40: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24cd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_24cd44:
    // 0x24cd44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24cd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_24cd48:
    // 0x24cd48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24cd4c:
    // 0x24cd4c: 0x8e6200d8  lw          $v0, 0xD8($s3)
    ctx->pc = 0x24cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_24cd50:
    // 0x24cd50: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_24cd54:
    if (ctx->pc == 0x24CD54u) {
        ctx->pc = 0x24CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD50u;
        // 0x24cd54: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD58u;
        goto label_24cd58;
    }
    ctx->pc = 0x24CD50u;
    {
        const bool branch_taken_0x24cd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD50u;
        // 0x24cd54: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd50) {
            ctx->pc = 0x24CE24u;
            goto label_24ce24;
        }
    }
    ctx->pc = 0x24CD58u;
label_24cd58:
    // 0x24cd58: 0xc0e4060  jal         func_390180
label_24cd5c:
    if (ctx->pc == 0x24CD5Cu) {
        ctx->pc = 0x24CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD58u;
        // 0x24cd5c: 0x26640348  addiu       $a0, $s3, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD60u;
        goto label_24cd60;
    }
    ctx->pc = 0x24CD58u;
    SET_GPR_U32(ctx, 31, 0x24CD60u);
    ctx->pc = 0x24CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD58u;
    // 0x24cd5c: 0x26640348  addiu       $a0, $s3, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24CD58u, 0x24CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD60u;
label_24cd60:
    // 0x24cd60: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_24cd64:
    if (ctx->pc == 0x24CD64u) {
        ctx->pc = 0x24CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD60u;
        // 0x24cd64: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD68u;
        goto label_24cd68;
    }
    ctx->pc = 0x24CD60u;
    {
        const bool branch_taken_0x24cd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD60u;
        // 0x24cd64: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd60) {
            ctx->pc = 0x24CE24u;
            goto label_24ce24;
        }
    }
    ctx->pc = 0x24CD68u;
label_24cd68:
    // 0x24cd68: 0xc0e4060  jal         func_390180
label_24cd6c:
    if (ctx->pc == 0x24CD6Cu) {
        ctx->pc = 0x24CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD68u;
        // 0x24cd6c: 0x2664034c  addiu       $a0, $s3, 0x34C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 844));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD70u;
        goto label_24cd70;
    }
    ctx->pc = 0x24CD68u;
    SET_GPR_U32(ctx, 31, 0x24CD70u);
    ctx->pc = 0x24CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD68u;
    // 0x24cd6c: 0x2664034c  addiu       $a0, $s3, 0x34C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 844));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24CD68u, 0x24CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD70u;
label_24cd70:
    // 0x24cd70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24cd70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24cd74:
    // 0x24cd74: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
label_24cd78:
    if (ctx->pc == 0x24CD78u) {
        ctx->pc = 0x24CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD74u;
        // 0x24cd78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD7Cu;
        goto label_24cd7c;
    }
    ctx->pc = 0x24CD74u;
    {
        const bool branch_taken_0x24cd74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD74u;
        // 0x24cd78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd74) {
            ctx->pc = 0x24CE20u;
            goto label_24ce20;
        }
    }
    ctx->pc = 0x24CD7Cu;
label_24cd7c:
    // 0x24cd7c: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x24cd7cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_24cd80:
    // 0x24cd80: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x24cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_24cd84:
    // 0x24cd84: 0xc0e44cc  jal         func_391330
label_24cd88:
    if (ctx->pc == 0x24CD88u) {
        ctx->pc = 0x24CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD84u;
        // 0x24cd88: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD8Cu;
        goto label_24cd8c;
    }
    ctx->pc = 0x24CD84u;
    SET_GPR_U32(ctx, 31, 0x24CD8Cu);
    ctx->pc = 0x24CD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD84u;
    // 0x24cd88: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x24CD84u, 0x24CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD8Cu;
label_24cd8c:
    // 0x24cd8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24cd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24cd90:
    // 0x24cd90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24cd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24cd94:
    // 0x24cd94: 0xc0e460a  jal         func_391828
label_24cd98:
    if (ctx->pc == 0x24CD98u) {
        ctx->pc = 0x24CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD94u;
        // 0x24cd98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD9Cu;
        goto label_24cd9c;
    }
    ctx->pc = 0x24CD94u;
    SET_GPR_U32(ctx, 31, 0x24CD9Cu);
    ctx->pc = 0x24CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD94u;
    // 0x24cd98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391828u, 0x24CD94u, 0x24CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD9Cu;
label_24cd9c:
    // 0x24cd9c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x24cd9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24cda0:
    // 0x24cda0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24cda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24cda4:
    // 0x24cda4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24cda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24cda8:
    // 0x24cda8: 0xc0e4620  jal         func_391880
label_24cdac:
    if (ctx->pc == 0x24CDACu) {
        ctx->pc = 0x24CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDA8u;
        // 0x24cdac: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CDB0u;
        goto label_24cdb0;
    }
    ctx->pc = 0x24CDA8u;
    SET_GPR_U32(ctx, 31, 0x24CDB0u);
    ctx->pc = 0x24CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDA8u;
    // 0x24cdac: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391880u, 0x24CDA8u, 0x24CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDB0u;
label_24cdb0:
    // 0x24cdb0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x24cdb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24cdb4:
    // 0x24cdb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24cdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24cdb8:
    // 0x24cdb8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x24cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_24cdbc:
    // 0x24cdbc: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x24cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_24cdc0:
    // 0x24cdc0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x24cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_24cdc4:
    // 0x24cdc4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x24cdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_24cdc8:
    // 0x24cdc8: 0xc0e896c  jal         func_3A25B0
label_24cdcc:
    if (ctx->pc == 0x24CDCCu) {
        ctx->pc = 0x24CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDC8u;
        // 0x24cdcc: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CDD0u;
        goto label_24cdd0;
    }
    ctx->pc = 0x24CDC8u;
    SET_GPR_U32(ctx, 31, 0x24CDD0u);
    ctx->pc = 0x24CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDC8u;
    // 0x24cdcc: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x24CDC8u, 0x24CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDD0u;
label_24cdd0:
    // 0x24cdd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24cdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24cdd4:
    // 0x24cdd4: 0xc0e862e  jal         func_3A18B8
label_24cdd8:
    if (ctx->pc == 0x24CDD8u) {
        ctx->pc = 0x24CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDD4u;
        // 0x24cdd8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CDDCu;
        goto label_24cddc;
    }
    ctx->pc = 0x24CDD4u;
    SET_GPR_U32(ctx, 31, 0x24CDDCu);
    ctx->pc = 0x24CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDD4u;
    // 0x24cdd8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x24CDD4u, 0x24CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDDCu;
label_24cddc:
    // 0x24cddc: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x24cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_24cde0:
    // 0x24cde0: 0x3c02f9fb  lui         $v0, 0xF9FB
    ctx->pc = 0x24cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63995 << 16));
label_24cde4:
    // 0x24cde4: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x24cde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
label_24cde8:
    // 0x24cde8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24cdec:
    // 0x24cdec: 0x8c872c7c  lw          $a3, 0x2C7C($a0)
    ctx->pc = 0x24cdecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11388)));
label_24cdf0:
    // 0x24cdf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24cdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24cdf4:
    // 0x24cdf4: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x24cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_24cdf8:
    // 0x24cdf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24cdf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cdfc:
    // 0x24cdfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24cdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24ce00:
    // 0x24ce00: 0xc0e637e  jal         func_398DF8
label_24ce04:
    if (ctx->pc == 0x24CE04u) {
        ctx->pc = 0x24CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE00u;
        // 0x24ce04: 0x8ce40840  lw          $a0, 0x840($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE08u;
        goto label_24ce08;
    }
    ctx->pc = 0x24CE00u;
    SET_GPR_U32(ctx, 31, 0x24CE08u);
    ctx->pc = 0x24CE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE00u;
    // 0x24ce04: 0x8ce40840  lw          $a0, 0x840($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24CE00u, 0x24CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE08u;
label_24ce08:
    // 0x24ce08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x24ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24ce0c:
    // 0x24ce0c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24ce0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24ce10:
    // 0x24ce10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24ce14:
    // 0x24ce14: 0x40f809  jalr        $v0
label_24ce18:
    if (ctx->pc == 0x24CE18u) {
        ctx->pc = 0x24CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE14u;
        // 0x24ce18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE1Cu;
        goto label_24ce1c;
    }
    ctx->pc = 0x24CE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CE1Cu);
        ctx->pc = 0x24CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE14u;
        // 0x24ce18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CE14u, 0x24CE1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CE1Cu;
label_24ce1c:
    // 0x24ce1c: 0xae620348  sw          $v0, 0x348($s3)
    ctx->pc = 0x24ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 840), GPR_U32(ctx, 2));
label_24ce20:
    // 0x24ce20: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24ce20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24ce24:
    // 0x24ce24: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24ce24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24ce28:
    // 0x24ce28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24ce28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24ce2c:
    // 0x24ce2c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24ce2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24ce30:
    // 0x24ce30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24ce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24ce34:
    // 0x24ce34: 0x3e00008  jr          $ra
label_24ce38:
    if (ctx->pc == 0x24CE38u) {
        ctx->pc = 0x24CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE34u;
        // 0x24ce38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE3Cu;
        goto label_24ce3c;
    }
    ctx->pc = 0x24CE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE34u;
        // 0x24ce38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CE3Cu;
label_24ce3c:
    // 0x24ce3c: 0x0  nop
    ctx->pc = 0x24ce3cu;
    // NOP
    ctx->pc = 0x24ce40u;
}
