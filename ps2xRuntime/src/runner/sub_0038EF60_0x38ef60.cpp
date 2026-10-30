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

// Function: sub_0038EF60
// Address: 0x38ef60 - 0x38f090
void sub_0038EF60_0x38ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EF60_0x38ef60");
#endif

    switch (ctx->pc) {
        case 0x38ef60u: goto label_38ef60;
        case 0x38ef64u: goto label_38ef64;
        case 0x38ef68u: goto label_38ef68;
        case 0x38ef6cu: goto label_38ef6c;
        case 0x38ef70u: goto label_38ef70;
        case 0x38ef74u: goto label_38ef74;
        case 0x38ef78u: goto label_38ef78;
        case 0x38ef7cu: goto label_38ef7c;
        case 0x38ef80u: goto label_38ef80;
        case 0x38ef84u: goto label_38ef84;
        case 0x38ef88u: goto label_38ef88;
        case 0x38ef8cu: goto label_38ef8c;
        case 0x38ef90u: goto label_38ef90;
        case 0x38ef94u: goto label_38ef94;
        case 0x38ef98u: goto label_38ef98;
        case 0x38ef9cu: goto label_38ef9c;
        case 0x38efa0u: goto label_38efa0;
        case 0x38efa4u: goto label_38efa4;
        case 0x38efa8u: goto label_38efa8;
        case 0x38efacu: goto label_38efac;
        case 0x38efb0u: goto label_38efb0;
        case 0x38efb4u: goto label_38efb4;
        case 0x38efb8u: goto label_38efb8;
        case 0x38efbcu: goto label_38efbc;
        case 0x38efc0u: goto label_38efc0;
        case 0x38efc4u: goto label_38efc4;
        case 0x38efc8u: goto label_38efc8;
        case 0x38efccu: goto label_38efcc;
        case 0x38efd0u: goto label_38efd0;
        case 0x38efd4u: goto label_38efd4;
        case 0x38efd8u: goto label_38efd8;
        case 0x38efdcu: goto label_38efdc;
        case 0x38efe0u: goto label_38efe0;
        case 0x38efe4u: goto label_38efe4;
        case 0x38efe8u: goto label_38efe8;
        case 0x38efecu: goto label_38efec;
        case 0x38eff0u: goto label_38eff0;
        case 0x38eff4u: goto label_38eff4;
        case 0x38eff8u: goto label_38eff8;
        case 0x38effcu: goto label_38effc;
        case 0x38f000u: goto label_38f000;
        case 0x38f004u: goto label_38f004;
        case 0x38f008u: goto label_38f008;
        case 0x38f00cu: goto label_38f00c;
        case 0x38f010u: goto label_38f010;
        case 0x38f014u: goto label_38f014;
        case 0x38f018u: goto label_38f018;
        case 0x38f01cu: goto label_38f01c;
        case 0x38f020u: goto label_38f020;
        case 0x38f024u: goto label_38f024;
        case 0x38f028u: goto label_38f028;
        case 0x38f02cu: goto label_38f02c;
        case 0x38f030u: goto label_38f030;
        case 0x38f034u: goto label_38f034;
        case 0x38f038u: goto label_38f038;
        case 0x38f03cu: goto label_38f03c;
        case 0x38f040u: goto label_38f040;
        case 0x38f044u: goto label_38f044;
        case 0x38f048u: goto label_38f048;
        case 0x38f04cu: goto label_38f04c;
        case 0x38f050u: goto label_38f050;
        case 0x38f054u: goto label_38f054;
        case 0x38f058u: goto label_38f058;
        case 0x38f05cu: goto label_38f05c;
        case 0x38f060u: goto label_38f060;
        case 0x38f064u: goto label_38f064;
        case 0x38f068u: goto label_38f068;
        case 0x38f06cu: goto label_38f06c;
        case 0x38f070u: goto label_38f070;
        case 0x38f074u: goto label_38f074;
        case 0x38f078u: goto label_38f078;
        case 0x38f07cu: goto label_38f07c;
        case 0x38f080u: goto label_38f080;
        case 0x38f084u: goto label_38f084;
        case 0x38f088u: goto label_38f088;
        case 0x38f08cu: goto label_38f08c;
        default: break;
    }

    ctx->pc = 0x38ef60u;

label_38ef60:
    // 0x38ef60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38ef64:
    // 0x38ef64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38ef68:
    // 0x38ef68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38ef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38ef6c:
    // 0x38ef6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ef6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38ef70:
    // 0x38ef70: 0xc0e3bcc  jal         func_38EF30
label_38ef74:
    if (ctx->pc == 0x38EF74u) {
        ctx->pc = 0x38EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF70u;
        // 0x38ef74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EF78u;
        goto label_38ef78;
    }
    ctx->pc = 0x38EF70u;
    SET_GPR_U32(ctx, 31, 0x38EF78u);
    ctx->pc = 0x38EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF70u;
    // 0x38ef74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EF30u, 0x38EF70u, 0x38EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF78u;
label_38ef78:
    // 0x38ef78: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x38ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38ef7c:
    // 0x38ef7c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x38ef7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_38ef80:
    // 0x38ef80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38ef80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ef84:
    // 0x38ef84: 0x0  nop
    ctx->pc = 0x38ef84u;
    // NOP
label_38ef88:
    // 0x38ef88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38ef88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38ef8c:
    // 0x38ef8c: 0x0  nop
    ctx->pc = 0x38ef8cu;
    // NOP
label_38ef90:
    // 0x38ef90: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_38ef94:
    if (ctx->pc == 0x38EF94u) {
        ctx->pc = 0x38EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF90u;
        // 0x38ef94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EF98u;
        goto label_38ef98;
    }
    ctx->pc = 0x38EF90u;
    {
        const bool branch_taken_0x38ef90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF90u;
        // 0x38ef94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef90) {
            ctx->pc = 0x38EFACu;
            goto label_38efac;
        }
    }
    ctx->pc = 0x38EF98u;
label_38ef98:
    // 0x38ef98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38ef98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ef9c:
    // 0x38ef9c: 0xc062c02  jal         func_18B008
label_38efa0:
    if (ctx->pc == 0x38EFA0u) {
        ctx->pc = 0x38EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF9Cu;
        // 0x38efa0: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EFA4u;
        goto label_38efa4;
    }
    ctx->pc = 0x38EF9Cu;
    SET_GPR_U32(ctx, 31, 0x38EFA4u);
    ctx->pc = 0x38EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF9Cu;
    // 0x38efa0: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B008u, 0x38EF9Cu, 0x38EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EFA4u;
label_38efa4:
    // 0x38efa4: 0x10000035  b           . + 4 + (0x35 << 2)
label_38efa8:
    if (ctx->pc == 0x38EFA8u) {
        ctx->pc = 0x38EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFA4u;
        // 0x38efa8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EFACu;
        goto label_38efac;
    }
    ctx->pc = 0x38EFA4u;
    {
        const bool branch_taken_0x38efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFA4u;
        // 0x38efa8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38efa4) {
            ctx->pc = 0x38F07Cu;
            goto label_38f07c;
        }
    }
    ctx->pc = 0x38EFACu;
label_38efac:
    // 0x38efac: 0x960500b2  lhu         $a1, 0xB2($s0)
    ctx->pc = 0x38efacu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 178)));
label_38efb0:
    // 0x38efb0: 0xc0616ac  jal         func_185AB0
label_38efb4:
    if (ctx->pc == 0x38EFB4u) {
        ctx->pc = 0x38EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFB0u;
        // 0x38efb4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EFB8u;
        goto label_38efb8;
    }
    ctx->pc = 0x38EFB0u;
    SET_GPR_U32(ctx, 31, 0x38EFB8u);
    ctx->pc = 0x38EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EFB0u;
    // 0x38efb4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x38EFB0u, 0x38EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EFB8u;
label_38efb8:
    // 0x38efb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38efb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38efbc:
    // 0x38efbc: 0x5220002f  beql        $s1, $zero, . + 4 + (0x2F << 2)
label_38efc0:
    if (ctx->pc == 0x38EFC0u) {
        ctx->pc = 0x38EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFBCu;
        // 0x38efc0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EFC4u;
        goto label_38efc4;
    }
    ctx->pc = 0x38EFBCu;
    {
        const bool branch_taken_0x38efbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38efbc) {
            ctx->pc = 0x38EFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EFBCu;
            // 0x38efc0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F07Cu;
            goto label_38f07c;
        }
    }
    ctx->pc = 0x38EFC4u;
label_38efc4:
    // 0x38efc4: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x38efc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_38efc8:
    // 0x38efc8: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_38efcc:
    if (ctx->pc == 0x38EFCCu) {
        ctx->pc = 0x38EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFC8u;
        // 0x38efcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EFD0u;
        goto label_38efd0;
    }
    ctx->pc = 0x38EFC8u;
    {
        const bool branch_taken_0x38efc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38efc8) {
            ctx->pc = 0x38EFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EFC8u;
            // 0x38efcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F07Cu;
            goto label_38f07c;
        }
    }
    ctx->pc = 0x38EFD0u;
label_38efd0:
    // 0x38efd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38efd4:
    // 0x38efd4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38efd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38efd8:
    // 0x38efd8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38efdc:
    // 0x38efdc: 0x40f809  jalr        $v0
label_38efe0:
    if (ctx->pc == 0x38EFE0u) {
        ctx->pc = 0x38EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFDCu;
        // 0x38efe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EFE4u;
        goto label_38efe4;
    }
    ctx->pc = 0x38EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38EFE4u);
        ctx->pc = 0x38EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFDCu;
        // 0x38efe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EFDCu, 0x38EFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38EFE4u;
label_38efe4:
    // 0x38efe4: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_38efe8:
    if (ctx->pc == 0x38EFE8u) {
        ctx->pc = 0x38EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFE4u;
        // 0x38efe8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EFECu;
        goto label_38efec;
    }
    ctx->pc = 0x38EFE4u;
    {
        const bool branch_taken_0x38efe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38efe4) {
            ctx->pc = 0x38EFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EFE4u;
            // 0x38efe8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F07Cu;
            goto label_38f07c;
        }
    }
    ctx->pc = 0x38EFECu;
label_38efec:
    // 0x38efec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38efecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38eff0:
    // 0x38eff0: 0xc060c0e  jal         func_183038
label_38eff4:
    if (ctx->pc == 0x38EFF4u) {
        ctx->pc = 0x38EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFF0u;
        // 0x38eff4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EFF8u;
        goto label_38eff8;
    }
    ctx->pc = 0x38EFF0u;
    SET_GPR_U32(ctx, 31, 0x38EFF8u);
    ctx->pc = 0x38EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EFF0u;
    // 0x38eff4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183038u, 0x38EFF0u, 0x38EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EFF8u;
label_38eff8:
    // 0x38eff8: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_38effc:
    if (ctx->pc == 0x38EFFCu) {
        ctx->pc = 0x38EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFF8u;
        // 0x38effc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F000u;
        goto label_38f000;
    }
    ctx->pc = 0x38EFF8u;
    {
        const bool branch_taken_0x38eff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38eff8) {
            ctx->pc = 0x38EFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EFF8u;
            // 0x38effc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F07Cu;
            goto label_38f07c;
        }
    }
    ctx->pc = 0x38F000u;
label_38f000:
    // 0x38f000: 0xc060b58  jal         func_182D60
label_38f004:
    if (ctx->pc == 0x38F004u) {
        ctx->pc = 0x38F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F000u;
        // 0x38f004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F008u;
        goto label_38f008;
    }
    ctx->pc = 0x38F000u;
    SET_GPR_U32(ctx, 31, 0x38F008u);
    ctx->pc = 0x38F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F000u;
    // 0x38f004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x38F000u, 0x38F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F008u;
label_38f008:
    // 0x38f008: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x38f008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_38f00c:
    // 0x38f00c: 0xc06078e  jal         func_181E38
label_38f010:
    if (ctx->pc == 0x38F010u) {
        ctx->pc = 0x38F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F00Cu;
        // 0x38f010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F014u;
        goto label_38f014;
    }
    ctx->pc = 0x38F00Cu;
    SET_GPR_U32(ctx, 31, 0x38F014u);
    ctx->pc = 0x38F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F00Cu;
    // 0x38f010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x38F00Cu, 0x38F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F014u;
label_38f014:
    // 0x38f014: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x38f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_38f018:
    // 0x38f018: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x38f018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_38f01c:
    // 0x38f01c: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x38f01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_38f020:
    // 0x38f020: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x38f020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_38f024:
    // 0x38f024: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x38f024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_38f028:
    // 0x38f028: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x38f028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_38f02c:
    // 0x38f02c: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x38f02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38f030:
    // 0x38f030: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x38f030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38f034:
    // 0x38f034: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x38f034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38f038:
    // 0x38f038: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x38f038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38f03c:
    // 0x38f03c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x38f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_38f040:
    // 0x38f040: 0x920200b7  lbu         $v0, 0xB7($s0)
    ctx->pc = 0x38f040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 183)));
label_38f044:
    // 0x38f044: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x38f044u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_38f048:
    // 0x38f048: 0x960300b6  lhu         $v1, 0xB6($s0)
    ctx->pc = 0x38f048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 182)));
label_38f04c:
    // 0x38f04c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x38f04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_38f050:
    // 0x38f050: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x38f050u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
label_38f054:
    // 0x38f054: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x38f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_38f058:
    // 0x38f058: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x38f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_38f05c:
    // 0x38f05c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x38f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_38f060:
    // 0x38f060: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x38f060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_38f064:
    // 0x38f064: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x38f064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_38f068:
    // 0x38f068: 0x920200b4  lbu         $v0, 0xB4($s0)
    ctx->pc = 0x38f068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 180)));
label_38f06c:
    // 0x38f06c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x38f06cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_38f070:
    // 0x38f070: 0xc0cda36  jal         func_3368D8
label_38f074:
    if (ctx->pc == 0x38F074u) {
        ctx->pc = 0x38F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F070u;
        // 0x38f074: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F078u;
        goto label_38f078;
    }
    ctx->pc = 0x38F070u;
    SET_GPR_U32(ctx, 31, 0x38F078u);
    ctx->pc = 0x38F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F070u;
    // 0x38f074: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x38F070u, 0x38F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F078u;
label_38f078:
    // 0x38f078: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38f078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38f07c:
    // 0x38f07c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38f07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38f080:
    // 0x38f080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38f080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38f084:
    // 0x38f084: 0x3e00008  jr          $ra
label_38f088:
    if (ctx->pc == 0x38F088u) {
        ctx->pc = 0x38F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F084u;
        // 0x38f088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F08Cu;
        goto label_38f08c;
    }
    ctx->pc = 0x38F084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F084u;
        // 0x38f088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F08Cu;
label_38f08c:
    // 0x38f08c: 0x0  nop
    ctx->pc = 0x38f08cu;
    // NOP
    ctx->pc = 0x38f090u;
}
