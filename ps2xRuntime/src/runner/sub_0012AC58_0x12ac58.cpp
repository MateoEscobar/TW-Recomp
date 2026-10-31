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

// Function: sub_0012AC58
// Address: 0x12ac58 - 0x12adf0
void sub_0012AC58_0x12ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AC58_0x12ac58");
#endif

    switch (ctx->pc) {
        case 0x12ac58u: goto label_12ac58;
        case 0x12ac5cu: goto label_12ac5c;
        case 0x12ac60u: goto label_12ac60;
        case 0x12ac64u: goto label_12ac64;
        case 0x12ac68u: goto label_12ac68;
        case 0x12ac6cu: goto label_12ac6c;
        case 0x12ac70u: goto label_12ac70;
        case 0x12ac74u: goto label_12ac74;
        case 0x12ac78u: goto label_12ac78;
        case 0x12ac7cu: goto label_12ac7c;
        case 0x12ac80u: goto label_12ac80;
        case 0x12ac84u: goto label_12ac84;
        case 0x12ac88u: goto label_12ac88;
        case 0x12ac8cu: goto label_12ac8c;
        case 0x12ac90u: goto label_12ac90;
        case 0x12ac94u: goto label_12ac94;
        case 0x12ac98u: goto label_12ac98;
        case 0x12ac9cu: goto label_12ac9c;
        case 0x12aca0u: goto label_12aca0;
        case 0x12aca4u: goto label_12aca4;
        case 0x12aca8u: goto label_12aca8;
        case 0x12acacu: goto label_12acac;
        case 0x12acb0u: goto label_12acb0;
        case 0x12acb4u: goto label_12acb4;
        case 0x12acb8u: goto label_12acb8;
        case 0x12acbcu: goto label_12acbc;
        case 0x12acc0u: goto label_12acc0;
        case 0x12acc4u: goto label_12acc4;
        case 0x12acc8u: goto label_12acc8;
        case 0x12acccu: goto label_12accc;
        case 0x12acd0u: goto label_12acd0;
        case 0x12acd4u: goto label_12acd4;
        case 0x12acd8u: goto label_12acd8;
        case 0x12acdcu: goto label_12acdc;
        case 0x12ace0u: goto label_12ace0;
        case 0x12ace4u: goto label_12ace4;
        case 0x12ace8u: goto label_12ace8;
        case 0x12acecu: goto label_12acec;
        case 0x12acf0u: goto label_12acf0;
        case 0x12acf4u: goto label_12acf4;
        case 0x12acf8u: goto label_12acf8;
        case 0x12acfcu: goto label_12acfc;
        case 0x12ad00u: goto label_12ad00;
        case 0x12ad04u: goto label_12ad04;
        case 0x12ad08u: goto label_12ad08;
        case 0x12ad0cu: goto label_12ad0c;
        case 0x12ad10u: goto label_12ad10;
        case 0x12ad14u: goto label_12ad14;
        case 0x12ad18u: goto label_12ad18;
        case 0x12ad1cu: goto label_12ad1c;
        case 0x12ad20u: goto label_12ad20;
        case 0x12ad24u: goto label_12ad24;
        case 0x12ad28u: goto label_12ad28;
        case 0x12ad2cu: goto label_12ad2c;
        case 0x12ad30u: goto label_12ad30;
        case 0x12ad34u: goto label_12ad34;
        case 0x12ad38u: goto label_12ad38;
        case 0x12ad3cu: goto label_12ad3c;
        case 0x12ad40u: goto label_12ad40;
        case 0x12ad44u: goto label_12ad44;
        case 0x12ad48u: goto label_12ad48;
        case 0x12ad4cu: goto label_12ad4c;
        case 0x12ad50u: goto label_12ad50;
        case 0x12ad54u: goto label_12ad54;
        case 0x12ad58u: goto label_12ad58;
        case 0x12ad5cu: goto label_12ad5c;
        case 0x12ad60u: goto label_12ad60;
        case 0x12ad64u: goto label_12ad64;
        case 0x12ad68u: goto label_12ad68;
        case 0x12ad6cu: goto label_12ad6c;
        case 0x12ad70u: goto label_12ad70;
        case 0x12ad74u: goto label_12ad74;
        case 0x12ad78u: goto label_12ad78;
        case 0x12ad7cu: goto label_12ad7c;
        case 0x12ad80u: goto label_12ad80;
        case 0x12ad84u: goto label_12ad84;
        case 0x12ad88u: goto label_12ad88;
        case 0x12ad8cu: goto label_12ad8c;
        case 0x12ad90u: goto label_12ad90;
        case 0x12ad94u: goto label_12ad94;
        case 0x12ad98u: goto label_12ad98;
        case 0x12ad9cu: goto label_12ad9c;
        case 0x12ada0u: goto label_12ada0;
        case 0x12ada4u: goto label_12ada4;
        case 0x12ada8u: goto label_12ada8;
        case 0x12adacu: goto label_12adac;
        case 0x12adb0u: goto label_12adb0;
        case 0x12adb4u: goto label_12adb4;
        case 0x12adb8u: goto label_12adb8;
        case 0x12adbcu: goto label_12adbc;
        case 0x12adc0u: goto label_12adc0;
        case 0x12adc4u: goto label_12adc4;
        case 0x12adc8u: goto label_12adc8;
        case 0x12adccu: goto label_12adcc;
        case 0x12add0u: goto label_12add0;
        case 0x12add4u: goto label_12add4;
        case 0x12add8u: goto label_12add8;
        case 0x12addcu: goto label_12addc;
        case 0x12ade0u: goto label_12ade0;
        case 0x12ade4u: goto label_12ade4;
        case 0x12ade8u: goto label_12ade8;
        case 0x12adecu: goto label_12adec;
        default: break;
    }

    ctx->pc = 0x12ac58u;

label_12ac58:
    // 0x12ac58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12ac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_12ac5c:
    // 0x12ac5c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x12ac5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12ac60:
    // 0x12ac60: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_12ac64:
    // 0x12ac64: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x12ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_12ac68:
    // 0x12ac68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12ac68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ac6c:
    // 0x12ac6c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x12ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_12ac70:
    // 0x12ac70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_12ac74:
    // 0x12ac74: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x12ac74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_12ac78:
    // 0x12ac78: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x12ac78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_12ac7c:
    // 0x12ac7c: 0xc6440404  lwc1        $f4, 0x404($s2)
    ctx->pc = 0x12ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12ac80:
    // 0x12ac80: 0x46032032  c.eq.s      $f4, $f3
    ctx->pc = 0x12ac80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ac84:
    // 0x12ac84: 0x0  nop
    ctx->pc = 0x12ac84u;
    // NOP
label_12ac88:
    // 0x12ac88: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_12ac8c:
    if (ctx->pc == 0x12AC8Cu) {
        ctx->pc = 0x12AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC88u;
        // 0x12ac8c: 0xc642040c  lwc1        $f2, 0x40C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AC90u;
        goto label_12ac90;
    }
    ctx->pc = 0x12AC88u;
    {
        const bool branch_taken_0x12ac88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ac88) {
            ctx->pc = 0x12AC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AC88u;
            // 0x12ac8c: 0xc642040c  lwc1        $f2, 0x40C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ACA8u;
            goto label_12aca8;
        }
    }
    ctx->pc = 0x12AC90u;
label_12ac90:
    // 0x12ac90: 0xc6400408  lwc1        $f0, 0x408($s2)
    ctx->pc = 0x12ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ac94:
    // 0x12ac94: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x12ac94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ac98:
    // 0x12ac98: 0x0  nop
    ctx->pc = 0x12ac98u;
    // NOP
label_12ac9c:
    // 0x12ac9c: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
label_12aca0:
    if (ctx->pc == 0x12ACA0u) {
        ctx->pc = 0x12ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC9Cu;
        // 0x12aca0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACA4u;
        goto label_12aca4;
    }
    ctx->pc = 0x12AC9Cu;
    {
        const bool branch_taken_0x12ac9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC9Cu;
        // 0x12aca0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac9c) {
            ctx->pc = 0x12ADD4u;
            goto label_12add4;
        }
    }
    ctx->pc = 0x12ACA4u;
label_12aca4:
    // 0x12aca4: 0xc642040c  lwc1        $f2, 0x40C($s2)
    ctx->pc = 0x12aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12aca8:
    // 0x12aca8: 0xc6400408  lwc1        $f0, 0x408($s2)
    ctx->pc = 0x12aca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12acac:
    // 0x12acac: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x12acacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12acb0:
    // 0x12acb0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x12acb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_12acb4:
    // 0x12acb4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x12acb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_12acb8:
    // 0x12acb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12acb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12acbc:
    // 0x12acbc: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x12acbcu;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_12acc0:
    // 0x12acc0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_12acc4:
    if (ctx->pc == 0x12ACC4u) {
        ctx->pc = 0x12ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACC0u;
        // 0x12acc4: 0x46002501  sub.s       $f20, $f4, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACC8u;
        goto label_12acc8;
    }
    ctx->pc = 0x12ACC0u;
    {
        const bool branch_taken_0x12acc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACC0u;
        // 0x12acc4: 0x46002501  sub.s       $f20, $f4, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acc0) {
            ctx->pc = 0x12ACE4u;
            goto label_12ace4;
        }
    }
    ctx->pc = 0x12ACC8u;
label_12acc8:
    // 0x12acc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12acc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12accc:
    // 0x12accc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12acccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12acd0:
    // 0x12acd0: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x12acd0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
label_12acd4:
    // 0x12acd4: 0x0  nop
    ctx->pc = 0x12acd4u;
    // NOP
label_12acd8:
    // 0x12acd8: 0x0  nop
    ctx->pc = 0x12acd8u;
    // NOP
label_12acdc:
    // 0x12acdc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12acdcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_12ace0:
    // 0x12ace0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12ace0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12ace4:
    // 0x12ace4: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x12ace4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ace8:
    // 0x12ace8: 0x0  nop
    ctx->pc = 0x12ace8u;
    // NOP
label_12acec:
    // 0x12acec: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_12acf0:
    if (ctx->pc == 0x12ACF0u) {
        ctx->pc = 0x12ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACECu;
        // 0x12acf0: 0xc64001a0  lwc1        $f0, 0x1A0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACF4u;
        goto label_12acf4;
    }
    ctx->pc = 0x12ACECu;
    {
        const bool branch_taken_0x12acec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12acec) {
            ctx->pc = 0x12ACF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ACECu;
            // 0x12acf0: 0xc64001a0  lwc1        $f0, 0x1A0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD0Cu;
            goto label_12ad0c;
        }
    }
    ctx->pc = 0x12ACF4u;
label_12acf4:
    // 0x12acf4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x12acf4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_12acf8:
    // 0x12acf8: 0xc64101a0  lwc1        $f1, 0x1A0($s2)
    ctx->pc = 0x12acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12acfc:
    // 0x12acfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12acfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12ad00:
    // 0x12ad00: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x12ad00u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_12ad04:
    // 0x12ad04: 0x10000004  b           . + 4 + (0x4 << 2)
label_12ad08:
    if (ctx->pc == 0x12AD08u) {
        ctx->pc = 0x12AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD04u;
        // 0x12ad08: 0x46142d00  add.s       $f20, $f5, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD0Cu;
        goto label_12ad0c;
    }
    ctx->pc = 0x12AD04u;
    {
        const bool branch_taken_0x12ad04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD04u;
        // 0x12ad08: 0x46142d00  add.s       $f20, $f5, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad04) {
            ctx->pc = 0x12AD18u;
            goto label_12ad18;
        }
    }
    ctx->pc = 0x12AD0Cu;
label_12ad0c:
    // 0x12ad0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12ad0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12ad10:
    // 0x12ad10: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x12ad10u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
label_12ad14:
    // 0x12ad14: 0x46142d00  add.s       $f20, $f5, $f20
    ctx->pc = 0x12ad14u;
    ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
label_12ad18:
    // 0x12ad18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12ad18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12ad1c:
    // 0x12ad1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ad1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ad20:
    // 0x12ad20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x12ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12ad24:
    // 0x12ad24: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x12ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_12ad28:
    // 0x12ad28: 0xe6540408  swc1        $f20, 0x408($s2)
    ctx->pc = 0x12ad28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1032), bits); }
label_12ad2c:
    // 0x12ad2c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x12ad2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12ad30:
    // 0x12ad30: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x12ad30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_12ad34:
    // 0x12ad34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12ad34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12ad38:
    // 0x12ad38: 0xc12e310  jal         func_4B8C40
label_12ad3c:
    if (ctx->pc == 0x12AD3Cu) {
        ctx->pc = 0x12AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD38u;
        // 0x12ad3c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD40u;
        goto label_12ad40;
    }
    ctx->pc = 0x12AD38u;
    SET_GPR_U32(ctx, 31, 0x12AD40u);
    ctx->pc = 0x12AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD38u;
    // 0x12ad3c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x12AD38u, 0x12AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD40u;
label_12ad40:
    // 0x12ad40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12ad40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12ad44:
    // 0x12ad44: 0xc12e29c  jal         func_4B8A70
label_12ad48:
    if (ctx->pc == 0x12AD48u) {
        ctx->pc = 0x12AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD44u;
        // 0x12ad48: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD4Cu;
        goto label_12ad4c;
    }
    ctx->pc = 0x12AD44u;
    SET_GPR_U32(ctx, 31, 0x12AD4Cu);
    ctx->pc = 0x12AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD44u;
    // 0x12ad48: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12AD44u, 0x12AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD4Cu;
label_12ad4c:
    // 0x12ad4c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12ad4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12ad50:
    // 0x12ad50: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x12ad50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_12ad54:
    // 0x12ad54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12ad54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12ad58:
    // 0x12ad58: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12ad58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12ad5c:
    // 0x12ad5c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12ad5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12ad60:
    // 0x12ad60: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12ad60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12ad64:
    // 0x12ad64: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x12ad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_12ad68:
    // 0x12ad68: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12ad6c:
    // 0x12ad6c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x12ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ad70:
    // 0x12ad70: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x12ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ad74:
    // 0x12ad74: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x12ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ad78:
    // 0x12ad78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12ad7c:
    // 0x12ad7c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x12ad7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12ad80:
    // 0x12ad80: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x12ad80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12ad84:
    // 0x12ad84: 0x247101c0  addiu       $s1, $v1, 0x1C0
    ctx->pc = 0x12ad84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_12ad88:
    // 0x12ad88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x12ad88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12ad8c:
    // 0x12ad8c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x12ad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_12ad90:
    // 0x12ad90: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x12ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_12ad94:
    // 0x12ad94: 0x847001c0  lh          $s0, 0x1C0($v1)
    ctx->pc = 0x12ad94u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_12ad98:
    // 0x12ad98: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x12ad98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_12ad9c:
    // 0x12ad9c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x12ad9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_12ada0:
    // 0x12ada0: 0x40f809  jalr        $v0
label_12ada4:
    if (ctx->pc == 0x12ADA4u) {
        ctx->pc = 0x12ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADA0u;
        // 0x12ada4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADA8u;
        goto label_12ada8;
    }
    ctx->pc = 0x12ADA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12ADA8u);
        ctx->pc = 0x12ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADA0u;
        // 0x12ada4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ADA0u, 0x12ADA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12ADA8u;
label_12ada8:
    // 0x12ada8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ada8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12adac:
    // 0x12adac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12adacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12adb0:
    // 0x12adb0: 0xc136d44  jal         func_4DB510
label_12adb4:
    if (ctx->pc == 0x12ADB4u) {
        ctx->pc = 0x12ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADB0u;
        // 0x12adb4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADB8u;
        goto label_12adb8;
    }
    ctx->pc = 0x12ADB0u;
    SET_GPR_U32(ctx, 31, 0x12ADB8u);
    ctx->pc = 0x12ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ADB0u;
    // 0x12adb4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x12ADB0u, 0x12ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ADB8u;
label_12adb8:
    // 0x12adb8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x12adb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12adbc:
    // 0x12adbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12adc0:
    // 0x12adc0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x12adc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_12adc4:
    // 0x12adc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12adc8:
    // 0x12adc8: 0x40f809  jalr        $v0
label_12adcc:
    if (ctx->pc == 0x12ADCCu) {
        ctx->pc = 0x12ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADC8u;
        // 0x12adcc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADD0u;
        goto label_12add0;
    }
    ctx->pc = 0x12ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12ADD0u);
        ctx->pc = 0x12ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADC8u;
        // 0x12adcc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ADC8u, 0x12ADD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12ADD0u;
label_12add0:
    // 0x12add0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12add0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12add4:
    // 0x12add4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12add4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12add8:
    // 0x12add8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x12add8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12addc:
    // 0x12addc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12addcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12ade0:
    // 0x12ade0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x12ade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12ade4:
    // 0x12ade4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x12ade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12ade8:
    // 0x12ade8: 0x3e00008  jr          $ra
label_12adec:
    if (ctx->pc == 0x12ADECu) {
        ctx->pc = 0x12ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADE8u;
        // 0x12adec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADF0u;
        goto label_fallthrough_0x12ade8;
    }
    ctx->pc = 0x12ADE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADE8u;
        // 0x12adec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ADE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12ade8:
    ctx->pc = 0x12ADF0u;
}
