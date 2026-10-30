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

// Function: sub_0024EA60
// Address: 0x24ea60 - 0x24eef0
void sub_0024EA60_0x24ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EA60_0x24ea60");
#endif

    switch (ctx->pc) {
        case 0x24eb08u: goto label_24eb08;
        case 0x24ebf8u: goto label_24ebf8;
        case 0x24ed78u: goto label_24ed78;
        default: break;
    }

    ctx->pc = 0x24ea60u;

    // 0x24ea60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24ea64: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24ea64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24ea6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x24ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x24ea70: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x24ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x24ea74: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x24ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x24ea78: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x24ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x24ea7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24ea7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea80: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ea84: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x24ea84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea88: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x24ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ea8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24ea8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea90: 0xac80a230  sw          $zero, -0x5DD0($a0)
    ctx->pc = 0x24ea90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6CA230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CA230u, _value); } while (0);
    // 0x24ea94: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24ea94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ea98: 0xac40a228  sw          $zero, -0x5DD8($v0)
    ctx->pc = 0x24ea98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6CA228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CA228u, _value); } while (0);
    // 0x24ea9c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x24EA9Cu;
    {
        const bool branch_taken_0x24ea9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA9Cu;
        // 0x24eaa0: 0xac67a22c  sw          $a3, -0x5DD4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943276), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea9c) {
            ctx->pc = 0x24EAE4u;
            goto label_24eae4;
        }
    }
    ctx->pc = 0x24EAA4u;
    // 0x24eaa4: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x24eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eaa8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x24eaa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eaac: 0x0  nop
    ctx->pc = 0x24eaacu;
    // NOP
    // 0x24eab0: 0x4501010a  bc1t        . + 4 + (0x10A << 2)
    ctx->pc = 0x24EAB0u;
    {
        const bool branch_taken_0x24eab0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAB0u;
        // 0x24eab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eab0) {
            ctx->pc = 0x24EEDCu;
            goto label_24eedc;
        }
    }
    ctx->pc = 0x24EAB8u;
    // 0x24eab8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eabc: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x24eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24eac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eac4: 0x0  nop
    ctx->pc = 0x24eac4u;
    // NOP
    // 0x24eac8: 0x45030105  bc1tl       . + 4 + (0x105 << 2)
    ctx->pc = 0x24EAC8u;
    {
        const bool branch_taken_0x24eac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eac8) {
            ctx->pc = 0x24EACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EAC8u;
            // 0x24eacc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EEE0u;
            goto label_24eee0;
        }
    }
    ctx->pc = 0x24EAD0u;
    // 0x24ead0: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x24ead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ead4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24ead4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ead8: 0x0  nop
    ctx->pc = 0x24ead8u;
    // NOP
    // 0x24eadc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24EADCu;
    {
        const bool branch_taken_0x24eadc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eadc) {
            ctx->pc = 0x24EAECu;
            goto label_24eaec;
        }
    }
    ctx->pc = 0x24EAE4u;
label_24eae4:
    // 0x24eae4: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x24EAE4u;
    {
        const bool branch_taken_0x24eae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAE4u;
        // 0x24eae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eae4) {
            ctx->pc = 0x24EEDCu;
            goto label_24eedc;
        }
    }
    ctx->pc = 0x24EAECu;
label_24eaec:
    // 0x24eaec: 0x10e000fa  beqz        $a3, . + 4 + (0xFA << 2)
    ctx->pc = 0x24EAECu;
    {
        const bool branch_taken_0x24eaec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAECu;
        // 0x24eaf0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eaec) {
            ctx->pc = 0x24EED8u;
            goto label_24eed8;
        }
    }
    ctx->pc = 0x24EAF4u;
    // 0x24eaf4: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x24eaf4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
    // 0x24eaf8: 0x8c4fa220  lw          $t7, -0x5DE0($v0)
    ctx->pc = 0x24eaf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943264)));
    // 0x24eafc: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x24eafcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb00: 0x1e0c02d  daddu       $t8, $t7, $zero
    ctx->pc = 0x24eb00u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb04: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x24eb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24eb08:
    // 0x24eb08: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x24eb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eb0c: 0x0  nop
    ctx->pc = 0x24eb0cu;
    // NOP
    // 0x24eb10: 0x450300ef  bc1tl       . + 4 + (0xEF << 2)
    ctx->pc = 0x24EB10u;
    {
        const bool branch_taken_0x24eb10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eb10) {
            ctx->pc = 0x24EB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB10u;
            // 0x24eb14: 0x8ce70020  lw          $a3, 0x20($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EED0u;
            goto label_24eed0;
        }
    }
    ctx->pc = 0x24EB18u;
    // 0x24eb18: 0xc4e30014  lwc1        $f3, 0x14($a3)
    ctx->pc = 0x24eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24eb1c: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x24eb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eb20: 0x0  nop
    ctx->pc = 0x24eb20u;
    // NOP
    // 0x24eb24: 0x450300ea  bc1tl       . + 4 + (0xEA << 2)
    ctx->pc = 0x24EB24u;
    {
        const bool branch_taken_0x24eb24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eb24) {
            ctx->pc = 0x24EB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB24u;
            // 0x24eb28: 0x8ce70020  lw          $a3, 0x20($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EED0u;
            goto label_24eed0;
        }
    }
    ctx->pc = 0x24EB2Cu;
    // 0x24eb2c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24eb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eb30: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x24eb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eb34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24eb34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eb38: 0x0  nop
    ctx->pc = 0x24eb38u;
    // NOP
    // 0x24eb3c: 0x450100e3  bc1t        . + 4 + (0xE3 << 2)
    ctx->pc = 0x24EB3Cu;
    {
        const bool branch_taken_0x24eb3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB3Cu;
        // 0x24eb40: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb3c) {
            ctx->pc = 0x24EECCu;
            goto label_24eecc;
        }
    }
    ctx->pc = 0x24EB44u;
    // 0x24eb44: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x24eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eb48: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x24eb48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eb4c: 0x0  nop
    ctx->pc = 0x24eb4cu;
    // NOP
    // 0x24eb50: 0x450300df  bc1tl       . + 4 + (0xDF << 2)
    ctx->pc = 0x24EB50u;
    {
        const bool branch_taken_0x24eb50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eb50) {
            ctx->pc = 0x24EB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB50u;
            // 0x24eb54: 0x8ce70020  lw          $a3, 0x20($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EED0u;
            goto label_24eed0;
        }
    }
    ctx->pc = 0x24EB58u;
    // 0x24eb58: 0x94e20048  lhu         $v0, 0x48($a3)
    ctx->pc = 0x24eb58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x24eb5c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x24eb5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24eb64: 0x544000da  bnel        $v0, $zero, . + 4 + (0xDA << 2)
    ctx->pc = 0x24EB64u;
    {
        const bool branch_taken_0x24eb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24eb64) {
            ctx->pc = 0x24EB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB64u;
            // 0x24eb68: 0x8ce70020  lw          $a3, 0x20($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EED0u;
            goto label_24eed0;
        }
    }
    ctx->pc = 0x24EB6Cu;
    // 0x24eb6c: 0x31a20010  andi        $v0, $t5, 0x10
    ctx->pc = 0x24eb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x24eb70: 0x544000d7  bnel        $v0, $zero, . + 4 + (0xD7 << 2)
    ctx->pc = 0x24EB70u;
    {
        const bool branch_taken_0x24eb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24eb70) {
            ctx->pc = 0x24EB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB70u;
            // 0x24eb74: 0x8ce70020  lw          $a3, 0x20($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EED0u;
            goto label_24eed0;
        }
    }
    ctx->pc = 0x24EB78u;
    // 0x24eb78: 0x84e20028  lh          $v0, 0x28($a3)
    ctx->pc = 0x24eb78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x24eb7c: 0x4420070  bltzl       $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x24EB7Cu;
    {
        const bool branch_taken_0x24eb7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24eb7c) {
            ctx->pc = 0x24EB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB7Cu;
            // 0x24eb80: 0x84e40000  lh          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED40u;
            goto label_24ed40;
        }
    }
    ctx->pc = 0x24EB84u;
    // 0x24eb84: 0x46023001  sub.s       $f0, $f6, $f2
    ctx->pc = 0x24eb84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x24eb88: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x24eb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x24eb8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24eb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24eb90: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x24eb90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x24eb94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24eb94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24eb98: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x24eb98u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x24eb9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24eb9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24eba0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24eba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24eba4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x24eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x24eba8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x24eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24ebac: 0x84430028  lh          $v1, 0x28($v0)
    ctx->pc = 0x24ebacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x24ebb0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x24ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x24ebb4: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x24ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x24ebb8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24ebb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ebbc: 0x46000ba  bltz        $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x24EBBCu;
    {
        const bool branch_taken_0x24ebbc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x24EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBBCu;
        // 0x24ebc0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebbc) {
            ctx->pc = 0x24EEA8u;
            goto label_24eea8;
        }
    }
    ctx->pc = 0x24EBC4u;
    // 0x24ebc4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24ebc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ebc8: 0x8c4ca220  lw          $t4, -0x5DE0($v0)
    ctx->pc = 0x24ebc8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943264)));
    // 0x24ebcc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x24ebccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ebd0: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x24ebd0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24ebd4: 0x46003206  mov.s       $f8, $f6
    ctx->pc = 0x24ebd4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[6]);
    // 0x24ebd8: 0x84e90000  lh          $t1, 0x0($a3)
    ctx->pc = 0x24ebd8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24ebdc: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x24ebdcu;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
    // 0x24ebe0: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x24ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x24ebe4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x24ebe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x24ebe8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x24ebe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x24ebec: 0xd84021  addu        $t0, $a2, $t8
    ctx->pc = 0x24ebecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x24ebf0: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x24ebf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x24ebf4: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x24ebf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_24ebf8:
    // 0x24ebf8: 0x512e0001  beql        $t1, $t6, . + 4 + (0x1 << 2)
    ctx->pc = 0x24EBF8u;
    {
        const bool branch_taken_0x24ebf8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 14));
        if (branch_taken_0x24ebf8) {
            ctx->pc = 0x24EBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EBF8u;
            // 0x24ebfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC00u;
            goto label_24ec00;
        }
    }
    ctx->pc = 0x24EC00u;
label_24ec00:
    // 0x24ec00: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x24ec00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x24ec04: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x24ec04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x24ec08: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x24ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24ec0c: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x24ec0cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24ec10: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x24ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x24ec14: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x24ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x24ec18: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x24ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ec1c: 0x1810  mfhi        $v1
    ctx->pc = 0x24ec1cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24ec20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24ec24: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x24ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x24ec28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ec2c: 0x46011101  sub.s       $f4, $f2, $f1
    ctx->pc = 0x24ec2cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x24ec30: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x24ec30u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x24ec34: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x24ec34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ec38: 0x0  nop
    ctx->pc = 0x24ec38u;
    // NOP
    // 0x24ec3c: 0x4503003b  bc1tl       . + 4 + (0x3B << 2)
    ctx->pc = 0x24EC3Cu;
    {
        const bool branch_taken_0x24ec3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ec3c) {
            ctx->pc = 0x24EC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC3Cu;
            // 0x24ec40: 0xcc1021  addu        $v0, $a2, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED2Cu;
            goto label_24ed2c;
        }
    }
    ctx->pc = 0x24EC44u;
    // 0x24ec44: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x24ec44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ec48: 0x0  nop
    ctx->pc = 0x24ec48u;
    // NOP
    // 0x24ec4c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24EC4Cu;
    {
        const bool branch_taken_0x24ec4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ec4c) {
            ctx->pc = 0x24EC64u;
            goto label_24ec64;
        }
    }
    ctx->pc = 0x24EC54u;
    // 0x24ec54: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x24ec54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ec58: 0x0  nop
    ctx->pc = 0x24ec58u;
    // NOP
    // 0x24ec5c: 0x45030033  bc1tl       . + 4 + (0x33 << 2)
    ctx->pc = 0x24EC5Cu;
    {
        const bool branch_taken_0x24ec5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ec5c) {
            ctx->pc = 0x24EC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC5Cu;
            // 0x24ec60: 0xcc1021  addu        $v0, $a2, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED2Cu;
            goto label_24ed2c;
        }
    }
    ctx->pc = 0x24EC64u;
label_24ec64:
    // 0x24ec64: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x24ec64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ec68: 0x0  nop
    ctx->pc = 0x24ec68u;
    // NOP
    // 0x24ec6c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24EC6Cu;
    {
        const bool branch_taken_0x24ec6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ec6c) {
            ctx->pc = 0x24EC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC6Cu;
            // 0x24ec70: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EC88u;
            goto label_24ec88;
        }
    }
    ctx->pc = 0x24EC74u;
    // 0x24ec74: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x24ec74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ec78: 0x0  nop
    ctx->pc = 0x24ec78u;
    // NOP
    // 0x24ec7c: 0x4503002b  bc1tl       . + 4 + (0x2B << 2)
    ctx->pc = 0x24EC7Cu;
    {
        const bool branch_taken_0x24ec7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ec7c) {
            ctx->pc = 0x24EC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EC7Cu;
            // 0x24ec80: 0xcc1021  addu        $v0, $a2, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED2Cu;
            goto label_24ed2c;
        }
    }
    ctx->pc = 0x24EC84u;
    // 0x24ec84: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ec88:
    // 0x24ec88: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x24ec88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ec8c: 0x0  nop
    ctx->pc = 0x24ec8cu;
    // NOP
    // 0x24ec90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24EC90u;
    {
        const bool branch_taken_0x24ec90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC90u;
        // 0x24ec94: 0xc4430000  lwc1        $f3, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec90) {
            ctx->pc = 0x24ECA8u;
            goto label_24eca8;
        }
    }
    ctx->pc = 0x24EC98u;
    // 0x24ec98: 0x46071834  c.lt.s      $f3, $f7
    ctx->pc = 0x24ec98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ec9c: 0x0  nop
    ctx->pc = 0x24ec9cu;
    // NOP
    // 0x24eca0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x24ECA0u;
    {
        const bool branch_taken_0x24eca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eca0) {
            ctx->pc = 0x24ECF8u;
            goto label_24ecf8;
        }
    }
    ctx->pc = 0x24ECA8u;
label_24eca8:
    // 0x24eca8: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x24eca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ecac: 0x0  nop
    ctx->pc = 0x24ecacu;
    // NOP
    // 0x24ecb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24ECB0u;
    {
        const bool branch_taken_0x24ecb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ecb0) {
            ctx->pc = 0x24ECC8u;
            goto label_24ecc8;
        }
    }
    ctx->pc = 0x24ECB8u;
    // 0x24ecb8: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x24ecb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ecbc: 0x0  nop
    ctx->pc = 0x24ecbcu;
    // NOP
    // 0x24ecc0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x24ECC0u;
    {
        const bool branch_taken_0x24ecc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ecc0) {
            ctx->pc = 0x24ECF8u;
            goto label_24ecf8;
        }
    }
    ctx->pc = 0x24ECC8u;
label_24ecc8:
    // 0x24ecc8: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x24ecc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eccc: 0x0  nop
    ctx->pc = 0x24ecccu;
    // NOP
    // 0x24ecd0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x24ECD0u;
    {
        const bool branch_taken_0x24ecd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ecd0) {
            ctx->pc = 0x24ECF8u;
            goto label_24ecf8;
        }
    }
    ctx->pc = 0x24ECD8u;
    // 0x24ecd8: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x24ecd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x24ecdc: 0x0  nop
    ctx->pc = 0x24ecdcu;
    // NOP
    // 0x24ece0: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x24ece0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x24ece4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24ece4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ece8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x24ece8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24ecec: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x24ececu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x24ecf0: 0x0  nop
    ctx->pc = 0x24ecf0u;
    // NOP
    // 0x24ecf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24ecf4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_24ecf8:
    // 0x24ecf8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x24ecf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ecfc: 0x0  nop
    ctx->pc = 0x24ecfcu;
    // NOP
    // 0x24ed00: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x24ED00u;
    {
        const bool branch_taken_0x24ed00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ed00) {
            ctx->pc = 0x24ED04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ED00u;
            // 0x24ed04: 0xcc1021  addu        $v0, $a2, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED2Cu;
            goto label_24ed2c;
        }
    }
    ctx->pc = 0x24ED08u;
    // 0x24ed08: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ed0c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x24ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ed10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24ed10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24ed14: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x24ed14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ed18: 0x0  nop
    ctx->pc = 0x24ed18u;
    // NOP
    // 0x24ed1c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x24ED1Cu;
    {
        const bool branch_taken_0x24ed1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ed1c) {
            ctx->pc = 0x24ED20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ED1Cu;
            // 0x24ed20: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED28u;
            goto label_24ed28;
        }
    }
    ctx->pc = 0x24ED24u;
    // 0x24ed24: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x24ed24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_24ed28:
    // 0x24ed28: 0xcc1021  addu        $v0, $a2, $t4
    ctx->pc = 0x24ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_24ed2c:
    // 0x24ed2c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24ed2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ed30: 0x463ffb1  bgezl       $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x24ED30u;
    {
        const bool branch_taken_0x24ed30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x24ed30) {
            ctx->pc = 0x24ED34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ED30u;
            // 0x24ed34: 0x85040000  lh          $a0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ebf8;
        }
    }
    ctx->pc = 0x24ED38u;
    // 0x24ed38: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x24ED38u;
    {
        const bool branch_taken_0x24ed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED38u;
        // 0x24ed3c: 0x31a20004  andi        $v0, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed38) {
            ctx->pc = 0x24EEACu;
            goto label_24eeac;
        }
    }
    ctx->pc = 0x24ED40u;
label_24ed40:
    // 0x24ed40: 0x18800059  blez        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x24ED40u;
    {
        const bool branch_taken_0x24ed40 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x24ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED40u;
        // 0x24ed44: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed40) {
            ctx->pc = 0x24EEA8u;
            goto label_24eea8;
        }
    }
    ctx->pc = 0x24ED48u;
    // 0x24ed48: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x24ed48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24ed4c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x24ed4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x24ed50: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x24ed50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x24ed54: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x24ed54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x24ed58: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x24ed58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed5c: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x24ed5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x24ed60: 0x493021  addu        $a2, $v0, $t1
    ctx->pc = 0x24ed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x24ed64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24ed64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed68: 0x46003246  mov.s       $f9, $f6
    ctx->pc = 0x24ed68u;
    ctx->f[9] = FPU_MOV_S(ctx->f[6]);
    // 0x24ed6c: 0x46003a06  mov.s       $f8, $f7
    ctx->pc = 0x24ed6cu;
    ctx->f[8] = FPU_MOV_S(ctx->f[7]);
    // 0x24ed70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24ed74: 0x0  nop
    ctx->pc = 0x24ed74u;
    // NOP
label_24ed78:
    // 0x24ed78: 0x510a0001  beql        $t0, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x24ED78u;
    {
        const bool branch_taken_0x24ed78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        if (branch_taken_0x24ed78) {
            ctx->pc = 0x24ED7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ED78u;
            // 0x24ed7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED80u;
            goto label_24ed80;
        }
    }
    ctx->pc = 0x24ED80u;
label_24ed80:
    // 0x24ed80: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x24ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24ed84: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x24ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x24ed88: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x24ed88u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24ed8c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x24ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ed90: 0x1810  mfhi        $v1
    ctx->pc = 0x24ed90u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24ed94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24ed98: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x24ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x24ed9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eda0: 0x46012141  sub.s       $f5, $f4, $f1
    ctx->pc = 0x24eda0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x24eda4: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x24eda4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x24eda8: 0x460b0034  c.lt.s      $f0, $f11
    ctx->pc = 0x24eda8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24edac: 0x0  nop
    ctx->pc = 0x24edacu;
    // NOP
    // 0x24edb0: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x24EDB0u;
    {
        const bool branch_taken_0x24edb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24edb0) {
            ctx->pc = 0x24EEA0u;
            goto label_24eea0;
        }
    }
    ctx->pc = 0x24EDB8u;
    // 0x24edb8: 0x46092034  c.lt.s      $f4, $f9
    ctx->pc = 0x24edb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24edbc: 0x0  nop
    ctx->pc = 0x24edbcu;
    // NOP
    // 0x24edc0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24EDC0u;
    {
        const bool branch_taken_0x24edc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24edc0) {
            ctx->pc = 0x24EDD8u;
            goto label_24edd8;
        }
    }
    ctx->pc = 0x24EDC8u;
    // 0x24edc8: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x24edc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24edcc: 0x0  nop
    ctx->pc = 0x24edccu;
    // NOP
    // 0x24edd0: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x24EDD0u;
    {
        const bool branch_taken_0x24edd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24edd0) {
            ctx->pc = 0x24EEA0u;
            goto label_24eea0;
        }
    }
    ctx->pc = 0x24EDD8u;
label_24edd8:
    // 0x24edd8: 0x46043034  c.lt.s      $f6, $f4
    ctx->pc = 0x24edd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eddc: 0x0  nop
    ctx->pc = 0x24eddcu;
    // NOP
    // 0x24ede0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24EDE0u;
    {
        const bool branch_taken_0x24ede0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ede0) {
            ctx->pc = 0x24EDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EDE0u;
            // 0x24ede4: 0xc4c20000  lwc1        $f2, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDFCu;
            goto label_24edfc;
        }
    }
    ctx->pc = 0x24EDE8u;
    // 0x24ede8: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x24ede8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24edec: 0x0  nop
    ctx->pc = 0x24edecu;
    // NOP
    // 0x24edf0: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x24EDF0u;
    {
        const bool branch_taken_0x24edf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24edf0) {
            ctx->pc = 0x24EEA0u;
            goto label_24eea0;
        }
    }
    ctx->pc = 0x24EDF8u;
    // 0x24edf8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x24edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24edfc:
    // 0x24edfc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x24edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ee00: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x24ee00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ee04: 0x0  nop
    ctx->pc = 0x24ee04u;
    // NOP
    // 0x24ee08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24EE08u;
    {
        const bool branch_taken_0x24ee08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE08u;
        // 0x24ee0c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee08) {
            ctx->pc = 0x24EE20u;
            goto label_24ee20;
        }
    }
    ctx->pc = 0x24EE10u;
    // 0x24ee10: 0x46071834  c.lt.s      $f3, $f7
    ctx->pc = 0x24ee10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ee14: 0x0  nop
    ctx->pc = 0x24ee14u;
    // NOP
    // 0x24ee18: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x24EE18u;
    {
        const bool branch_taken_0x24ee18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ee18) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24EE20u;
label_24ee20:
    // 0x24ee20: 0x46023834  c.lt.s      $f7, $f2
    ctx->pc = 0x24ee20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ee24: 0x0  nop
    ctx->pc = 0x24ee24u;
    // NOP
    // 0x24ee28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24EE28u;
    {
        const bool branch_taken_0x24ee28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ee28) {
            ctx->pc = 0x24EE40u;
            goto label_24ee40;
        }
    }
    ctx->pc = 0x24EE30u;
    // 0x24ee30: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x24ee30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ee34: 0x0  nop
    ctx->pc = 0x24ee34u;
    // NOP
    // 0x24ee38: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x24EE38u;
    {
        const bool branch_taken_0x24ee38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ee38) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24EE40u;
label_24ee40:
    // 0x24ee40: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x24ee40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ee44: 0x0  nop
    ctx->pc = 0x24ee44u;
    // NOP
    // 0x24ee48: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x24EE48u;
    {
        const bool branch_taken_0x24ee48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ee48) {
            ctx->pc = 0x24EE70u;
            goto label_24ee70;
        }
    }
    ctx->pc = 0x24EE50u;
    // 0x24ee50: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x24ee50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x24ee54: 0x0  nop
    ctx->pc = 0x24ee54u;
    // NOP
    // 0x24ee58: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x24ee58u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x24ee5c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x24ee5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24ee60: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x24ee60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x24ee64: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x24ee64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x24ee68: 0x0  nop
    ctx->pc = 0x24ee68u;
    // NOP
    // 0x24ee6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24ee6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_24ee70:
    // 0x24ee70: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x24ee70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ee74: 0x0  nop
    ctx->pc = 0x24ee74u;
    // NOP
    // 0x24ee78: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x24EE78u;
    {
        const bool branch_taken_0x24ee78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ee78) {
            ctx->pc = 0x24EEA0u;
            goto label_24eea0;
        }
    }
    ctx->pc = 0x24EE80u;
    // 0x24ee80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ee84: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x24ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ee88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24ee88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24ee8c: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x24ee8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ee90: 0x0  nop
    ctx->pc = 0x24ee90u;
    // NOP
    // 0x24ee94: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x24EE94u;
    {
        const bool branch_taken_0x24ee94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ee94) {
            ctx->pc = 0x24EE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EE94u;
            // 0x24ee98: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EEA0u;
            goto label_24eea0;
        }
    }
    ctx->pc = 0x24EE9Cu;
    // 0x24ee9c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x24ee9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_24eea0:
    // 0x24eea0: 0x5c80ffb5  bgtzl       $a0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x24EEA0u;
    {
        const bool branch_taken_0x24eea0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x24eea0) {
            ctx->pc = 0x24EEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EEA0u;
            // 0x24eea4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ed78;
        }
    }
    ctx->pc = 0x24EEA8u;
label_24eea8:
    // 0x24eea8: 0x31a20004  andi        $v0, $t5, 0x4
    ctx->pc = 0x24eea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
label_24eeac:
    // 0x24eeac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24EEACu;
    {
        const bool branch_taken_0x24eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEACu;
        // 0x24eeb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eeac) {
            ctx->pc = 0x24EEC0u;
            goto label_24eec0;
        }
    }
    ctx->pc = 0x24EEB4u;
    // 0x24eeb4: 0xae27a228  sw          $a3, -0x5DD8($s1)
    ctx->pc = 0x24eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943272), GPR_U32(ctx, 7));
    // 0x24eeb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24EEB8u;
    {
        const bool branch_taken_0x24eeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEB8u;
        // 0x24eebc: 0xaf22a230  sw          $v0, -0x5DD0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 4294943280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eeb8) {
            ctx->pc = 0x24EEC4u;
            goto label_24eec4;
        }
    }
    ctx->pc = 0x24EEC0u;
label_24eec0:
    // 0x24eec0: 0xae07a22c  sw          $a3, -0x5DD4($s0)
    ctx->pc = 0x24eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943276), GPR_U32(ctx, 7));
label_24eec4:
    // 0x24eec4: 0x19600005  blez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EEC4u;
    {
        const bool branch_taken_0x24eec4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x24EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEC4u;
        // 0x24eec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eec4) {
            ctx->pc = 0x24EEDCu;
            goto label_24eedc;
        }
    }
    ctx->pc = 0x24EECCu;
label_24eecc:
    // 0x24eecc: 0x8ce70020  lw          $a3, 0x20($a3)
    ctx->pc = 0x24eeccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_24eed0:
    // 0x24eed0: 0x54e0ff0d  bnel        $a3, $zero, . + 4 + (-0xF3 << 2)
    ctx->pc = 0x24EED0u;
    {
        const bool branch_taken_0x24eed0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24eed0) {
            ctx->pc = 0x24EED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EED0u;
            // 0x24eed4: 0xc4e20010  lwc1        $f2, 0x10($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24eb08;
        }
    }
    ctx->pc = 0x24EED8u;
label_24eed8:
    // 0x24eed8: 0xb102a  slt         $v0, $zero, $t3
    ctx->pc = 0x24eed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_24eedc:
    // 0x24eedc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24eedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24eee0:
    // 0x24eee0: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x24eee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24eee4: 0x3e00008  jr          $ra
    ctx->pc = 0x24EEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EEE4u;
        // 0x24eee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EEECu;
    // 0x24eeec: 0x0  nop
    ctx->pc = 0x24eeecu;
    // NOP
    ctx->pc = 0x24eef0u;
}
