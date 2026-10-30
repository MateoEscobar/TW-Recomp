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

// Function: sub_0013CF20
// Address: 0x13cf20 - 0x13d010
void sub_0013CF20_0x13cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CF20_0x13cf20");
#endif

    switch (ctx->pc) {
        case 0x13cf20u: goto label_13cf20;
        case 0x13cf24u: goto label_13cf24;
        case 0x13cf28u: goto label_13cf28;
        case 0x13cf2cu: goto label_13cf2c;
        case 0x13cf30u: goto label_13cf30;
        case 0x13cf34u: goto label_13cf34;
        case 0x13cf38u: goto label_13cf38;
        case 0x13cf3cu: goto label_13cf3c;
        case 0x13cf40u: goto label_13cf40;
        case 0x13cf44u: goto label_13cf44;
        case 0x13cf48u: goto label_13cf48;
        case 0x13cf4cu: goto label_13cf4c;
        case 0x13cf50u: goto label_13cf50;
        case 0x13cf54u: goto label_13cf54;
        case 0x13cf58u: goto label_13cf58;
        case 0x13cf5cu: goto label_13cf5c;
        case 0x13cf60u: goto label_13cf60;
        case 0x13cf64u: goto label_13cf64;
        case 0x13cf68u: goto label_13cf68;
        case 0x13cf6cu: goto label_13cf6c;
        case 0x13cf70u: goto label_13cf70;
        case 0x13cf74u: goto label_13cf74;
        case 0x13cf78u: goto label_13cf78;
        case 0x13cf7cu: goto label_13cf7c;
        case 0x13cf80u: goto label_13cf80;
        case 0x13cf84u: goto label_13cf84;
        case 0x13cf88u: goto label_13cf88;
        case 0x13cf8cu: goto label_13cf8c;
        case 0x13cf90u: goto label_13cf90;
        case 0x13cf94u: goto label_13cf94;
        case 0x13cf98u: goto label_13cf98;
        case 0x13cf9cu: goto label_13cf9c;
        case 0x13cfa0u: goto label_13cfa0;
        case 0x13cfa4u: goto label_13cfa4;
        case 0x13cfa8u: goto label_13cfa8;
        case 0x13cfacu: goto label_13cfac;
        case 0x13cfb0u: goto label_13cfb0;
        case 0x13cfb4u: goto label_13cfb4;
        case 0x13cfb8u: goto label_13cfb8;
        case 0x13cfbcu: goto label_13cfbc;
        case 0x13cfc0u: goto label_13cfc0;
        case 0x13cfc4u: goto label_13cfc4;
        case 0x13cfc8u: goto label_13cfc8;
        case 0x13cfccu: goto label_13cfcc;
        case 0x13cfd0u: goto label_13cfd0;
        case 0x13cfd4u: goto label_13cfd4;
        case 0x13cfd8u: goto label_13cfd8;
        case 0x13cfdcu: goto label_13cfdc;
        case 0x13cfe0u: goto label_13cfe0;
        case 0x13cfe4u: goto label_13cfe4;
        case 0x13cfe8u: goto label_13cfe8;
        case 0x13cfecu: goto label_13cfec;
        case 0x13cff0u: goto label_13cff0;
        case 0x13cff4u: goto label_13cff4;
        case 0x13cff8u: goto label_13cff8;
        case 0x13cffcu: goto label_13cffc;
        case 0x13d000u: goto label_13d000;
        case 0x13d004u: goto label_13d004;
        case 0x13d008u: goto label_13d008;
        case 0x13d00cu: goto label_13d00c;
        default: break;
    }

    ctx->pc = 0x13cf20u;

label_13cf20:
    // 0x13cf20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_13cf24:
    // 0x13cf24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13cf28:
    // 0x13cf28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13cf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_13cf2c:
    // 0x13cf2c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_13cf30:
    // 0x13cf30: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13cf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_13cf34:
    // 0x13cf34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cf34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13cf38:
    // 0x13cf38: 0x8c52b19c  lw          $s2, -0x4E64($v0)
    ctx->pc = 0x13cf38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
label_13cf3c:
    // 0x13cf3c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13cf3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13cf40:
    // 0x13cf40: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13cf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_13cf44:
    // 0x13cf44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13cf48:
    // 0x13cf48: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13cf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_13cf4c:
    // 0x13cf4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13cf50:
    // 0x13cf50: 0x16420025  bne         $s2, $v0, . + 4 + (0x25 << 2)
label_13cf54:
    if (ctx->pc == 0x13CF54u) {
        ctx->pc = 0x13CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF50u;
        // 0x13cf54: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF58u;
        goto label_13cf58;
    }
    ctx->pc = 0x13CF50u;
    {
        const bool branch_taken_0x13cf50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x13CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF50u;
        // 0x13cf54: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf50) {
            ctx->pc = 0x13CFE8u;
            goto label_13cfe8;
        }
    }
    ctx->pc = 0x13CF58u;
label_13cf58:
    // 0x13cf58: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x13cf58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_13cf5c:
    // 0x13cf5c: 0xc04f1c4  jal         func_13C710
label_13cf60:
    if (ctx->pc == 0x13CF60u) {
        ctx->pc = 0x13CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF5Cu;
        // 0x13cf60: 0x8e71b198  lw          $s1, -0x4E68($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF64u;
        goto label_13cf64;
    }
    ctx->pc = 0x13CF5Cu;
    SET_GPR_U32(ctx, 31, 0x13CF64u);
    ctx->pc = 0x13CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF5Cu;
    // 0x13cf60: 0x8e71b198  lw          $s1, -0x4E68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C710u, 0x13CF5Cu, 0x13CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF64u;
label_13cf64:
    // 0x13cf64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13cf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13cf68:
    // 0x13cf68: 0xc04f336  jal         func_13CCD8
label_13cf6c:
    if (ctx->pc == 0x13CF6Cu) {
        ctx->pc = 0x13CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF68u;
        // 0x13cf6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF70u;
        goto label_13cf70;
    }
    ctx->pc = 0x13CF68u;
    SET_GPR_U32(ctx, 31, 0x13CF70u);
    ctx->pc = 0x13CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF68u;
    // 0x13cf6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCD8u, 0x13CF68u, 0x13CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF70u;
label_13cf70:
    // 0x13cf70: 0x5632001e  bnel        $s1, $s2, . + 4 + (0x1E << 2)
label_13cf74:
    if (ctx->pc == 0x13CF74u) {
        ctx->pc = 0x13CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF70u;
        // 0x13cf74: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF78u;
        goto label_13cf78;
    }
    ctx->pc = 0x13CF70u;
    {
        const bool branch_taken_0x13cf70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x13cf70) {
            ctx->pc = 0x13CF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF70u;
            // 0x13cf74: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CFECu;
            goto label_13cfec;
        }
    }
    ctx->pc = 0x13CF78u;
label_13cf78:
    // 0x13cf78: 0x8e63b198  lw          $v1, -0x4E68($s3)
    ctx->pc = 0x13cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
label_13cf7c:
    // 0x13cf7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13cf80:
    // 0x13cf80: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_13cf84:
    if (ctx->pc == 0x13CF84u) {
        ctx->pc = 0x13CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF80u;
        // 0x13cf84: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CF88u;
        goto label_13cf88;
    }
    ctx->pc = 0x13CF80u;
    {
        const bool branch_taken_0x13cf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13cf80) {
            ctx->pc = 0x13CF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF80u;
            // 0x13cf84: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CFECu;
            goto label_13cfec;
        }
    }
    ctx->pc = 0x13CF88u;
label_13cf88:
    // 0x13cf88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13cf8c:
    // 0x13cf8c: 0xa20303e9  sb          $v1, 0x3E9($s0)
    ctx->pc = 0x13cf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1001), (uint8_t)GPR_U32(ctx, 3));
label_13cf90:
    // 0x13cf90: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x13cf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_13cf94:
    // 0x13cf94: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x13cf94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_13cf98:
    // 0x13cf98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13cf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13cf9c:
    // 0x13cf9c: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x13cf9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_13cfa0:
    // 0x13cfa0: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x13cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_13cfa4:
    // 0x13cfa4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13cfa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13cfa8:
    // 0x13cfa8: 0x60f809  jalr        $v1
label_13cfac:
    if (ctx->pc == 0x13CFACu) {
        ctx->pc = 0x13CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFA8u;
        // 0x13cfac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFB0u;
        goto label_13cfb0;
    }
    ctx->pc = 0x13CFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13CFB0u);
        ctx->pc = 0x13CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFA8u;
        // 0x13cfac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFA8u, 0x13CFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CFB0u;
label_13cfb0:
    // 0x13cfb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13cfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13cfb4:
    // 0x13cfb4: 0xc04f1c4  jal         func_13C710
label_13cfb8:
    if (ctx->pc == 0x13CFB8u) {
        ctx->pc = 0x13CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFB4u;
        // 0x13cfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFBCu;
        goto label_13cfbc;
    }
    ctx->pc = 0x13CFB4u;
    SET_GPR_U32(ctx, 31, 0x13CFBCu);
    ctx->pc = 0x13CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFB4u;
    // 0x13cfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C710u, 0x13CFB4u, 0x13CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFBCu;
label_13cfbc:
    // 0x13cfbc: 0x8e62b198  lw          $v0, -0x4E68($s3)
    ctx->pc = 0x13cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947224)));
label_13cfc0:
    // 0x13cfc0: 0x5451000a  bnel        $v0, $s1, . + 4 + (0xA << 2)
label_13cfc4:
    if (ctx->pc == 0x13CFC4u) {
        ctx->pc = 0x13CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFC0u;
        // 0x13cfc4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFC8u;
        goto label_13cfc8;
    }
    ctx->pc = 0x13CFC0u;
    {
        const bool branch_taken_0x13cfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x13cfc0) {
            ctx->pc = 0x13CFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CFC0u;
            // 0x13cfc4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CFECu;
            goto label_13cfec;
        }
    }
    ctx->pc = 0x13CFC8u;
label_13cfc8:
    // 0x13cfc8: 0xc04edbe  jal         func_13B6F8
label_13cfcc:
    if (ctx->pc == 0x13CFCCu) {
        ctx->pc = 0x13CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFC8u;
        // 0x13cfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFD0u;
        goto label_13cfd0;
    }
    ctx->pc = 0x13CFC8u;
    SET_GPR_U32(ctx, 31, 0x13CFD0u);
    ctx->pc = 0x13CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFC8u;
    // 0x13cfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6F8u, 0x13CFC8u, 0x13CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFD0u;
label_13cfd0:
    // 0x13cfd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13cfd4:
    // 0x13cfd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13cfd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13cfd8:
    // 0x13cfd8: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x13cfd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_13cfdc:
    // 0x13cfdc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x13cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_13cfe0:
    // 0x13cfe0: 0x60f809  jalr        $v1
label_13cfe4:
    if (ctx->pc == 0x13CFE4u) {
        ctx->pc = 0x13CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFE0u;
        // 0x13cfe4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CFE8u;
        goto label_13cfe8;
    }
    ctx->pc = 0x13CFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13CFE8u);
        ctx->pc = 0x13CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFE0u;
        // 0x13cfe4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFE0u, 0x13CFE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CFE8u;
label_13cfe8:
    // 0x13cfe8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13cfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13cfec:
    // 0x13cfec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13cfecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13cff0:
    // 0x13cff0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13cff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13cff4:
    // 0x13cff4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13cff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13cff8:
    // 0x13cff8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13cff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13cffc:
    // 0x13cffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d000:
    // 0x13d000: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x13d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13d004:
    // 0x13d004: 0x3e00008  jr          $ra
label_13d008:
    if (ctx->pc == 0x13D008u) {
        ctx->pc = 0x13D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D004u;
        // 0x13d008: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D00Cu;
        goto label_13d00c;
    }
    ctx->pc = 0x13D004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D004u;
        // 0x13d008: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D00Cu;
label_13d00c:
    // 0x13d00c: 0x0  nop
    ctx->pc = 0x13d00cu;
    // NOP
    ctx->pc = 0x13d010u;
}
