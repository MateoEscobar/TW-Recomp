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

// Function: sub_0029CD30
// Address: 0x29cd30 - 0x29ce40
void sub_0029CD30_0x29cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CD30_0x29cd30");
#endif

    switch (ctx->pc) {
        case 0x29cd30u: goto label_29cd30;
        case 0x29cd34u: goto label_29cd34;
        case 0x29cd38u: goto label_29cd38;
        case 0x29cd3cu: goto label_29cd3c;
        case 0x29cd40u: goto label_29cd40;
        case 0x29cd44u: goto label_29cd44;
        case 0x29cd48u: goto label_29cd48;
        case 0x29cd4cu: goto label_29cd4c;
        case 0x29cd50u: goto label_29cd50;
        case 0x29cd54u: goto label_29cd54;
        case 0x29cd58u: goto label_29cd58;
        case 0x29cd5cu: goto label_29cd5c;
        case 0x29cd60u: goto label_29cd60;
        case 0x29cd64u: goto label_29cd64;
        case 0x29cd68u: goto label_29cd68;
        case 0x29cd6cu: goto label_29cd6c;
        case 0x29cd70u: goto label_29cd70;
        case 0x29cd74u: goto label_29cd74;
        case 0x29cd78u: goto label_29cd78;
        case 0x29cd7cu: goto label_29cd7c;
        case 0x29cd80u: goto label_29cd80;
        case 0x29cd84u: goto label_29cd84;
        case 0x29cd88u: goto label_29cd88;
        case 0x29cd8cu: goto label_29cd8c;
        case 0x29cd90u: goto label_29cd90;
        case 0x29cd94u: goto label_29cd94;
        case 0x29cd98u: goto label_29cd98;
        case 0x29cd9cu: goto label_29cd9c;
        case 0x29cda0u: goto label_29cda0;
        case 0x29cda4u: goto label_29cda4;
        case 0x29cda8u: goto label_29cda8;
        case 0x29cdacu: goto label_29cdac;
        case 0x29cdb0u: goto label_29cdb0;
        case 0x29cdb4u: goto label_29cdb4;
        case 0x29cdb8u: goto label_29cdb8;
        case 0x29cdbcu: goto label_29cdbc;
        case 0x29cdc0u: goto label_29cdc0;
        case 0x29cdc4u: goto label_29cdc4;
        case 0x29cdc8u: goto label_29cdc8;
        case 0x29cdccu: goto label_29cdcc;
        case 0x29cdd0u: goto label_29cdd0;
        case 0x29cdd4u: goto label_29cdd4;
        case 0x29cdd8u: goto label_29cdd8;
        case 0x29cddcu: goto label_29cddc;
        case 0x29cde0u: goto label_29cde0;
        case 0x29cde4u: goto label_29cde4;
        case 0x29cde8u: goto label_29cde8;
        case 0x29cdecu: goto label_29cdec;
        case 0x29cdf0u: goto label_29cdf0;
        case 0x29cdf4u: goto label_29cdf4;
        case 0x29cdf8u: goto label_29cdf8;
        case 0x29cdfcu: goto label_29cdfc;
        case 0x29ce00u: goto label_29ce00;
        case 0x29ce04u: goto label_29ce04;
        case 0x29ce08u: goto label_29ce08;
        case 0x29ce0cu: goto label_29ce0c;
        case 0x29ce10u: goto label_29ce10;
        case 0x29ce14u: goto label_29ce14;
        case 0x29ce18u: goto label_29ce18;
        case 0x29ce1cu: goto label_29ce1c;
        case 0x29ce20u: goto label_29ce20;
        case 0x29ce24u: goto label_29ce24;
        case 0x29ce28u: goto label_29ce28;
        case 0x29ce2cu: goto label_29ce2c;
        case 0x29ce30u: goto label_29ce30;
        case 0x29ce34u: goto label_29ce34;
        case 0x29ce38u: goto label_29ce38;
        case 0x29ce3cu: goto label_29ce3c;
        default: break;
    }

    ctx->pc = 0x29cd30u;

label_29cd30:
    // 0x29cd30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_29cd34:
    // 0x29cd34: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x29cd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_29cd38:
    // 0x29cd38: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x29cd38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_29cd3c:
    // 0x29cd3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29cd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cd40:
    // 0x29cd40: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x29cd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_29cd44:
    // 0x29cd44: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_29cd48:
    // 0x29cd48: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x29cd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_29cd4c:
    // 0x29cd4c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29cd4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29cd50:
    // 0x29cd50: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x29cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_29cd54:
    // 0x29cd54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29cd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cd58:
    // 0x29cd58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_29cd5c:
    // 0x29cd5c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x29cd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29cd60:
    // 0x29cd60: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x29cd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_29cd64:
    // 0x29cd64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29cd64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cd68:
    // 0x29cd68: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x29cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_29cd6c:
    // 0x29cd6c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29cd6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29cd70:
    // 0x29cd70: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x29cd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_29cd74:
    // 0x29cd74: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x29cd74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29cd78:
    // 0x29cd78: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x29cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_29cd7c:
    // 0x29cd7c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x29cd7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cd80:
    // 0x29cd80: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x29cd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_29cd84:
    // 0x29cd84: 0x245e4b00  addiu       $fp, $v0, 0x4B00
    ctx->pc = 0x29cd84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29cd88:
    // 0x29cd88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29cd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29cd8c:
    // 0x29cd8c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x29cd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_29cd90:
    // 0x29cd90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29cd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29cd94:
    // 0x29cd94: 0x0  nop
    ctx->pc = 0x29cd94u;
    // NOP
label_29cd98:
    // 0x29cd98: 0xc137826  jal         func_4DE098
label_29cd9c:
    if (ctx->pc == 0x29CD9Cu) {
        ctx->pc = 0x29CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD98u;
        // 0x29cd9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDA0u;
        goto label_29cda0;
    }
    ctx->pc = 0x29CD98u;
    SET_GPR_U32(ctx, 31, 0x29CDA0u);
    ctx->pc = 0x29CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD98u;
    // 0x29cd9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29CD98u, 0x29CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDA0u;
label_29cda0:
    // 0x29cda0: 0xc0e409a  jal         func_390268
label_29cda4:
    if (ctx->pc == 0x29CDA4u) {
        ctx->pc = 0x29CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDA0u;
        // 0x29cda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDA8u;
        goto label_29cda8;
    }
    ctx->pc = 0x29CDA0u;
    SET_GPR_U32(ctx, 31, 0x29CDA8u);
    ctx->pc = 0x29CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDA0u;
    // 0x29cda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29CDA0u, 0x29CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDA8u;
label_29cda8:
    // 0x29cda8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29cda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cdac:
    // 0x29cdac: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_29cdb0:
    if (ctx->pc == 0x29CDB0u) {
        ctx->pc = 0x29CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDACu;
        // 0x29cdb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDB4u;
        goto label_29cdb4;
    }
    ctx->pc = 0x29CDACu;
    {
        const bool branch_taken_0x29cdac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cdac) {
            ctx->pc = 0x29CDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CDACu;
            // 0x29cdb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CE00u;
            goto label_29ce00;
        }
    }
    ctx->pc = 0x29CDB4u;
label_29cdb4:
    // 0x29cdb4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_29cdb8:
    if (ctx->pc == 0x29CDB8u) {
        ctx->pc = 0x29CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDB4u;
        // 0x29cdb8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDBCu;
        goto label_29cdbc;
    }
    ctx->pc = 0x29CDB4u;
    {
        const bool branch_taken_0x29cdb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDB4u;
        // 0x29cdb8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cdb4) {
            ctx->pc = 0x29CDCCu;
            goto label_29cdcc;
        }
    }
    ctx->pc = 0x29CDBCu;
label_29cdbc:
    // 0x29cdbc: 0x240f809  jalr        $s2
label_29cdc0:
    if (ctx->pc == 0x29CDC0u) {
        ctx->pc = 0x29CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDBCu;
        // 0x29cdc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDC4u;
        goto label_29cdc4;
    }
    ctx->pc = 0x29CDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x29CDC4u);
        ctx->pc = 0x29CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDBCu;
        // 0x29cdc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CDBCu, 0x29CDC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CDC4u;
label_29cdc4:
    // 0x29cdc4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_29cdc8:
    if (ctx->pc == 0x29CDC8u) {
        ctx->pc = 0x29CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDC4u;
        // 0x29cdc8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDCCu;
        goto label_29cdcc;
    }
    ctx->pc = 0x29CDC4u;
    {
        const bool branch_taken_0x29cdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cdc4) {
            ctx->pc = 0x29CDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29CDC4u;
            // 0x29cdc8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CE00u;
            goto label_29ce00;
        }
    }
    ctx->pc = 0x29CDCCu;
label_29cdcc:
    // 0x29cdcc: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x29cdccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_29cdd0:
    // 0x29cdd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29cdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29cdd4:
    // 0x29cdd4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29cdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_29cdd8:
    // 0x29cdd8: 0xc0cdb38  jal         func_336CE0
label_29cddc:
    if (ctx->pc == 0x29CDDCu) {
        ctx->pc = 0x29CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDD8u;
        // 0x29cddc: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDE0u;
        goto label_29cde0;
    }
    ctx->pc = 0x29CDD8u;
    SET_GPR_U32(ctx, 31, 0x29CDE0u);
    ctx->pc = 0x29CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDD8u;
    // 0x29cddc: 0xbe2821  addu        $a1, $a1, $fp (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29CDD8u, 0x29CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDE0u;
label_29cde0:
    // 0x29cde0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x29cde0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_29cde4:
    // 0x29cde4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x29cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cde8:
    // 0x29cde8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29cde8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cdec:
    // 0x29cdec: 0x0  nop
    ctx->pc = 0x29cdecu;
    // NOP
label_29cdf0:
    // 0x29cdf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_29cdf4:
    if (ctx->pc == 0x29CDF4u) {
        ctx->pc = 0x29CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDF0u;
        // 0x29cdf4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDF8u;
        goto label_29cdf8;
    }
    ctx->pc = 0x29CDF0u;
    {
        const bool branch_taken_0x29cdf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDF0u;
        // 0x29cdf4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cdf0) {
            ctx->pc = 0x29CE00u;
            goto label_29ce00;
        }
    }
    ctx->pc = 0x29CDF8u;
label_29cdf8:
    // 0x29cdf8: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x29cdf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_29cdfc:
    // 0x29cdfc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x29cdfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ce00:
    // 0x29ce00: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x29ce00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_29ce04:
    // 0x29ce04: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_29ce08:
    if (ctx->pc == 0x29CE08u) {
        ctx->pc = 0x29CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE04u;
        // 0x29ce08: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE0Cu;
        goto label_29ce0c;
    }
    ctx->pc = 0x29CE04u;
    {
        const bool branch_taken_0x29ce04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE04u;
        // 0x29ce08: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce04) {
            ctx->pc = 0x29CD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cd98;
        }
    }
    ctx->pc = 0x29CE0Cu;
label_29ce0c:
    // 0x29ce0c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x29ce0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ce10:
    // 0x29ce10: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x29ce10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29ce14:
    // 0x29ce14: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x29ce14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29ce18:
    // 0x29ce18: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x29ce18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29ce1c:
    // 0x29ce1c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x29ce1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29ce20:
    // 0x29ce20: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x29ce20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29ce24:
    // 0x29ce24: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x29ce24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29ce28:
    // 0x29ce28: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x29ce28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29ce2c:
    // 0x29ce2c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x29ce2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29ce30:
    // 0x29ce30: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x29ce30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ce34:
    // 0x29ce34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ce34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ce38:
    // 0x29ce38: 0x3e00008  jr          $ra
label_29ce3c:
    if (ctx->pc == 0x29CE3Cu) {
        ctx->pc = 0x29CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE38u;
        // 0x29ce3c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE40u;
        goto label_fallthrough_0x29ce38;
    }
    ctx->pc = 0x29CE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE38u;
        // 0x29ce3c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29ce38:
    ctx->pc = 0x29CE40u;
}
