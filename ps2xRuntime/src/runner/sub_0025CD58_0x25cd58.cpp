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

// Function: sub_0025CD58
// Address: 0x25cd58 - 0x25cf10
void sub_0025CD58_0x25cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD58_0x25cd58");
#endif

    switch (ctx->pc) {
        case 0x25cd58u: goto label_25cd58;
        case 0x25cd5cu: goto label_25cd5c;
        case 0x25cd60u: goto label_25cd60;
        case 0x25cd64u: goto label_25cd64;
        case 0x25cd68u: goto label_25cd68;
        case 0x25cd6cu: goto label_25cd6c;
        case 0x25cd70u: goto label_25cd70;
        case 0x25cd74u: goto label_25cd74;
        case 0x25cd78u: goto label_25cd78;
        case 0x25cd7cu: goto label_25cd7c;
        case 0x25cd80u: goto label_25cd80;
        case 0x25cd84u: goto label_25cd84;
        case 0x25cd88u: goto label_25cd88;
        case 0x25cd8cu: goto label_25cd8c;
        case 0x25cd90u: goto label_25cd90;
        case 0x25cd94u: goto label_25cd94;
        case 0x25cd98u: goto label_25cd98;
        case 0x25cd9cu: goto label_25cd9c;
        case 0x25cda0u: goto label_25cda0;
        case 0x25cda4u: goto label_25cda4;
        case 0x25cda8u: goto label_25cda8;
        case 0x25cdacu: goto label_25cdac;
        case 0x25cdb0u: goto label_25cdb0;
        case 0x25cdb4u: goto label_25cdb4;
        case 0x25cdb8u: goto label_25cdb8;
        case 0x25cdbcu: goto label_25cdbc;
        case 0x25cdc0u: goto label_25cdc0;
        case 0x25cdc4u: goto label_25cdc4;
        case 0x25cdc8u: goto label_25cdc8;
        case 0x25cdccu: goto label_25cdcc;
        case 0x25cdd0u: goto label_25cdd0;
        case 0x25cdd4u: goto label_25cdd4;
        case 0x25cdd8u: goto label_25cdd8;
        case 0x25cddcu: goto label_25cddc;
        case 0x25cde0u: goto label_25cde0;
        case 0x25cde4u: goto label_25cde4;
        case 0x25cde8u: goto label_25cde8;
        case 0x25cdecu: goto label_25cdec;
        case 0x25cdf0u: goto label_25cdf0;
        case 0x25cdf4u: goto label_25cdf4;
        case 0x25cdf8u: goto label_25cdf8;
        case 0x25cdfcu: goto label_25cdfc;
        case 0x25ce00u: goto label_25ce00;
        case 0x25ce04u: goto label_25ce04;
        case 0x25ce08u: goto label_25ce08;
        case 0x25ce0cu: goto label_25ce0c;
        case 0x25ce10u: goto label_25ce10;
        case 0x25ce14u: goto label_25ce14;
        case 0x25ce18u: goto label_25ce18;
        case 0x25ce1cu: goto label_25ce1c;
        case 0x25ce20u: goto label_25ce20;
        case 0x25ce24u: goto label_25ce24;
        case 0x25ce28u: goto label_25ce28;
        case 0x25ce2cu: goto label_25ce2c;
        case 0x25ce30u: goto label_25ce30;
        case 0x25ce34u: goto label_25ce34;
        case 0x25ce38u: goto label_25ce38;
        case 0x25ce3cu: goto label_25ce3c;
        case 0x25ce40u: goto label_25ce40;
        case 0x25ce44u: goto label_25ce44;
        case 0x25ce48u: goto label_25ce48;
        case 0x25ce4cu: goto label_25ce4c;
        case 0x25ce50u: goto label_25ce50;
        case 0x25ce54u: goto label_25ce54;
        case 0x25ce58u: goto label_25ce58;
        case 0x25ce5cu: goto label_25ce5c;
        case 0x25ce60u: goto label_25ce60;
        case 0x25ce64u: goto label_25ce64;
        case 0x25ce68u: goto label_25ce68;
        case 0x25ce6cu: goto label_25ce6c;
        case 0x25ce70u: goto label_25ce70;
        case 0x25ce74u: goto label_25ce74;
        case 0x25ce78u: goto label_25ce78;
        case 0x25ce7cu: goto label_25ce7c;
        case 0x25ce80u: goto label_25ce80;
        case 0x25ce84u: goto label_25ce84;
        case 0x25ce88u: goto label_25ce88;
        case 0x25ce8cu: goto label_25ce8c;
        case 0x25ce90u: goto label_25ce90;
        case 0x25ce94u: goto label_25ce94;
        case 0x25ce98u: goto label_25ce98;
        case 0x25ce9cu: goto label_25ce9c;
        case 0x25cea0u: goto label_25cea0;
        case 0x25cea4u: goto label_25cea4;
        case 0x25cea8u: goto label_25cea8;
        case 0x25ceacu: goto label_25ceac;
        case 0x25ceb0u: goto label_25ceb0;
        case 0x25ceb4u: goto label_25ceb4;
        case 0x25ceb8u: goto label_25ceb8;
        case 0x25cebcu: goto label_25cebc;
        case 0x25cec0u: goto label_25cec0;
        case 0x25cec4u: goto label_25cec4;
        case 0x25cec8u: goto label_25cec8;
        case 0x25ceccu: goto label_25cecc;
        case 0x25ced0u: goto label_25ced0;
        case 0x25ced4u: goto label_25ced4;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cedcu: goto label_25cedc;
        case 0x25cee0u: goto label_25cee0;
        case 0x25cee4u: goto label_25cee4;
        case 0x25cee8u: goto label_25cee8;
        case 0x25ceecu: goto label_25ceec;
        case 0x25cef0u: goto label_25cef0;
        case 0x25cef4u: goto label_25cef4;
        case 0x25cef8u: goto label_25cef8;
        case 0x25cefcu: goto label_25cefc;
        case 0x25cf00u: goto label_25cf00;
        case 0x25cf04u: goto label_25cf04;
        case 0x25cf08u: goto label_25cf08;
        case 0x25cf0cu: goto label_25cf0c;
        default: break;
    }

    ctx->pc = 0x25cd58u;

label_25cd58:
    // 0x25cd58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25cd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25cd5c:
    // 0x25cd5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_25cd60:
    // 0x25cd60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25cd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_25cd64:
    // 0x25cd64: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25cd64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25cd68:
    // 0x25cd68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25cd6c:
    // 0x25cd6c: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25cd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25cd70:
    // 0x25cd70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25cd74:
    // 0x25cd74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cd74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25cd78:
    // 0x25cd78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x25cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_25cd7c:
    // 0x25cd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cd80:
    // 0x25cd80: 0xc041532  jal         func_1054C8
label_25cd84:
    if (ctx->pc == 0x25CD84u) {
        ctx->pc = 0x25CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD80u;
        // 0x25cd84: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD88u;
        goto label_25cd88;
    }
    ctx->pc = 0x25CD80u;
    SET_GPR_U32(ctx, 31, 0x25CD88u);
    ctx->pc = 0x25CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD80u;
    // 0x25cd84: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25CD80u, 0x25CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD88u;
label_25cd88:
    // 0x25cd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cd8c:
    // 0x25cd8c: 0xc041532  jal         func_1054C8
label_25cd90:
    if (ctx->pc == 0x25CD90u) {
        ctx->pc = 0x25CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD8Cu;
        // 0x25cd90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD94u;
        goto label_25cd94;
    }
    ctx->pc = 0x25CD8Cu;
    SET_GPR_U32(ctx, 31, 0x25CD94u);
    ctx->pc = 0x25CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD8Cu;
    // 0x25cd90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25CD8Cu, 0x25CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD94u;
label_25cd94:
    // 0x25cd94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cd94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25cd98:
    // 0x25cd98: 0xc088ee6  jal         func_223B98
label_25cd9c:
    if (ctx->pc == 0x25CD9Cu) {
        ctx->pc = 0x25CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD98u;
        // 0x25cd9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CDA0u;
        goto label_25cda0;
    }
    ctx->pc = 0x25CD98u;
    SET_GPR_U32(ctx, 31, 0x25CDA0u);
    ctx->pc = 0x25CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD98u;
    // 0x25cd9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x25CD98u, 0x25CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CDA0u;
label_25cda0:
    // 0x25cda0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_25cda4:
    if (ctx->pc == 0x25CDA4u) {
        ctx->pc = 0x25CDA8u;
        goto label_25cda8;
    }
    ctx->pc = 0x25CDA0u;
    {
        const bool branch_taken_0x25cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cda0) {
            ctx->pc = 0x25CDC4u;
            goto label_25cdc4;
        }
    }
    ctx->pc = 0x25CDA8u;
label_25cda8:
    // 0x25cda8: 0xc095018  jal         func_254060
label_25cdac:
    if (ctx->pc == 0x25CDACu) {
        ctx->pc = 0x25CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDA8u;
        // 0x25cdac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CDB0u;
        goto label_25cdb0;
    }
    ctx->pc = 0x25CDA8u;
    SET_GPR_U32(ctx, 31, 0x25CDB0u);
    ctx->pc = 0x25CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDA8u;
    // 0x25cdac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x25CDA8u, 0x25CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CDB0u;
label_25cdb0:
    // 0x25cdb0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x25cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25cdb4:
    // 0x25cdb4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_25cdb8:
    if (ctx->pc == 0x25CDB8u) {
        ctx->pc = 0x25CDBCu;
        goto label_25cdbc;
    }
    ctx->pc = 0x25CDB4u;
    {
        const bool branch_taken_0x25cdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25cdb4) {
            ctx->pc = 0x25CDC4u;
            goto label_25cdc4;
        }
    }
    ctx->pc = 0x25CDBCu;
label_25cdbc:
    // 0x25cdbc: 0xc094fca  jal         func_253F28
label_25cdc0:
    if (ctx->pc == 0x25CDC0u) {
        ctx->pc = 0x25CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDBCu;
        // 0x25cdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CDC4u;
        goto label_25cdc4;
    }
    ctx->pc = 0x25CDBCu;
    SET_GPR_U32(ctx, 31, 0x25CDC4u);
    ctx->pc = 0x25CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDBCu;
    // 0x25cdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x25CDBCu, 0x25CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CDC4u;
label_25cdc4:
    // 0x25cdc4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_25cdc8:
    if (ctx->pc == 0x25CDC8u) {
        ctx->pc = 0x25CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDC4u;
        // 0x25cdc8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CDCCu;
        goto label_25cdcc;
    }
    ctx->pc = 0x25CDC4u;
    {
        const bool branch_taken_0x25cdc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDC4u;
        // 0x25cdc8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cdc4) {
            ctx->pc = 0x25CE04u;
            goto label_25ce04;
        }
    }
    ctx->pc = 0x25CDCCu;
label_25cdcc:
    // 0x25cdcc: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25cdd0:
    // 0x25cdd0: 0x3c013fa2  lui         $at, 0x3FA2
    ctx->pc = 0x25cdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16290 << 16));
label_25cdd4:
    // 0x25cdd4: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x25cdd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
label_25cdd8:
    // 0x25cdd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25cdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25cddc:
    // 0x25cddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25cde0:
    // 0x25cde0: 0xc44c00dc  lwc1        $f12, 0xDC($v0)
    ctx->pc = 0x25cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25cde4:
    // 0x25cde4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25cde4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cde8:
    // 0x25cde8: 0x8c460060  lw          $a2, 0x60($v0)
    ctx->pc = 0x25cde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_25cdec:
    // 0x25cdec: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x25cdecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_25cdf0:
    // 0x25cdf0: 0x8c67bd30  lw          $a3, -0x42D0($v1)
    ctx->pc = 0x25cdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_25cdf4:
    // 0x25cdf4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x25cdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_25cdf8:
    // 0x25cdf8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25cdf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_25cdfc:
    // 0x25cdfc: 0xc042484  jal         func_109210
label_25ce00:
    if (ctx->pc == 0x25CE00u) {
        ctx->pc = 0x25CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDFCu;
        // 0x25ce00: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE04u;
        goto label_25ce04;
    }
    ctx->pc = 0x25CDFCu;
    SET_GPR_U32(ctx, 31, 0x25CE04u);
    ctx->pc = 0x25CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDFCu;
    // 0x25ce00: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x25CDFCu, 0x25CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE04u;
label_25ce04:
    // 0x25ce04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25ce08:
    // 0x25ce08: 0x24050701  addiu       $a1, $zero, 0x701
    ctx->pc = 0x25ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
label_25ce0c:
    // 0x25ce0c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25ce0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25ce10:
    // 0x25ce10: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25ce14:
    // 0x25ce14: 0x60f809  jalr        $v1
label_25ce18:
    if (ctx->pc == 0x25CE18u) {
        ctx->pc = 0x25CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE14u;
        // 0x25ce18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE1Cu;
        goto label_25ce1c;
    }
    ctx->pc = 0x25CE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25CE1Cu);
        ctx->pc = 0x25CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE14u;
        // 0x25ce18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CE14u, 0x25CE1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CE1Cu;
label_25ce1c:
    // 0x25ce1c: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x25ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25ce20:
    // 0x25ce20: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x25ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_25ce24:
    // 0x25ce24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25ce28:
    // 0x25ce28: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x25ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_25ce2c:
    // 0x25ce2c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25ce30:
    // 0x25ce30: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x25ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_25ce34:
    // 0x25ce34: 0x14650015  bne         $v1, $a1, . + 4 + (0x15 << 2)
label_25ce38:
    if (ctx->pc == 0x25CE38u) {
        ctx->pc = 0x25CE3Cu;
        goto label_25ce3c;
    }
    ctx->pc = 0x25CE34u;
    {
        const bool branch_taken_0x25ce34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x25ce34) {
            ctx->pc = 0x25CE8Cu;
            goto label_25ce8c;
        }
    }
    ctx->pc = 0x25CE3Cu;
label_25ce3c:
    // 0x25ce3c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_25ce40:
    if (ctx->pc == 0x25CE40u) {
        ctx->pc = 0x25CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE3Cu;
        // 0x25ce40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE44u;
        goto label_25ce44;
    }
    ctx->pc = 0x25CE3Cu;
    {
        const bool branch_taken_0x25ce3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE3Cu;
        // 0x25ce40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce3c) {
            ctx->pc = 0x25CE5Cu;
            goto label_25ce5c;
        }
    }
    ctx->pc = 0x25CE44u;
label_25ce44:
    // 0x25ce44: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25ce48:
    // 0x25ce48: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25ce48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25ce4c:
    // 0x25ce4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ce50:
    // 0x25ce50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25ce50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ce54:
    // 0x25ce54: 0xc041b20  jal         func_106C80
label_25ce58:
    if (ctx->pc == 0x25CE58u) {
        ctx->pc = 0x25CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE54u;
        // 0x25ce58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE5Cu;
        goto label_25ce5c;
    }
    ctx->pc = 0x25CE54u;
    SET_GPR_U32(ctx, 31, 0x25CE5Cu);
    ctx->pc = 0x25CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE54u;
    // 0x25ce58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25CE54u, 0x25CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE5Cu;
label_25ce5c:
    // 0x25ce5c: 0xc05d484  jal         func_175210
label_25ce60:
    if (ctx->pc == 0x25CE60u) {
        ctx->pc = 0x25CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE5Cu;
        // 0x25ce60: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE64u;
        goto label_25ce64;
    }
    ctx->pc = 0x25CE5Cu;
    SET_GPR_U32(ctx, 31, 0x25CE64u);
    ctx->pc = 0x25CE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE5Cu;
    // 0x25ce60: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25CE5Cu, 0x25CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE64u;
label_25ce64:
    // 0x25ce64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25ce68:
    // 0x25ce68: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25ce68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25ce6c:
    // 0x25ce6c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25ce70:
    // 0x25ce70: 0xa0f809  jalr        $a1
label_25ce74:
    if (ctx->pc == 0x25CE74u) {
        ctx->pc = 0x25CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE70u;
        // 0x25ce74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE78u;
        goto label_25ce78;
    }
    ctx->pc = 0x25CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25CE78u);
        ctx->pc = 0x25CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE70u;
        // 0x25ce74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CE70u, 0x25CE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CE78u;
label_25ce78:
    // 0x25ce78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ce78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ce7c:
    // 0x25ce7c: 0xc087016  jal         func_21C058
label_25ce80:
    if (ctx->pc == 0x25CE80u) {
        ctx->pc = 0x25CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE7Cu;
        // 0x25ce80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE84u;
        goto label_25ce84;
    }
    ctx->pc = 0x25CE7Cu;
    SET_GPR_U32(ctx, 31, 0x25CE84u);
    ctx->pc = 0x25CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE7Cu;
    // 0x25ce80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25CE7Cu, 0x25CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE84u;
label_25ce84:
    // 0x25ce84: 0x10000016  b           . + 4 + (0x16 << 2)
label_25ce88:
    if (ctx->pc == 0x25CE88u) {
        ctx->pc = 0x25CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE84u;
        // 0x25ce88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE8Cu;
        goto label_25ce8c;
    }
    ctx->pc = 0x25CE84u;
    {
        const bool branch_taken_0x25ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE84u;
        // 0x25ce88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce84) {
            ctx->pc = 0x25CEE0u;
            goto label_25cee0;
        }
    }
    ctx->pc = 0x25CE8Cu;
label_25ce8c:
    // 0x25ce8c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_25ce90:
    if (ctx->pc == 0x25CE90u) {
        ctx->pc = 0x25CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE8Cu;
        // 0x25ce90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE94u;
        goto label_25ce94;
    }
    ctx->pc = 0x25CE8Cu;
    {
        const bool branch_taken_0x25ce8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE8Cu;
        // 0x25ce90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce8c) {
            ctx->pc = 0x25CEB4u;
            goto label_25ceb4;
        }
    }
    ctx->pc = 0x25CE94u;
label_25ce94:
    // 0x25ce94: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25ce98:
    // 0x25ce98: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25ce98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25ce9c:
    // 0x25ce9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cea0:
    // 0x25cea0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x25cea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_25cea4:
    // 0x25cea4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x25cea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_25cea8:
    // 0x25cea8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25cea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ceac:
    // 0x25ceac: 0xc041b20  jal         func_106C80
label_25ceb0:
    if (ctx->pc == 0x25CEB0u) {
        ctx->pc = 0x25CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEACu;
        // 0x25ceb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CEB4u;
        goto label_25ceb4;
    }
    ctx->pc = 0x25CEACu;
    SET_GPR_U32(ctx, 31, 0x25CEB4u);
    ctx->pc = 0x25CEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CEACu;
    // 0x25ceb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25CEACu, 0x25CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEB4u;
label_25ceb4:
    // 0x25ceb4: 0xc05d484  jal         func_175210
label_25ceb8:
    if (ctx->pc == 0x25CEB8u) {
        ctx->pc = 0x25CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEB4u;
        // 0x25ceb8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CEBCu;
        goto label_25cebc;
    }
    ctx->pc = 0x25CEB4u;
    SET_GPR_U32(ctx, 31, 0x25CEBCu);
    ctx->pc = 0x25CEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CEB4u;
    // 0x25ceb8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25CEB4u, 0x25CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEBCu;
label_25cebc:
    // 0x25cebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25cec0:
    // 0x25cec0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25cec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25cec4:
    // 0x25cec4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25cec8:
    // 0x25cec8: 0xa0f809  jalr        $a1
label_25cecc:
    if (ctx->pc == 0x25CECCu) {
        ctx->pc = 0x25CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEC8u;
        // 0x25cecc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CED0u;
        goto label_25ced0;
    }
    ctx->pc = 0x25CEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25CED0u);
        ctx->pc = 0x25CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEC8u;
        // 0x25cecc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CEC8u, 0x25CED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CED0u;
label_25ced0:
    // 0x25ced0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ced4:
    // 0x25ced4: 0xc087016  jal         func_21C058
label_25ced8:
    if (ctx->pc == 0x25CED8u) {
        ctx->pc = 0x25CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CED4u;
        // 0x25ced8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CEDCu;
        goto label_25cedc;
    }
    ctx->pc = 0x25CED4u;
    SET_GPR_U32(ctx, 31, 0x25CEDCu);
    ctx->pc = 0x25CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CED4u;
    // 0x25ced8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25CED4u, 0x25CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEDCu;
label_25cedc:
    // 0x25cedc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25cedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25cee0:
    // 0x25cee0: 0xc05d53a  jal         func_1754E8
label_25cee4:
    if (ctx->pc == 0x25CEE4u) {
        ctx->pc = 0x25CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEE0u;
        // 0x25cee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CEE8u;
        goto label_25cee8;
    }
    ctx->pc = 0x25CEE0u;
    SET_GPR_U32(ctx, 31, 0x25CEE8u);
    ctx->pc = 0x25CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CEE0u;
    // 0x25cee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25CEE0u, 0x25CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEE8u;
label_25cee8:
    // 0x25cee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ceec:
    // 0x25ceec: 0xc05d4f6  jal         func_1753D8
label_25cef0:
    if (ctx->pc == 0x25CEF0u) {
        ctx->pc = 0x25CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEECu;
        // 0x25cef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CEF4u;
        goto label_25cef4;
    }
    ctx->pc = 0x25CEECu;
    SET_GPR_U32(ctx, 31, 0x25CEF4u);
    ctx->pc = 0x25CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CEECu;
    // 0x25cef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25CEECu, 0x25CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEF4u;
label_25cef4:
    // 0x25cef4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25cef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25cef8:
    // 0x25cef8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25cef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25cefc:
    // 0x25cefc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25cefcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25cf00:
    // 0x25cf00: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x25cf00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25cf04:
    // 0x25cf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25cf08:
    // 0x25cf08: 0x3e00008  jr          $ra
label_25cf0c:
    if (ctx->pc == 0x25CF0Cu) {
        ctx->pc = 0x25CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF08u;
        // 0x25cf0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF10u;
        goto label_fallthrough_0x25cf08;
    }
    ctx->pc = 0x25CF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF08u;
        // 0x25cf0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25cf08:
    ctx->pc = 0x25CF10u;
}
