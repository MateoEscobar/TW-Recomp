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

// Function: sub_00221F80
// Address: 0x221f80 - 0x2221b0
void sub_00221F80_0x221f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221F80_0x221f80");
#endif

    switch (ctx->pc) {
        case 0x221fd8u: goto label_221fd8;
        case 0x221ff8u: goto label_221ff8;
        case 0x2220a4u: goto label_2220a4;
        default: break;
    }

    ctx->pc = 0x221f80u;

    // 0x221f80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x221f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x221f84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x221f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x221f88: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x221f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x221f8c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x221f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x221f90: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x221f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f94: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x221f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x221f98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x221f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x221f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x221fa0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x221fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fa4: 0x8c430170  lw          $v1, 0x170($v0)
    ctx->pc = 0x221fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510170u));
    // 0x221fa8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x221fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fac: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x221facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x221fb0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x221fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x221fb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x221fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x221fb8: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x221FB8u;
    {
        const bool branch_taken_0x221fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FB8u;
        // 0x221fbc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fb8) {
            ctx->pc = 0x222180u;
            goto label_222180;
        }
    }
    ctx->pc = 0x221FC0u;
    // 0x221fc0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x221fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x221fc4: 0x8c43057c  lw          $v1, 0x57C($v0)
    ctx->pc = 0x221fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51057Cu));
    // 0x221fc8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221FC8u;
    {
        const bool branch_taken_0x221fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FC8u;
        // 0x221fcc: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fc8) {
            ctx->pc = 0x221FE0u;
            goto label_221fe0;
        }
    }
    ctx->pc = 0x221FD0u;
    // 0x221fd0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x221FD0u;
    {
        const bool branch_taken_0x221fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FD0u;
        // 0x221fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fd0) {
            ctx->pc = 0x222184u;
            goto label_222184;
        }
    }
    ctx->pc = 0x221FD8u;
label_221fd8:
    // 0x221fd8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x221FD8u;
    {
        const bool branch_taken_0x221fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FD8u;
        // 0x221fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fd8) {
            ctx->pc = 0x222184u;
            goto label_222184;
        }
    }
    ctx->pc = 0x221FE0u;
label_221fe0:
    // 0x221fe0: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x221fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
    // 0x221fe4: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x221fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x221fe8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x221fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x221fec: 0x2450ff50  addiu       $s0, $v0, -0xB0
    ctx->pc = 0x221fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967120));
    // 0x221ff0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x221ff0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ff4: 0x0  nop
    ctx->pc = 0x221ff4u;
    // NOP
label_221ff8:
    // 0x221ff8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x221ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x221ffc: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x221FFCu;
    {
        const bool branch_taken_0x221ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221ffc) {
            ctx->pc = 0x222000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221FFCu;
            // 0x222000: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222174u;
            goto label_222174;
        }
    }
    ctx->pc = 0x222004u;
    // 0x222004: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x222004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222008: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x222008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22200c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22200cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222010: 0x0  nop
    ctx->pc = 0x222010u;
    // NOP
    // 0x222014: 0x45030057  bc1tl       . + 4 + (0x57 << 2)
    ctx->pc = 0x222014u;
    {
        const bool branch_taken_0x222014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222014) {
            ctx->pc = 0x222018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222014u;
            // 0x222018: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222174u;
            goto label_222174;
        }
    }
    ctx->pc = 0x22201Cu;
    // 0x22201c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x22201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222020: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x222020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222024: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222028: 0x0  nop
    ctx->pc = 0x222028u;
    // NOP
    // 0x22202c: 0x45030051  bc1tl       . + 4 + (0x51 << 2)
    ctx->pc = 0x22202Cu;
    {
        const bool branch_taken_0x22202c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22202c) {
            ctx->pc = 0x222030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22202Cu;
            // 0x222030: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222174u;
            goto label_222174;
        }
    }
    ctx->pc = 0x222034u;
    // 0x222034: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x222034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222038: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x222038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22203c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22203cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222040: 0x0  nop
    ctx->pc = 0x222040u;
    // NOP
    // 0x222044: 0x4503004b  bc1tl       . + 4 + (0x4B << 2)
    ctx->pc = 0x222044u;
    {
        const bool branch_taken_0x222044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222044) {
            ctx->pc = 0x222048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222044u;
            // 0x222048: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222174u;
            goto label_222174;
        }
    }
    ctx->pc = 0x22204Cu;
    // 0x22204c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x22204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222050: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x222050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222054: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222058: 0x0  nop
    ctx->pc = 0x222058u;
    // NOP
    // 0x22205c: 0x45030045  bc1tl       . + 4 + (0x45 << 2)
    ctx->pc = 0x22205Cu;
    {
        const bool branch_taken_0x22205c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22205c) {
            ctx->pc = 0x222060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22205Cu;
            // 0x222060: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222174u;
            goto label_222174;
        }
    }
    ctx->pc = 0x222064u;
    // 0x222064: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x222064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222068: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x222068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22206c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22206cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222070: 0x0  nop
    ctx->pc = 0x222070u;
    // NOP
    // 0x222074: 0x4503003f  bc1tl       . + 4 + (0x3F << 2)
    ctx->pc = 0x222074u;
    {
        const bool branch_taken_0x222074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222074) {
            ctx->pc = 0x222078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222074u;
            // 0x222078: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222174u;
            goto label_222174;
        }
    }
    ctx->pc = 0x22207Cu;
    // 0x22207c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x22207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222080: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x222080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222084: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x222084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222088: 0x0  nop
    ctx->pc = 0x222088u;
    // NOP
    // 0x22208c: 0x45030039  bc1tl       . + 4 + (0x39 << 2)
    ctx->pc = 0x22208Cu;
    {
        const bool branch_taken_0x22208c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22208c) {
            ctx->pc = 0x222090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22208Cu;
            // 0x222090: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222174u;
            goto label_222174;
        }
    }
    ctx->pc = 0x222094u;
    // 0x222094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222098: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x222098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22209c: 0xc0cdb4a  jal         func_336D28
    ctx->pc = 0x22209Cu;
    SET_GPR_U32(ctx, 31, 0x2220A4u);
    ctx->pc = 0x2220A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22209Cu;
    // 0x2220a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D28u, 0x22209Cu, 0x2220A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220A4u;
label_2220a4:
    // 0x2220a4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2220a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2220a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2220a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2220ac: 0x0  nop
    ctx->pc = 0x2220acu;
    // NOP
    // 0x2220b0: 0x45020030  bc1fl       . + 4 + (0x30 << 2)
    ctx->pc = 0x2220B0u;
    {
        const bool branch_taken_0x2220b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2220b0) {
            ctx->pc = 0x2220B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2220B0u;
            // 0x2220b4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222174u;
            goto label_222174;
        }
    }
    ctx->pc = 0x2220B8u;
    // 0x2220b8: 0x7a840000  lq          $a0, 0x0($s4)
    ctx->pc = 0x2220b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2220bc: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2220bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2220c0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2220c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2220c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2220c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2220c8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2220c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2220cc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2220ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2220d0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2220d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2220d4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2220d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2220d8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2220d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2220dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2220dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2220e0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2220e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2220e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2220e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2220e8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x2220e8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2220ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2220ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2220f0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2220f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2220f4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2220f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2220f8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2220f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2220fc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2220fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x222100: 0x4a0003bf  vwaitq
    ctx->pc = 0x222100u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x222104: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x222104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222108: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x222108u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22210c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x22210cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x222110: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x222110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222114: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x222114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x222118: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x222118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22211c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x22211cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x222120: 0x4a0003bf  vwaitq
    ctx->pc = 0x222120u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x222124: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x222124u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x222128: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x222128u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22212c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x22212cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x222130: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x222130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x222134: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x222134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x222138: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x222138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x22213c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x22213cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x222140: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x222140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x222144: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x222144u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x222148: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x222148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x22214c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x22214cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222150: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x222150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x222154: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x222154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222158: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x222158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x22215c: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x22215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x222160: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x222160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x222164: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x222164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x222168: 0x4501ff9b  bc1t        . + 4 + (-0x65 << 2)
    ctx->pc = 0x222168u;
    {
        const bool branch_taken_0x222168 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222168u;
        // 0x22216c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222168) {
            ctx->pc = 0x221FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221fd8;
        }
    }
    ctx->pc = 0x222170u;
    // 0x222170: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x222170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_222174:
    // 0x222174: 0x2ea20040  sltiu       $v0, $s5, 0x40
    ctx->pc = 0x222174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x222178: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x222178u;
    {
        const bool branch_taken_0x222178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222178u;
        // 0x22217c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222178) {
            ctx->pc = 0x221FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221ff8;
        }
    }
    ctx->pc = 0x222180u;
label_222180:
    // 0x222180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x222180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222184:
    // 0x222184: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x222184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x222188: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x222188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22218c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x22218cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x222190: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x222190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x222194: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x222194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x222198: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x222198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22219c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22219cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2221a0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2221a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2221a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2221A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2221A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221A4u;
        // 0x2221a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2221A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2221ACu;
    // 0x2221ac: 0x0  nop
    ctx->pc = 0x2221acu;
    // NOP
    ctx->pc = 0x2221b0u;
}
