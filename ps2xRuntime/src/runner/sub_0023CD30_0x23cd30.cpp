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

// Function: sub_0023CD30
// Address: 0x23cd30 - 0x23ceb8
void sub_0023CD30_0x23cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CD30_0x23cd30");
#endif

    switch (ctx->pc) {
        case 0x23cd30u: goto label_23cd30;
        case 0x23cd34u: goto label_23cd34;
        case 0x23cd38u: goto label_23cd38;
        case 0x23cd3cu: goto label_23cd3c;
        case 0x23cd40u: goto label_23cd40;
        case 0x23cd44u: goto label_23cd44;
        case 0x23cd48u: goto label_23cd48;
        case 0x23cd4cu: goto label_23cd4c;
        case 0x23cd50u: goto label_23cd50;
        case 0x23cd54u: goto label_23cd54;
        case 0x23cd58u: goto label_23cd58;
        case 0x23cd5cu: goto label_23cd5c;
        case 0x23cd60u: goto label_23cd60;
        case 0x23cd64u: goto label_23cd64;
        case 0x23cd68u: goto label_23cd68;
        case 0x23cd6cu: goto label_23cd6c;
        case 0x23cd70u: goto label_23cd70;
        case 0x23cd74u: goto label_23cd74;
        case 0x23cd78u: goto label_23cd78;
        case 0x23cd7cu: goto label_23cd7c;
        case 0x23cd80u: goto label_23cd80;
        case 0x23cd84u: goto label_23cd84;
        case 0x23cd88u: goto label_23cd88;
        case 0x23cd8cu: goto label_23cd8c;
        case 0x23cd90u: goto label_23cd90;
        case 0x23cd94u: goto label_23cd94;
        case 0x23cd98u: goto label_23cd98;
        case 0x23cd9cu: goto label_23cd9c;
        case 0x23cda0u: goto label_23cda0;
        case 0x23cda4u: goto label_23cda4;
        case 0x23cda8u: goto label_23cda8;
        case 0x23cdacu: goto label_23cdac;
        case 0x23cdb0u: goto label_23cdb0;
        case 0x23cdb4u: goto label_23cdb4;
        case 0x23cdb8u: goto label_23cdb8;
        case 0x23cdbcu: goto label_23cdbc;
        case 0x23cdc0u: goto label_23cdc0;
        case 0x23cdc4u: goto label_23cdc4;
        case 0x23cdc8u: goto label_23cdc8;
        case 0x23cdccu: goto label_23cdcc;
        case 0x23cdd0u: goto label_23cdd0;
        case 0x23cdd4u: goto label_23cdd4;
        case 0x23cdd8u: goto label_23cdd8;
        case 0x23cddcu: goto label_23cddc;
        case 0x23cde0u: goto label_23cde0;
        case 0x23cde4u: goto label_23cde4;
        case 0x23cde8u: goto label_23cde8;
        case 0x23cdecu: goto label_23cdec;
        case 0x23cdf0u: goto label_23cdf0;
        case 0x23cdf4u: goto label_23cdf4;
        case 0x23cdf8u: goto label_23cdf8;
        case 0x23cdfcu: goto label_23cdfc;
        case 0x23ce00u: goto label_23ce00;
        case 0x23ce04u: goto label_23ce04;
        case 0x23ce08u: goto label_23ce08;
        case 0x23ce0cu: goto label_23ce0c;
        case 0x23ce10u: goto label_23ce10;
        case 0x23ce14u: goto label_23ce14;
        case 0x23ce18u: goto label_23ce18;
        case 0x23ce1cu: goto label_23ce1c;
        case 0x23ce20u: goto label_23ce20;
        case 0x23ce24u: goto label_23ce24;
        case 0x23ce28u: goto label_23ce28;
        case 0x23ce2cu: goto label_23ce2c;
        case 0x23ce30u: goto label_23ce30;
        case 0x23ce34u: goto label_23ce34;
        case 0x23ce38u: goto label_23ce38;
        case 0x23ce3cu: goto label_23ce3c;
        case 0x23ce40u: goto label_23ce40;
        case 0x23ce44u: goto label_23ce44;
        case 0x23ce48u: goto label_23ce48;
        case 0x23ce4cu: goto label_23ce4c;
        case 0x23ce50u: goto label_23ce50;
        case 0x23ce54u: goto label_23ce54;
        case 0x23ce58u: goto label_23ce58;
        case 0x23ce5cu: goto label_23ce5c;
        case 0x23ce60u: goto label_23ce60;
        case 0x23ce64u: goto label_23ce64;
        case 0x23ce68u: goto label_23ce68;
        case 0x23ce6cu: goto label_23ce6c;
        case 0x23ce70u: goto label_23ce70;
        case 0x23ce74u: goto label_23ce74;
        case 0x23ce78u: goto label_23ce78;
        case 0x23ce7cu: goto label_23ce7c;
        case 0x23ce80u: goto label_23ce80;
        case 0x23ce84u: goto label_23ce84;
        case 0x23ce88u: goto label_23ce88;
        case 0x23ce8cu: goto label_23ce8c;
        case 0x23ce90u: goto label_23ce90;
        case 0x23ce94u: goto label_23ce94;
        case 0x23ce98u: goto label_23ce98;
        case 0x23ce9cu: goto label_23ce9c;
        case 0x23cea0u: goto label_23cea0;
        case 0x23cea4u: goto label_23cea4;
        case 0x23cea8u: goto label_23cea8;
        case 0x23ceacu: goto label_23ceac;
        case 0x23ceb0u: goto label_23ceb0;
        case 0x23ceb4u: goto label_23ceb4;
        default: break;
    }

    ctx->pc = 0x23cd30u;

label_23cd30:
    // 0x23cd30: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x23cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_23cd34:
    // 0x23cd34: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x23cd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_23cd38:
    // 0x23cd38: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x23cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_23cd3c:
    // 0x23cd3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23cd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23cd40:
    // 0x23cd40: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x23cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_23cd44:
    // 0x23cd44: 0x92220255  lbu         $v0, 0x255($s1)
    ctx->pc = 0x23cd44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 597)));
label_23cd48:
    // 0x23cd48: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_23cd4c:
    if (ctx->pc == 0x23CD4Cu) {
        ctx->pc = 0x23CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD48u;
        // 0x23cd4c: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD50u;
        goto label_23cd50;
    }
    ctx->pc = 0x23CD48u;
    {
        const bool branch_taken_0x23cd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD48u;
        // 0x23cd4c: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd48) {
            ctx->pc = 0x23CEA4u;
            goto label_23cea4;
        }
    }
    ctx->pc = 0x23CD50u;
label_23cd50:
    // 0x23cd50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23cd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23cd54:
    // 0x23cd54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23cd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23cd58:
    // 0x23cd58: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x23cd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_23cd5c:
    // 0x23cd5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23cd5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_23cd60:
    // 0x23cd60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23cd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23cd64:
    // 0x23cd64: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x23cd64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23cd68:
    // 0x23cd68: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x23cd68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_23cd6c:
    // 0x23cd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23cd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23cd70:
    // 0x23cd70: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x23cd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_23cd74:
    // 0x23cd74: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x23cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_23cd78:
    // 0x23cd78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x23cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_23cd7c:
    // 0x23cd7c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_23cd80:
    // 0x23cd80: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_23cd84:
    // 0x23cd84: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x23cd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_23cd88:
    // 0x23cd88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23cd88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_23cd8c:
    // 0x23cd8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23cd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23cd90:
    // 0x23cd90: 0x7a270540  lq          $a3, 0x540($s1)
    ctx->pc = 0x23cd90u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 1344)));
label_23cd94:
    // 0x23cd94: 0x7a280550  lq          $t0, 0x550($s1)
    ctx->pc = 0x23cd94u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 1360)));
label_23cd98:
    // 0x23cd98: 0x7a2204e0  lq          $v0, 0x4E0($s1)
    ctx->pc = 0x23cd98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1248)));
label_23cd9c:
    // 0x23cd9c: 0x7a2304f0  lq          $v1, 0x4F0($s1)
    ctx->pc = 0x23cd9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 1264)));
label_23cda0:
    // 0x23cda0: 0x7a250500  lq          $a1, 0x500($s1)
    ctx->pc = 0x23cda0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 1280)));
label_23cda4:
    // 0x23cda4: 0x7a260510  lq          $a2, 0x510($s1)
    ctx->pc = 0x23cda4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 1296)));
label_23cda8:
    // 0x23cda8: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x23cda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_23cdac:
    // 0x23cdac: 0xe5220008  swc1        $f2, 0x8($t1)
    ctx->pc = 0x23cdacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_23cdb0:
    // 0x23cdb0: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x23cdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_23cdb4:
    // 0x23cdb4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x23cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_23cdb8:
    // 0x23cdb8: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x23cdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_23cdbc:
    // 0x23cdbc: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x23cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
label_23cdc0:
    // 0x23cdc0: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x23cdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
label_23cdc4:
    // 0x23cdc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_23cdc8:
    // 0x23cdc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23cdcc:
    // 0x23cdcc: 0xa2200255  sb          $zero, 0x255($s1)
    ctx->pc = 0x23cdccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 597), (uint8_t)GPR_U32(ctx, 0));
label_23cdd0:
    // 0x23cdd0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_23cdd4:
    // 0x23cdd4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x23cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_23cdd8:
    // 0x23cdd8: 0x60f809  jalr        $v1
label_23cddc:
    if (ctx->pc == 0x23CDDCu) {
        ctx->pc = 0x23CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDD8u;
        // 0x23cddc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDE0u;
        goto label_23cde0;
    }
    ctx->pc = 0x23CDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23CDE0u);
        ctx->pc = 0x23CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDD8u;
        // 0x23cddc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CDD8u, 0x23CDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CDE0u;
label_23cde0:
    // 0x23cde0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23cde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23cde4:
    // 0x23cde4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23cde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23cde8:
    // 0x23cde8: 0xc0cd66c  jal         func_3359B0
label_23cdec:
    if (ctx->pc == 0x23CDECu) {
        ctx->pc = 0x23CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDE8u;
        // 0x23cdec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDF0u;
        goto label_23cdf0;
    }
    ctx->pc = 0x23CDE8u;
    SET_GPR_U32(ctx, 31, 0x23CDF0u);
    ctx->pc = 0x23CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDE8u;
    // 0x23cdec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x23CDE8u, 0x23CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDF0u;
label_23cdf0:
    // 0x23cdf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_23cdf4:
    // 0x23cdf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23cdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23cdf8:
    // 0x23cdf8: 0xc0cd66c  jal         func_3359B0
label_23cdfc:
    if (ctx->pc == 0x23CDFCu) {
        ctx->pc = 0x23CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDF8u;
        // 0x23cdfc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE00u;
        goto label_23ce00;
    }
    ctx->pc = 0x23CDF8u;
    SET_GPR_U32(ctx, 31, 0x23CE00u);
    ctx->pc = 0x23CDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CDF8u;
    // 0x23cdfc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x23CDF8u, 0x23CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE00u;
label_23ce00:
    // 0x23ce00: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23ce04:
    // 0x23ce04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ce04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ce08:
    // 0x23ce08: 0xc0cd66c  jal         func_3359B0
label_23ce0c:
    if (ctx->pc == 0x23CE0Cu) {
        ctx->pc = 0x23CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE08u;
        // 0x23ce0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE10u;
        goto label_23ce10;
    }
    ctx->pc = 0x23CE08u;
    SET_GPR_U32(ctx, 31, 0x23CE10u);
    ctx->pc = 0x23CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE08u;
    // 0x23ce0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x23CE08u, 0x23CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE10u;
label_23ce10:
    // 0x23ce10: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_23ce14:
    // 0x23ce14: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x23ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_23ce18:
    // 0x23ce18: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x23ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_23ce1c:
    // 0x23ce1c: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x23ce1cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23ce20:
    // 0x23ce20: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_23ce24:
    // 0x23ce24: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x23ce24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23ce28:
    // 0x23ce28: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23ce2c:
    // 0x23ce2c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x23ce2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_23ce30:
    // 0x23ce30: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x23ce30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_23ce34:
    // 0x23ce34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23ce34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23ce38:
    // 0x23ce38: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x23ce38u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23ce3c:
    // 0x23ce3c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x23ce3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_23ce40:
    // 0x23ce40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23ce40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23ce44:
    // 0x23ce44: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23ce44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23ce48:
    // 0x23ce48: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23ce48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23ce4c:
    // 0x23ce4c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x23ce4cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_23ce50:
    // 0x23ce50: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x23ce50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23ce54:
    // 0x23ce54: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x23ce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_23ce58:
    // 0x23ce58: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x23ce58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23ce5c:
    // 0x23ce5c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x23ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ce60:
    // 0x23ce60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23ce60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23ce64:
    // 0x23ce64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23ce64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23ce68:
    // 0x23ce68: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23ce68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23ce6c:
    // 0x23ce6c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x23ce6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23ce70:
    // 0x23ce70: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x23ce70u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_23ce74:
    // 0x23ce74: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x23ce74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23ce78:
    // 0x23ce78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23ce78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23ce7c:
    // 0x23ce7c: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x23ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
label_23ce80:
    // 0x23ce80: 0x7e2301e0  sq          $v1, 0x1E0($s1)
    ctx->pc = 0x23ce80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 480), GPR_VEC(ctx, 3));
label_23ce84:
    // 0x23ce84: 0x7e2401f0  sq          $a0, 0x1F0($s1)
    ctx->pc = 0x23ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 496), GPR_VEC(ctx, 4));
label_23ce88:
    // 0x23ce88: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x23ce88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_23ce8c:
    // 0x23ce8c: 0x7e250200  sq          $a1, 0x200($s1)
    ctx->pc = 0x23ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 512), GPR_VEC(ctx, 5));
label_23ce90:
    // 0x23ce90: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x23ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_23ce94:
    // 0x23ce94: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x23ce94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23ce98:
    // 0x23ce98: 0x7e220210  sq          $v0, 0x210($s1)
    ctx->pc = 0x23ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 528), GPR_VEC(ctx, 2));
label_23ce9c:
    // 0x23ce9c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x23ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_23cea0:
    // 0x23cea0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x23cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_23cea4:
    // 0x23cea4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x23cea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_23cea8:
    // 0x23cea8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x23cea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_23ceac:
    // 0x23ceac: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x23ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_23ceb0:
    // 0x23ceb0: 0x3e00008  jr          $ra
label_23ceb4:
    if (ctx->pc == 0x23CEB4u) {
        ctx->pc = 0x23CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEB0u;
        // 0x23ceb4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEB8u;
        goto label_fallthrough_0x23ceb0;
    }
    ctx->pc = 0x23CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEB0u;
        // 0x23ceb4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23ceb0:
    ctx->pc = 0x23CEB8u;
}
