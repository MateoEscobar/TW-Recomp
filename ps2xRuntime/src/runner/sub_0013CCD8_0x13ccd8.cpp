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

// Function: sub_0013CCD8
// Address: 0x13ccd8 - 0x13ce78
void sub_0013CCD8_0x13ccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CCD8_0x13ccd8");
#endif

    switch (ctx->pc) {
        case 0x13ccd8u: goto label_13ccd8;
        case 0x13ccdcu: goto label_13ccdc;
        case 0x13cce0u: goto label_13cce0;
        case 0x13cce4u: goto label_13cce4;
        case 0x13cce8u: goto label_13cce8;
        case 0x13ccecu: goto label_13ccec;
        case 0x13ccf0u: goto label_13ccf0;
        case 0x13ccf4u: goto label_13ccf4;
        case 0x13ccf8u: goto label_13ccf8;
        case 0x13ccfcu: goto label_13ccfc;
        case 0x13cd00u: goto label_13cd00;
        case 0x13cd04u: goto label_13cd04;
        case 0x13cd08u: goto label_13cd08;
        case 0x13cd0cu: goto label_13cd0c;
        case 0x13cd10u: goto label_13cd10;
        case 0x13cd14u: goto label_13cd14;
        case 0x13cd18u: goto label_13cd18;
        case 0x13cd1cu: goto label_13cd1c;
        case 0x13cd20u: goto label_13cd20;
        case 0x13cd24u: goto label_13cd24;
        case 0x13cd28u: goto label_13cd28;
        case 0x13cd2cu: goto label_13cd2c;
        case 0x13cd30u: goto label_13cd30;
        case 0x13cd34u: goto label_13cd34;
        case 0x13cd38u: goto label_13cd38;
        case 0x13cd3cu: goto label_13cd3c;
        case 0x13cd40u: goto label_13cd40;
        case 0x13cd44u: goto label_13cd44;
        case 0x13cd48u: goto label_13cd48;
        case 0x13cd4cu: goto label_13cd4c;
        case 0x13cd50u: goto label_13cd50;
        case 0x13cd54u: goto label_13cd54;
        case 0x13cd58u: goto label_13cd58;
        case 0x13cd5cu: goto label_13cd5c;
        case 0x13cd60u: goto label_13cd60;
        case 0x13cd64u: goto label_13cd64;
        case 0x13cd68u: goto label_13cd68;
        case 0x13cd6cu: goto label_13cd6c;
        case 0x13cd70u: goto label_13cd70;
        case 0x13cd74u: goto label_13cd74;
        case 0x13cd78u: goto label_13cd78;
        case 0x13cd7cu: goto label_13cd7c;
        case 0x13cd80u: goto label_13cd80;
        case 0x13cd84u: goto label_13cd84;
        case 0x13cd88u: goto label_13cd88;
        case 0x13cd8cu: goto label_13cd8c;
        case 0x13cd90u: goto label_13cd90;
        case 0x13cd94u: goto label_13cd94;
        case 0x13cd98u: goto label_13cd98;
        case 0x13cd9cu: goto label_13cd9c;
        case 0x13cda0u: goto label_13cda0;
        case 0x13cda4u: goto label_13cda4;
        case 0x13cda8u: goto label_13cda8;
        case 0x13cdacu: goto label_13cdac;
        case 0x13cdb0u: goto label_13cdb0;
        case 0x13cdb4u: goto label_13cdb4;
        case 0x13cdb8u: goto label_13cdb8;
        case 0x13cdbcu: goto label_13cdbc;
        case 0x13cdc0u: goto label_13cdc0;
        case 0x13cdc4u: goto label_13cdc4;
        case 0x13cdc8u: goto label_13cdc8;
        case 0x13cdccu: goto label_13cdcc;
        case 0x13cdd0u: goto label_13cdd0;
        case 0x13cdd4u: goto label_13cdd4;
        case 0x13cdd8u: goto label_13cdd8;
        case 0x13cddcu: goto label_13cddc;
        case 0x13cde0u: goto label_13cde0;
        case 0x13cde4u: goto label_13cde4;
        case 0x13cde8u: goto label_13cde8;
        case 0x13cdecu: goto label_13cdec;
        case 0x13cdf0u: goto label_13cdf0;
        case 0x13cdf4u: goto label_13cdf4;
        case 0x13cdf8u: goto label_13cdf8;
        case 0x13cdfcu: goto label_13cdfc;
        case 0x13ce00u: goto label_13ce00;
        case 0x13ce04u: goto label_13ce04;
        case 0x13ce08u: goto label_13ce08;
        case 0x13ce0cu: goto label_13ce0c;
        case 0x13ce10u: goto label_13ce10;
        case 0x13ce14u: goto label_13ce14;
        case 0x13ce18u: goto label_13ce18;
        case 0x13ce1cu: goto label_13ce1c;
        case 0x13ce20u: goto label_13ce20;
        case 0x13ce24u: goto label_13ce24;
        case 0x13ce28u: goto label_13ce28;
        case 0x13ce2cu: goto label_13ce2c;
        case 0x13ce30u: goto label_13ce30;
        case 0x13ce34u: goto label_13ce34;
        case 0x13ce38u: goto label_13ce38;
        case 0x13ce3cu: goto label_13ce3c;
        case 0x13ce40u: goto label_13ce40;
        case 0x13ce44u: goto label_13ce44;
        case 0x13ce48u: goto label_13ce48;
        case 0x13ce4cu: goto label_13ce4c;
        case 0x13ce50u: goto label_13ce50;
        case 0x13ce54u: goto label_13ce54;
        case 0x13ce58u: goto label_13ce58;
        case 0x13ce5cu: goto label_13ce5c;
        case 0x13ce60u: goto label_13ce60;
        case 0x13ce64u: goto label_13ce64;
        case 0x13ce68u: goto label_13ce68;
        case 0x13ce6cu: goto label_13ce6c;
        case 0x13ce70u: goto label_13ce70;
        case 0x13ce74u: goto label_13ce74;
        default: break;
    }

    ctx->pc = 0x13ccd8u;

label_13ccd8:
    // 0x13ccd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13ccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13ccdc:
    // 0x13ccdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13cce0:
    // 0x13cce0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13cce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_13cce4:
    // 0x13cce4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13cce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13cce8:
    // 0x13cce8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13cce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ccec:
    // 0x13ccec: 0x8c43b19c  lw          $v1, -0x4E64($v0)
    ctx->pc = 0x13ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
label_13ccf0:
    // 0x13ccf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13ccf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13ccf4:
    // 0x13ccf4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_13ccf8:
    // 0x13ccf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13ccfc:
    // 0x13ccfc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13ccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_13cd00:
    // 0x13cd00: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
label_13cd04:
    if (ctx->pc == 0x13CD04u) {
        ctx->pc = 0x13CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD00u;
        // 0x13cd04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD08u;
        goto label_13cd08;
    }
    ctx->pc = 0x13CD00u;
    {
        const bool branch_taken_0x13cd00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD00u;
        // 0x13cd04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd00) {
            ctx->pc = 0x13CE5Cu;
            goto label_13ce5c;
        }
    }
    ctx->pc = 0x13CD08u;
label_13cd08:
    // 0x13cd08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13cd0c:
    // 0x13cd0c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13cd0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13cd10:
    // 0x13cd10: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13cd14:
    // 0x13cd14: 0x40f809  jalr        $v0
label_13cd18:
    if (ctx->pc == 0x13CD18u) {
        ctx->pc = 0x13CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD14u;
        // 0x13cd18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD1Cu;
        goto label_13cd1c;
    }
    ctx->pc = 0x13CD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CD1Cu);
        ctx->pc = 0x13CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD14u;
        // 0x13cd18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CD14u, 0x13CD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CD1Cu;
label_13cd1c:
    // 0x13cd1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x13cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_13cd20:
    // 0x13cd20: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x13cd20u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13cd24:
    // 0x13cd24: 0x8c62b198  lw          $v0, -0x4E68($v1)
    ctx->pc = 0x13cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_13cd28:
    // 0x13cd28: 0x1242004c  beq         $s2, $v0, . + 4 + (0x4C << 2)
label_13cd2c:
    if (ctx->pc == 0x13CD2Cu) {
        ctx->pc = 0x13CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD28u;
        // 0x13cd2c: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD30u;
        goto label_13cd30;
    }
    ctx->pc = 0x13CD28u;
    {
        const bool branch_taken_0x13cd28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x13CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD28u;
        // 0x13cd2c: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd28) {
            ctx->pc = 0x13CE5Cu;
            goto label_13ce5c;
        }
    }
    ctx->pc = 0x13CD30u;
label_13cd30:
    // 0x13cd30: 0xc047e72  jal         func_11F9C8
label_13cd34:
    if (ctx->pc == 0x13CD34u) {
        ctx->pc = 0x13CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD30u;
        // 0x13cd34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD38u;
        goto label_13cd38;
    }
    ctx->pc = 0x13CD30u;
    SET_GPR_U32(ctx, 31, 0x13CD38u);
    ctx->pc = 0x13CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD30u;
    // 0x13cd34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x13CD30u, 0x13CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD38u;
label_13cd38:
    // 0x13cd38: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_13cd3c:
    if (ctx->pc == 0x13CD3Cu) {
        ctx->pc = 0x13CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD38u;
        // 0x13cd3c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD40u;
        goto label_13cd40;
    }
    ctx->pc = 0x13CD38u;
    {
        const bool branch_taken_0x13cd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD38u;
        // 0x13cd3c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd38) {
            ctx->pc = 0x13CD7Cu;
            goto label_13cd7c;
        }
    }
    ctx->pc = 0x13CD40u;
label_13cd40:
    // 0x13cd40: 0xc047e72  jal         func_11F9C8
label_13cd44:
    if (ctx->pc == 0x13CD44u) {
        ctx->pc = 0x13CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD40u;
        // 0x13cd44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD48u;
        goto label_13cd48;
    }
    ctx->pc = 0x13CD40u;
    SET_GPR_U32(ctx, 31, 0x13CD48u);
    ctx->pc = 0x13CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD40u;
    // 0x13cd44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x13CD40u, 0x13CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD48u;
label_13cd48:
    // 0x13cd48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cd4c:
    // 0x13cd4c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x13cd4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_13cd50:
    // 0x13cd50: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x13cd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_13cd54:
    // 0x13cd54: 0xa0f809  jalr        $a1
label_13cd58:
    if (ctx->pc == 0x13CD58u) {
        ctx->pc = 0x13CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD54u;
        // 0x13cd58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD5Cu;
        goto label_13cd5c;
    }
    ctx->pc = 0x13CD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x13CD5Cu);
        ctx->pc = 0x13CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD54u;
        // 0x13cd58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CD54u, 0x13CD5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CD5Cu;
label_13cd5c:
    // 0x13cd5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13cd60:
    // 0x13cd60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cd64:
    // 0x13cd64: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x13cd64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_13cd68:
    // 0x13cd68: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x13cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_13cd6c:
    // 0x13cd6c: 0x40f809  jalr        $v0
label_13cd70:
    if (ctx->pc == 0x13CD70u) {
        ctx->pc = 0x13CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD6Cu;
        // 0x13cd70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD74u;
        goto label_13cd74;
    }
    ctx->pc = 0x13CD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CD74u);
        ctx->pc = 0x13CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD6Cu;
        // 0x13cd70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CD6Cu, 0x13CD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CD74u;
label_13cd74:
    // 0x13cd74: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_13cd78:
    if (ctx->pc == 0x13CD78u) {
        ctx->pc = 0x13CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD74u;
        // 0x13cd78: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD7Cu;
        goto label_13cd7c;
    }
    ctx->pc = 0x13CD74u;
    {
        const bool branch_taken_0x13cd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD74u;
        // 0x13cd78: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cd74) {
            ctx->pc = 0x13CDB0u;
            goto label_13cdb0;
        }
    }
    ctx->pc = 0x13CD7Cu;
label_13cd7c:
    // 0x13cd7c: 0xa22003eb  sb          $zero, 0x3EB($s1)
    ctx->pc = 0x13cd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1003), (uint8_t)GPR_U32(ctx, 0));
label_13cd80:
    // 0x13cd80: 0xae2003e0  sw          $zero, 0x3E0($s1)
    ctx->pc = 0x13cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 992), GPR_U32(ctx, 0));
label_13cd84:
    // 0x13cd84: 0x2442deb8  addiu       $v0, $v0, -0x2148
    ctx->pc = 0x13cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_13cd88:
    // 0x13cd88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cd8c:
    // 0x13cd8c: 0x0  nop
    ctx->pc = 0x13cd8cu;
    // NOP
label_13cd90:
    // 0x13cd90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cd94:
    // 0x13cd94: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_13cd98:
    if (ctx->pc == 0x13CD98u) {
        ctx->pc = 0x13CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD94u;
        // 0x13cd98: 0xa06001b4  sb          $zero, 0x1B4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CD9Cu;
        goto label_13cd9c;
    }
    ctx->pc = 0x13CD94u;
    {
        const bool branch_taken_0x13cd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cd94) {
            ctx->pc = 0x13CD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CD94u;
            // 0x13cd98: 0xa06001b4  sb          $zero, 0x1B4($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CD9Cu;
            goto label_13cd9c;
        }
    }
    ctx->pc = 0x13CD9Cu;
label_13cd9c:
    // 0x13cd9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_13cda0:
    // 0x13cda0: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_13cda4:
    if (ctx->pc == 0x13CDA4u) {
        ctx->pc = 0x13CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDA0u;
        // 0x13cda4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CDA8u;
        goto label_13cda8;
    }
    ctx->pc = 0x13CDA0u;
    {
        const bool branch_taken_0x13cda0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x13CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDA0u;
        // 0x13cda4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cda0) {
            ctx->pc = 0x13CD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cd90;
        }
    }
    ctx->pc = 0x13CDA8u;
label_13cda8:
    // 0x13cda8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_13cdac:
    if (ctx->pc == 0x13CDACu) {
        ctx->pc = 0x13CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDA8u;
        // 0x13cdac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CDB0u;
        goto label_13cdb0;
    }
    ctx->pc = 0x13CDA8u;
    {
        const bool branch_taken_0x13cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDA8u;
        // 0x13cdac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cda8) {
            ctx->pc = 0x13CE60u;
            goto label_13ce60;
        }
    }
    ctx->pc = 0x13CDB0u;
label_13cdb0:
    // 0x13cdb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13cdb4:
    // 0x13cdb4: 0xc047eec  jal         func_11FBB0
label_13cdb8:
    if (ctx->pc == 0x13CDB8u) {
        ctx->pc = 0x13CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDB4u;
        // 0x13cdb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CDBCu;
        goto label_13cdbc;
    }
    ctx->pc = 0x13CDB4u;
    SET_GPR_U32(ctx, 31, 0x13CDBCu);
    ctx->pc = 0x13CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CDB4u;
    // 0x13cdb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13CDB4u, 0x13CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CDBCu;
label_13cdbc:
    // 0x13cdbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cdc0:
    // 0x13cdc0: 0xc047e6c  jal         func_11F9B0
label_13cdc4:
    if (ctx->pc == 0x13CDC4u) {
        ctx->pc = 0x13CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDC0u;
        // 0x13cdc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CDC8u;
        goto label_13cdc8;
    }
    ctx->pc = 0x13CDC0u;
    SET_GPR_U32(ctx, 31, 0x13CDC8u);
    ctx->pc = 0x13CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CDC0u;
    // 0x13cdc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13CDC0u, 0x13CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CDC8u;
label_13cdc8:
    // 0x13cdc8: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_13cdcc:
    if (ctx->pc == 0x13CDCCu) {
        ctx->pc = 0x13CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDC8u;
        // 0x13cdcc: 0x8e63b198  lw          $v1, -0x4E68($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CDD0u;
        goto label_13cdd0;
    }
    ctx->pc = 0x13CDC8u;
    {
        const bool branch_taken_0x13cdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x13CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDC8u;
        // 0x13cdcc: 0x8e63b198  lw          $v1, -0x4E68($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdc8) {
            ctx->pc = 0x13CDE4u;
            goto label_13cde4;
        }
    }
    ctx->pc = 0x13CDD0u;
label_13cdd0:
    // 0x13cdd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13cdd4:
    if (ctx->pc == 0x13CDD4u) {
        ctx->pc = 0x13CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDD0u;
        // 0x13cdd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CDD8u;
        goto label_13cdd8;
    }
    ctx->pc = 0x13CDD0u;
    {
        const bool branch_taken_0x13cdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDD0u;
        // 0x13cdd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdd0) {
            ctx->pc = 0x13CDE4u;
            goto label_13cde4;
        }
    }
    ctx->pc = 0x13CDD8u;
label_13cdd8:
    // 0x13cdd8: 0xc04eeb4  jal         func_13BAD0
label_13cddc:
    if (ctx->pc == 0x13CDDCu) {
        ctx->pc = 0x13CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDD8u;
        // 0x13cddc: 0x26250340  addiu       $a1, $s1, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CDE0u;
        goto label_13cde0;
    }
    ctx->pc = 0x13CDD8u;
    SET_GPR_U32(ctx, 31, 0x13CDE0u);
    ctx->pc = 0x13CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CDD8u;
    // 0x13cddc: 0x26250340  addiu       $a1, $s1, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BAD0u, 0x13CDD8u, 0x13CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CDE0u;
label_13cde0:
    // 0x13cde0: 0x8e63b198  lw          $v1, -0x4E68($s3)
    ctx->pc = 0x13cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
label_13cde4:
    // 0x13cde4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cde8:
    // 0x13cde8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_13cdec:
    if (ctx->pc == 0x13CDECu) {
        ctx->pc = 0x13CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDE8u;
        // 0x13cdec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CDF0u;
        goto label_13cdf0;
    }
    ctx->pc = 0x13CDE8u;
    {
        const bool branch_taken_0x13cde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDE8u;
        // 0x13cdec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cde8) {
            ctx->pc = 0x13CE1Cu;
            goto label_13ce1c;
        }
    }
    ctx->pc = 0x13CDF0u;
label_13cdf0:
    // 0x13cdf0: 0x922203e7  lbu         $v0, 0x3E7($s1)
    ctx->pc = 0x13cdf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 999)));
label_13cdf4:
    // 0x13cdf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_13cdf8:
    if (ctx->pc == 0x13CDF8u) {
        ctx->pc = 0x13CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDF4u;
        // 0x13cdf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CDFCu;
        goto label_13cdfc;
    }
    ctx->pc = 0x13CDF4u;
    {
        const bool branch_taken_0x13cdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDF4u;
        // 0x13cdf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdf4) {
            ctx->pc = 0x13CE08u;
            goto label_13ce08;
        }
    }
    ctx->pc = 0x13CDFCu;
label_13cdfc:
    // 0x13cdfc: 0xc04f16a  jal         func_13C5A8
label_13ce00:
    if (ctx->pc == 0x13CE00u) {
        ctx->pc = 0x13CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDFCu;
        // 0x13ce00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE04u;
        goto label_13ce04;
    }
    ctx->pc = 0x13CDFCu;
    SET_GPR_U32(ctx, 31, 0x13CE04u);
    ctx->pc = 0x13CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CDFCu;
    // 0x13ce00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C5A8u, 0x13CDFCu, 0x13CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE04u;
label_13ce04:
    // 0x13ce04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ce04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ce08:
    // 0x13ce08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ce08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ce0c:
    // 0x13ce0c: 0xc048314  jal         func_120C50
label_13ce10:
    if (ctx->pc == 0x13CE10u) {
        ctx->pc = 0x13CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE0Cu;
        // 0x13ce10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE14u;
        goto label_13ce14;
    }
    ctx->pc = 0x13CE0Cu;
    SET_GPR_U32(ctx, 31, 0x13CE14u);
    ctx->pc = 0x13CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE0Cu;
    // 0x13ce10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x13CE0Cu, 0x13CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE14u;
label_13ce14:
    // 0x13ce14: 0x10000012  b           . + 4 + (0x12 << 2)
label_13ce18:
    if (ctx->pc == 0x13CE18u) {
        ctx->pc = 0x13CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE14u;
        // 0x13ce18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE1Cu;
        goto label_13ce1c;
    }
    ctx->pc = 0x13CE14u;
    {
        const bool branch_taken_0x13ce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE14u;
        // 0x13ce18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce14) {
            ctx->pc = 0x13CE60u;
            goto label_13ce60;
        }
    }
    ctx->pc = 0x13CE1Cu;
label_13ce1c:
    // 0x13ce1c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_13ce20:
    if (ctx->pc == 0x13CE20u) {
        ctx->pc = 0x13CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE1Cu;
        // 0x13ce20: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE24u;
        goto label_13ce24;
    }
    ctx->pc = 0x13CE1Cu;
    {
        const bool branch_taken_0x13ce1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE1Cu;
        // 0x13ce20: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce1c) {
            ctx->pc = 0x13CE60u;
            goto label_13ce60;
        }
    }
    ctx->pc = 0x13CE24u;
label_13ce24:
    // 0x13ce24: 0xc04f16a  jal         func_13C5A8
label_13ce28:
    if (ctx->pc == 0x13CE28u) {
        ctx->pc = 0x13CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE24u;
        // 0x13ce28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE2Cu;
        goto label_13ce2c;
    }
    ctx->pc = 0x13CE24u;
    SET_GPR_U32(ctx, 31, 0x13CE2Cu);
    ctx->pc = 0x13CE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE24u;
    // 0x13ce28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C5A8u, 0x13CE24u, 0x13CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE2Cu;
label_13ce2c:
    // 0x13ce2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ce30:
    // 0x13ce30: 0xc047eec  jal         func_11FBB0
label_13ce34:
    if (ctx->pc == 0x13CE34u) {
        ctx->pc = 0x13CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE30u;
        // 0x13ce34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE38u;
        goto label_13ce38;
    }
    ctx->pc = 0x13CE30u;
    SET_GPR_U32(ctx, 31, 0x13CE38u);
    ctx->pc = 0x13CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE30u;
    // 0x13ce34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13CE30u, 0x13CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE38u;
label_13ce38:
    // 0x13ce38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ce38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ce3c:
    // 0x13ce3c: 0xc047e6c  jal         func_11F9B0
label_13ce40:
    if (ctx->pc == 0x13CE40u) {
        ctx->pc = 0x13CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE3Cu;
        // 0x13ce40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE44u;
        goto label_13ce44;
    }
    ctx->pc = 0x13CE3Cu;
    SET_GPR_U32(ctx, 31, 0x13CE44u);
    ctx->pc = 0x13CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE3Cu;
    // 0x13ce40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13CE3Cu, 0x13CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE44u;
label_13ce44:
    // 0x13ce44: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_13ce48:
    if (ctx->pc == 0x13CE48u) {
        ctx->pc = 0x13CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE44u;
        // 0x13ce48: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE4Cu;
        goto label_13ce4c;
    }
    ctx->pc = 0x13CE44u;
    {
        const bool branch_taken_0x13ce44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x13CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE44u;
        // 0x13ce48: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce44) {
            ctx->pc = 0x13CE60u;
            goto label_13ce60;
        }
    }
    ctx->pc = 0x13CE4Cu;
label_13ce4c:
    // 0x13ce4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13ce50:
    if (ctx->pc == 0x13CE50u) {
        ctx->pc = 0x13CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE4Cu;
        // 0x13ce50: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE54u;
        goto label_13ce54;
    }
    ctx->pc = 0x13CE4Cu;
    {
        const bool branch_taken_0x13ce4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE4Cu;
        // 0x13ce50: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce4c) {
            ctx->pc = 0x13CE64u;
            goto label_13ce64;
        }
    }
    ctx->pc = 0x13CE54u;
label_13ce54:
    // 0x13ce54: 0xc04f16a  jal         func_13C5A8
label_13ce58:
    if (ctx->pc == 0x13CE58u) {
        ctx->pc = 0x13CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE54u;
        // 0x13ce58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE5Cu;
        goto label_13ce5c;
    }
    ctx->pc = 0x13CE54u;
    SET_GPR_U32(ctx, 31, 0x13CE5Cu);
    ctx->pc = 0x13CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE54u;
    // 0x13ce58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C5A8u, 0x13CE54u, 0x13CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE5Cu;
label_13ce5c:
    // 0x13ce5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13ce5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13ce60:
    // 0x13ce60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13ce60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13ce64:
    // 0x13ce64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ce64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ce68:
    // 0x13ce68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13ce68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ce6c:
    // 0x13ce6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ce6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ce70:
    // 0x13ce70: 0x3e00008  jr          $ra
label_13ce74:
    if (ctx->pc == 0x13CE74u) {
        ctx->pc = 0x13CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE70u;
        // 0x13ce74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CE78u;
        goto label_fallthrough_0x13ce70;
    }
    ctx->pc = 0x13CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE70u;
        // 0x13ce74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13ce70:
    ctx->pc = 0x13CE78u;
}
