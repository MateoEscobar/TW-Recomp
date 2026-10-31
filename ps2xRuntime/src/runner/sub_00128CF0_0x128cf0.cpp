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

// Function: sub_00128CF0
// Address: 0x128cf0 - 0x129050
void sub_00128CF0_0x128cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128CF0_0x128cf0");
#endif

    switch (ctx->pc) {
        case 0x128da4u: goto label_128da4;
        case 0x128f20u: goto label_128f20;
        default: break;
    }

    ctx->pc = 0x128cf0u;

    // 0x128cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x128cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x128cf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x128cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x128cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d00: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x128d00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x128d04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x128d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d08: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x128d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x128d0c: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x128d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x128d10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x128d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x128d14: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128D14u;
    {
        const bool branch_taken_0x128d14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D14u;
        // 0x128d18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d14) {
            ctx->pc = 0x128D28u;
            goto label_128d28;
        }
    }
    ctx->pc = 0x128D1Cu;
    // 0x128d1c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x128d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x128d20: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x128d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x128d24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x128d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_128d28:
    // 0x128d28: 0x14c0006d  bnez        $a2, . + 4 + (0x6D << 2)
    ctx->pc = 0x128D28u;
    {
        const bool branch_taken_0x128d28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D28u;
        // 0x128d2c: 0xc60003c8  lwc1        $f0, 0x3C8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d28) {
            ctx->pc = 0x128EE0u;
            goto label_128ee0;
        }
    }
    ctx->pc = 0x128D30u;
    // 0x128d30: 0x1220006b  beqz        $s1, . + 4 + (0x6B << 2)
    ctx->pc = 0x128D30u;
    {
        const bool branch_taken_0x128d30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d30) {
            ctx->pc = 0x128EE0u;
            goto label_128ee0;
        }
    }
    ctx->pc = 0x128D38u;
    // 0x128d38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x128d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128d3c: 0x0  nop
    ctx->pc = 0x128d3cu;
    // NOP
    // 0x128d40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x128d40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128d44: 0x0  nop
    ctx->pc = 0x128d44u;
    // NOP
    // 0x128d48: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x128D48u;
    {
        const bool branch_taken_0x128d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D48u;
        // 0x128d4c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d48) {
            ctx->pc = 0x128DC8u;
            goto label_128dc8;
        }
    }
    ctx->pc = 0x128D50u;
    // 0x128d50: 0xc60003e0  lwc1        $f0, 0x3E0($s0)
    ctx->pc = 0x128d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128d54: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x128d54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128d58: 0x0  nop
    ctx->pc = 0x128d58u;
    // NOP
    // 0x128d5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x128D5Cu;
    {
        const bool branch_taken_0x128d5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D5Cu;
        // 0x128d60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d5c) {
            ctx->pc = 0x128D80u;
            goto label_128d80;
        }
    }
    ctx->pc = 0x128D64u;
    // 0x128d64: 0xc600032c  lwc1        $f0, 0x32C($s0)
    ctx->pc = 0x128d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128d68: 0xc6010400  lwc1        $f1, 0x400($s0)
    ctx->pc = 0x128d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128d6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x128d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x128d70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x128d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x128d74: 0xe60003e0  swc1        $f0, 0x3E0($s0)
    ctx->pc = 0x128d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
    // 0x128d78: 0xe60103e8  swc1        $f1, 0x3E8($s0)
    ctx->pc = 0x128d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1000), bits); }
    // 0x128d7c: 0xe602040c  swc1        $f2, 0x40C($s0)
    ctx->pc = 0x128d7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1036), bits); }
label_128d80:
    // 0x128d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128d84: 0x8c43b19c  lw          $v1, -0x4E64($v0)
    ctx->pc = 0x128d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
    // 0x128d88: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128D88u;
    {
        const bool branch_taken_0x128d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x128d88) {
            ctx->pc = 0x128D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128D88u;
            // 0x128d8c: 0xc6000304  lwc1        $f0, 0x304($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x128DACu;
            goto label_128dac;
        }
    }
    ctx->pc = 0x128D90u;
    // 0x128d90: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x128d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d98: 0xc60c0308  lwc1        $f12, 0x308($s0)
    ctx->pc = 0x128d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128d9c: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x128D9Cu;
    SET_GPR_U32(ctx, 31, 0x128DA4u);
    ctx->pc = 0x128DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D9Cu;
    // 0x128da0: 0xe600034c  swc1        $f0, 0x34C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 844), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x128D9Cu, 0x128DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DA4u;
label_128da4:
    // 0x128da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128DA4u;
    {
        const bool branch_taken_0x128da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DA4u;
        // 0x128da8: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128da4) {
            ctx->pc = 0x128DC8u;
            goto label_128dc8;
        }
    }
    ctx->pc = 0x128DACu;
label_128dac:
    // 0x128dac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x128dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x128db0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x128db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128db4: 0xc6020308  lwc1        $f2, 0x308($s0)
    ctx->pc = 0x128db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128db8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x128db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x128dbc: 0xe60203e8  swc1        $f2, 0x3E8($s0)
    ctx->pc = 0x128dbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1000), bits); }
    // 0x128dc0: 0xe60003e0  swc1        $f0, 0x3E0($s0)
    ctx->pc = 0x128dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
    // 0x128dc4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x128dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_128dc8:
    // 0x128dc8: 0xc60103e4  lwc1        $f1, 0x3E4($s0)
    ctx->pc = 0x128dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128dcc: 0xc4408ac4  lwc1        $f0, -0x753C($v0)
    ctx->pc = 0x128dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128dd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x128dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128dd4: 0x0  nop
    ctx->pc = 0x128dd4u;
    // NOP
    // 0x128dd8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x128DD8u;
    {
        const bool branch_taken_0x128dd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x128DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DD8u;
        // 0x128ddc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dd8) {
            ctx->pc = 0x128DF4u;
            goto label_128df4;
        }
    }
    ctx->pc = 0x128DE0u;
    // 0x128de0: 0xc4408ac8  lwc1        $f0, -0x7538($v0)
    ctx->pc = 0x128de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128de4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x128de4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128de8: 0x0  nop
    ctx->pc = 0x128de8u;
    // NOP
    // 0x128dec: 0x45020092  bc1fl       . + 4 + (0x92 << 2)
    ctx->pc = 0x128DECu;
    {
        const bool branch_taken_0x128dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128dec) {
            ctx->pc = 0x128DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128DECu;
            // 0x128df0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129038u;
            goto label_129038;
        }
    }
    ctx->pc = 0x128DF4u;
label_128df4:
    // 0x128df4: 0xc4408ac8  lwc1        $f0, -0x7538($v0)
    ctx->pc = 0x128df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128df8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x128df8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128dfc: 0x0  nop
    ctx->pc = 0x128dfcu;
    // NOP
    // 0x128e00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x128E00u;
    {
        const bool branch_taken_0x128e00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128e00) {
            ctx->pc = 0x128E10u;
            goto label_128e10;
        }
    }
    ctx->pc = 0x128E08u;
    // 0x128e08: 0xc60003b4  lwc1        $f0, 0x3B4($s0)
    ctx->pc = 0x128e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e0c: 0xe60003e4  swc1        $f0, 0x3E4($s0)
    ctx->pc = 0x128e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
label_128e10:
    // 0x128e10: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x128e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x128e14: 0x3421e9d9  ori         $at, $at, 0xE9D9
    ctx->pc = 0x128e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59865);
    // 0x128e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128e1c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128E1Cu;
    {
        const bool branch_taken_0x128e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E1Cu;
        // 0x128e20: 0xc60403b4  lwc1        $f4, 0x3B4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e1c) {
            ctx->pc = 0x128E30u;
            goto label_128e30;
        }
    }
    ctx->pc = 0x128E24u;
    // 0x128e24: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x128e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
    // 0x128e28: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x128e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
    // 0x128e2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128e30:
    // 0x128e30: 0x0  nop
    ctx->pc = 0x128e30u;
    // NOP
    // 0x128e34: 0x46002081  sub.s       $f2, $f4, $f0
    ctx->pc = 0x128e34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x128e38: 0xc600040c  lwc1        $f0, 0x40C($s0)
    ctx->pc = 0x128e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x128e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128e40: 0x0  nop
    ctx->pc = 0x128e40u;
    // NOP
    // 0x128e44: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x128e44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128e48: 0x0  nop
    ctx->pc = 0x128e48u;
    // NOP
    // 0x128e4c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x128E4Cu;
    {
        const bool branch_taken_0x128e4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x128E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E4Cu;
        // 0x128e50: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e4c) {
            ctx->pc = 0x128E80u;
            goto label_128e80;
        }
    }
    ctx->pc = 0x128E54u;
    // 0x128e54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x128e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x128e58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128e5c: 0x0  nop
    ctx->pc = 0x128e5cu;
    // NOP
    // 0x128e60: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x128e60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128e64: 0x0  nop
    ctx->pc = 0x128e64u;
    // NOP
    // 0x128e68: 0x45030073  bc1tl       . + 4 + (0x73 << 2)
    ctx->pc = 0x128E68u;
    {
        const bool branch_taken_0x128e68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128e68) {
            ctx->pc = 0x128E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128E68u;
            // 0x128e6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129038u;
            goto label_129038;
        }
    }
    ctx->pc = 0x128E70u;
    // 0x128e70: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x128e70u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x128e74: 0x0  nop
    ctx->pc = 0x128e74u;
    // NOP
    // 0x128e78: 0x0  nop
    ctx->pc = 0x128e78u;
    // NOP
    // 0x128e7c: 0x46030503  div.s       $f20, $f0, $f3
    ctx->pc = 0x128e7cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_128e80:
    // 0x128e80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x128e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x128e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128e88: 0x0  nop
    ctx->pc = 0x128e88u;
    // NOP
    // 0x128e8c: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x128e8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128e90: 0x0  nop
    ctx->pc = 0x128e90u;
    // NOP
    // 0x128e94: 0x45030068  bc1tl       . + 4 + (0x68 << 2)
    ctx->pc = 0x128E94u;
    {
        const bool branch_taken_0x128e94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128e94) {
            ctx->pc = 0x128E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128E94u;
            // 0x128e98: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129038u;
            goto label_129038;
        }
    }
    ctx->pc = 0x128E9Cu;
    // 0x128e9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x128e9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128ea0: 0x0  nop
    ctx->pc = 0x128ea0u;
    // NOP
    // 0x128ea4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128ea8: 0x0  nop
    ctx->pc = 0x128ea8u;
    // NOP
    // 0x128eac: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x128EACu;
    {
        const bool branch_taken_0x128eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128eac) {
            ctx->pc = 0x128EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128EACu;
            // 0x128eb0: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x128ECCu;
            goto label_128ecc;
        }
    }
    ctx->pc = 0x128EB4u;
    // 0x128eb4: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x128eb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x128eb8: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x128eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128ebc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x128ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x128ec0: 0x46001028  max.s       $f0, $f2, $f0
    ctx->pc = 0x128ec0u;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[0]);
    // 0x128ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x128EC4u;
    {
        const bool branch_taken_0x128ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EC4u;
        // 0x128ec8: 0x46002001  sub.s       $f0, $f4, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ec4) {
            ctx->pc = 0x128ED8u;
            goto label_128ed8;
        }
    }
    ctx->pc = 0x128ECCu;
label_128ecc:
    // 0x128ecc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x128eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x128ed0: 0x46001029  min.s       $f0, $f2, $f0
    ctx->pc = 0x128ed0u;
    ctx->f[0] = std::min(ctx->f[2], ctx->f[0]);
    // 0x128ed4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x128ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_128ed8:
    // 0x128ed8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x128ED8u;
    {
        const bool branch_taken_0x128ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128ED8u;
        // 0x128edc: 0xe60003b4  swc1        $f0, 0x3B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ed8) {
            ctx->pc = 0x129034u;
            goto label_129034;
        }
    }
    ctx->pc = 0x128EE0u;
label_128ee0:
    // 0x128ee0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x128ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128ee4: 0x0  nop
    ctx->pc = 0x128ee4u;
    // NOP
    // 0x128ee8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x128ee8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128eec: 0x0  nop
    ctx->pc = 0x128eecu;
    // NOP
    // 0x128ef0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x128EF0u;
    {
        const bool branch_taken_0x128ef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x128EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EF0u;
        // 0x128ef4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ef0) {
            ctx->pc = 0x128F34u;
            goto label_128f34;
        }
    }
    ctx->pc = 0x128EF8u;
    // 0x128ef8: 0xc60003e0  lwc1        $f0, 0x3E0($s0)
    ctx->pc = 0x128ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128efc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x128efcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128f00: 0x0  nop
    ctx->pc = 0x128f00u;
    // NOP
    // 0x128f04: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x128F04u;
    {
        const bool branch_taken_0x128f04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128f04) {
            ctx->pc = 0x128F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128F04u;
            // 0x128f08: 0xc60403e4  lwc1        $f4, 0x3E4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x128F38u;
            goto label_128f38;
        }
    }
    ctx->pc = 0x128F0Cu;
    // 0x128f0c: 0xc60c03e8  lwc1        $f12, 0x3E8($s0)
    ctx->pc = 0x128f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f14: 0xe600034c  swc1        $f0, 0x34C($s0)
    ctx->pc = 0x128f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 844), bits); }
    // 0x128f18: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x128F18u;
    SET_GPR_U32(ctx, 31, 0x128F20u);
    ctx->pc = 0x128F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F18u;
    // 0x128f1c: 0xe60103e0  swc1        $f1, 0x3E0($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x128F18u, 0x128F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F20u;
label_128f20:
    // 0x128f20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x128f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x128f24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128f28: 0x0  nop
    ctx->pc = 0x128f28u;
    // NOP
    // 0x128f2c: 0xe600040c  swc1        $f0, 0x40C($s0)
    ctx->pc = 0x128f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1036), bits); }
    // 0x128f30: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x128f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_128f34:
    // 0x128f34: 0xc60403e4  lwc1        $f4, 0x3E4($s0)
    ctx->pc = 0x128f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_128f38:
    // 0x128f38: 0xc4408ac4  lwc1        $f0, -0x753C($v0)
    ctx->pc = 0x128f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128f3c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x128f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128f40: 0x0  nop
    ctx->pc = 0x128f40u;
    // NOP
    // 0x128f44: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x128F44u;
    {
        const bool branch_taken_0x128f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128f44) {
            ctx->pc = 0x128F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128F44u;
            // 0x128f48: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129028u;
            goto label_129028;
        }
    }
    ctx->pc = 0x128F4Cu;
    // 0x128f4c: 0xc600040c  lwc1        $f0, 0x40C($s0)
    ctx->pc = 0x128f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128f50: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x128f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x128f54: 0xc60103b4  lwc1        $f1, 0x3B4($s0)
    ctx->pc = 0x128f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128f58: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x128f58u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x128f5c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x128f5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128f60: 0x46040881  sub.s       $f2, $f1, $f4
    ctx->pc = 0x128f60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x128f64: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x128F64u;
    {
        const bool branch_taken_0x128f64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x128F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F64u;
        // 0x128f68: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f64) {
            ctx->pc = 0x128F98u;
            goto label_128f98;
        }
    }
    ctx->pc = 0x128F6Cu;
    // 0x128f6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x128f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x128f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128f74: 0x0  nop
    ctx->pc = 0x128f74u;
    // NOP
    // 0x128f78: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x128f78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128f7c: 0x0  nop
    ctx->pc = 0x128f7cu;
    // NOP
    // 0x128f80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x128F80u;
    {
        const bool branch_taken_0x128f80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128f80) {
            ctx->pc = 0x128F98u;
            goto label_128f98;
        }
    }
    ctx->pc = 0x128F88u;
    // 0x128f88: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x128f88u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x128f8c: 0x0  nop
    ctx->pc = 0x128f8cu;
    // NOP
    // 0x128f90: 0x0  nop
    ctx->pc = 0x128f90u;
    // NOP
    // 0x128f94: 0x46030503  div.s       $f20, $f0, $f3
    ctx->pc = 0x128f94u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_128f98:
    // 0x128f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x128f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128f9c: 0x0  nop
    ctx->pc = 0x128f9cu;
    // NOP
    // 0x128fa0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x128fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128fa4: 0x0  nop
    ctx->pc = 0x128fa4u;
    // NOP
    // 0x128fa8: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x128FA8u;
    {
        const bool branch_taken_0x128fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128fa8) {
            ctx->pc = 0x128FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128FA8u;
            // 0x128fac: 0xc601032c  lwc1        $f1, 0x32C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x128FECu;
            goto label_128fec;
        }
    }
    ctx->pc = 0x128FB0u;
    // 0x128fb0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128fb4: 0x0  nop
    ctx->pc = 0x128fb4u;
    // NOP
    // 0x128fb8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x128FB8u;
    {
        const bool branch_taken_0x128fb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128fb8) {
            ctx->pc = 0x128FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128FB8u;
            // 0x128fbc: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x128FD8u;
            goto label_128fd8;
        }
    }
    ctx->pc = 0x128FC0u;
    // 0x128fc0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x128fc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x128fc4: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x128fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128fc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x128fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x128fcc: 0x46001028  max.s       $f0, $f2, $f0
    ctx->pc = 0x128fccu;
    ctx->f[0] = std::max(ctx->f[2], ctx->f[0]);
    // 0x128fd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x128FD0u;
    {
        const bool branch_taken_0x128fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FD0u;
        // 0x128fd4: 0x46002001  sub.s       $f0, $f4, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fd0) {
            ctx->pc = 0x128FE4u;
            goto label_128fe4;
        }
    }
    ctx->pc = 0x128FD8u;
label_128fd8:
    // 0x128fd8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x128fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x128fdc: 0x46001029  min.s       $f0, $f2, $f0
    ctx->pc = 0x128fdcu;
    ctx->f[0] = std::min(ctx->f[2], ctx->f[0]);
    // 0x128fe0: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x128fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_128fe4:
    // 0x128fe4: 0xe60003b4  swc1        $f0, 0x3B4($s0)
    ctx->pc = 0x128fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
    // 0x128fe8: 0xc601032c  lwc1        $f1, 0x32C($s0)
    ctx->pc = 0x128fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128fec:
    // 0x128fec: 0xc600034c  lwc1        $f0, 0x34C($s0)
    ctx->pc = 0x128fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ff0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x128ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x128ff4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x128ff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x128ff8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x128ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x128ffc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x128ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x129000: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x129000u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x129004: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x129004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129008: 0x0  nop
    ctx->pc = 0x129008u;
    // NOP
    // 0x12900c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x12900Cu;
    {
        const bool branch_taken_0x12900c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12900c) {
            ctx->pc = 0x129010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12900Cu;
            // 0x129010: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129038u;
            goto label_129038;
        }
    }
    ctx->pc = 0x129014u;
    // 0x129014: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x129014u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x129018: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x129018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12901c: 0x0  nop
    ctx->pc = 0x12901cu;
    // NOP
    // 0x129020: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x129020u;
    {
        const bool branch_taken_0x129020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129020u;
        // 0x129024: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129020) {
            ctx->pc = 0x129034u;
            goto label_129034;
        }
    }
    ctx->pc = 0x129028u;
label_129028:
    // 0x129028: 0xae000448  sw          $zero, 0x448($s0)
    ctx->pc = 0x129028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1096), GPR_U32(ctx, 0));
    // 0x12902c: 0xc4408ac8  lwc1        $f0, -0x7538($v0)
    ctx->pc = 0x12902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129030: 0xe60003e4  swc1        $f0, 0x3E4($s0)
    ctx->pc = 0x129030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
label_129034:
    // 0x129034: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x129034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_129038:
    // 0x129038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12903c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12903cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129040: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x129040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129044: 0x3e00008  jr          $ra
    ctx->pc = 0x129044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129044u;
        // 0x129048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12904Cu;
    // 0x12904c: 0x0  nop
    ctx->pc = 0x12904cu;
    // NOP
    ctx->pc = 0x129050u;
}
