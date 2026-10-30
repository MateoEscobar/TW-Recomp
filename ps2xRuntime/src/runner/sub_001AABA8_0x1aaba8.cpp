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

// Function: sub_001AABA8
// Address: 0x1aaba8 - 0x1aacf0
void sub_001AABA8_0x1aaba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AABA8_0x1aaba8");
#endif

    switch (ctx->pc) {
        case 0x1aac20u: goto label_1aac20;
        case 0x1aac28u: goto label_1aac28;
        case 0x1aacd4u: goto label_1aacd4;
        case 0x1aacdcu: goto label_1aacdc;
        default: break;
    }

    ctx->pc = 0x1aaba8u;

    // 0x1aaba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aaba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aabac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aabacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aabb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aabb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aabb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aabb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabb8: 0x8e020a98  lw          $v0, 0xA98($s0)
    ctx->pc = 0x1aabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2712)));
    // 0x1aabbc: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x1AABBCu;
    {
        const bool branch_taken_0x1aabbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aabbc) {
            ctx->pc = 0x1AABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AABBCu;
            // 0x1aabc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AACE0u;
            goto label_1aace0;
        }
    }
    ctx->pc = 0x1AABC4u;
    // 0x1aabc4: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x1aabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
    // 0x1aabc8: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1AABC8u;
    {
        const bool branch_taken_0x1aabc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABC8u;
        // 0x1aabcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabc8) {
            ctx->pc = 0x1AACDCu;
            goto label_1aacdc;
        }
    }
    ctx->pc = 0x1AABD0u;
    // 0x1aabd0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1aabd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1aabd4: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1aabd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1aabd8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1aabd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1aabdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aabdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aabe0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1aabe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aabe4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aabe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aabe8: 0x0  nop
    ctx->pc = 0x1aabe8u;
    // NOP
    // 0x1aabec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1AABECu;
    {
        const bool branch_taken_0x1aabec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABECu;
        // 0x1aabf0: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabec) {
            ctx->pc = 0x1AAC08u;
            goto label_1aac08;
        }
    }
    ctx->pc = 0x1AABF4u;
    // 0x1aabf4: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1aabf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aabf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aabf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aabfc: 0x0  nop
    ctx->pc = 0x1aabfcu;
    // NOP
    // 0x1aac00: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1AAC00u;
    {
        const bool branch_taken_0x1aac00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aac00) {
            ctx->pc = 0x1AAC30u;
            goto label_1aac30;
        }
    }
    ctx->pc = 0x1AAC08u;
label_1aac08:
    // 0x1aac08: 0x8c6207e0  lw          $v0, 0x7E0($v1)
    ctx->pc = 0x1aac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2016)));
    // 0x1aac0c: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x1aac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
    // 0x1aac10: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1aac10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1aac14: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1aac14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1aac18: 0xc06978e  jal         func_1A5E38
    ctx->pc = 0x1AAC18u;
    SET_GPR_U32(ctx, 31, 0x1AAC20u);
    ctx->pc = 0x1AAC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC18u;
    // 0x1aac1c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5E38u, 0x1AAC18u, 0x1AAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC20u;
label_1aac20:
    // 0x1aac20: 0xc06978e  jal         func_1A5E38
    ctx->pc = 0x1AAC20u;
    SET_GPR_U32(ctx, 31, 0x1AAC28u);
    ctx->pc = 0x1AAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC20u;
    // 0x1aac24: 0x26040120  addiu       $a0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5E38u, 0x1AAC20u, 0x1AAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC28u;
label_1aac28:
    // 0x1aac28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aac2c: 0x8e020a94  lw          $v0, 0xA94($s0)
    ctx->pc = 0x1aac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2708)));
label_1aac30:
    // 0x1aac30: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1AAC30u;
    {
        const bool branch_taken_0x1aac30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aac30) {
            ctx->pc = 0x1AAC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAC30u;
            // 0x1aac34: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AACE0u;
            goto label_1aace0;
        }
    }
    ctx->pc = 0x1AAC38u;
    // 0x1aac38: 0x26020230  addiu       $v0, $s0, 0x230
    ctx->pc = 0x1aac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x1aac3c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1aac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1aac40: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1aac40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1aac44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aac44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aac48: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1aac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aac4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aac50: 0x0  nop
    ctx->pc = 0x1aac50u;
    // NOP
    // 0x1aac54: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAC54u;
    {
        const bool branch_taken_0x1aac54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC54u;
        // 0x1aac58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac54) {
            ctx->pc = 0x1AAC70u;
            goto label_1aac70;
        }
    }
    ctx->pc = 0x1AAC5Cu;
    // 0x1aac5c: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1aac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aac60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aac64: 0x0  nop
    ctx->pc = 0x1aac64u;
    // NOP
    // 0x1aac68: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x1AAC68u;
    {
        const bool branch_taken_0x1aac68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aac68) {
            ctx->pc = 0x1AAC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAC68u;
            // 0x1aac6c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AACE0u;
            goto label_1aace0;
        }
    }
    ctx->pc = 0x1AAC70u;
label_1aac70:
    // 0x1aac70: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1aac74: 0x8c6207e8  lw          $v0, 0x7E8($v1)
    ctx->pc = 0x1aac74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6007E8u));
    // 0x1aac78: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x1aac78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x1aac7c: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1aac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1aac80: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x1aac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
    // 0x1aac84: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAC84u;
    {
        const bool branch_taken_0x1aac84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC84u;
        // 0x1aac88: 0xae020254  sw          $v0, 0x254($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac84) {
            ctx->pc = 0x1AACA8u;
            goto label_1aaca8;
        }
    }
    ctx->pc = 0x1AAC8Cu;
    // 0x1aac8c: 0x3c014258  lui         $at, 0x4258
    ctx->pc = 0x1aac8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16984 << 16));
    // 0x1aac90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aac90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aac94: 0x3c014266  lui         $at, 0x4266
    ctx->pc = 0x1aac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16998 << 16));
    // 0x1aac98: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1aac98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1aac9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aac9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aaca0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AACA0u;
    {
        const bool branch_taken_0x1aaca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACA0u;
        // 0x1aaca4: 0xe6000340  swc1        $f0, 0x340($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaca0) {
            ctx->pc = 0x1AACC4u;
            goto label_1aacc4;
        }
    }
    ctx->pc = 0x1AACA8u;
label_1aaca8:
    // 0x1aaca8: 0x3c014266  lui         $at, 0x4266
    ctx->pc = 0x1aaca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16998 << 16));
    // 0x1aacac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1aacacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1aacb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aacb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aacb4: 0x3c014274  lui         $at, 0x4274
    ctx->pc = 0x1aacb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17012 << 16));
    // 0x1aacb8: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1aacb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1aacbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aacbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aacc0: 0xe6000340  swc1        $f0, 0x340($s0)
    ctx->pc = 0x1aacc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
label_1aacc4:
    // 0x1aacc4: 0xe6010344  swc1        $f1, 0x344($s0)
    ctx->pc = 0x1aacc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 836), bits); }
    // 0x1aacc8: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1aacc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x1aaccc: 0xc06978e  jal         func_1A5E38
    ctx->pc = 0x1AACCCu;
    SET_GPR_U32(ctx, 31, 0x1AACD4u);
    ctx->pc = 0x1AACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACCCu;
    // 0x1aacd0: 0xe6010234  swc1        $f1, 0x234($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5E38u, 0x1AACCCu, 0x1AACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACD4u;
label_1aacd4:
    // 0x1aacd4: 0xc06978e  jal         func_1A5E38
    ctx->pc = 0x1AACD4u;
    SET_GPR_U32(ctx, 31, 0x1AACDCu);
    ctx->pc = 0x1AACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACD4u;
    // 0x1aacd8: 0x26040340  addiu       $a0, $s0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5E38u, 0x1AACD4u, 0x1AACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACDCu;
label_1aacdc:
    // 0x1aacdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aacdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aace0:
    // 0x1aace0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aace0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aace4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACE4u;
        // 0x1aace8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AACE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AACECu;
    // 0x1aacec: 0x0  nop
    ctx->pc = 0x1aacecu;
    // NOP
    ctx->pc = 0x1aacf0u;
}
