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

// Function: sub_003365C8
// Address: 0x3365c8 - 0x336808
void sub_003365C8_0x3365c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003365C8_0x3365c8");
#endif

    ctx->pc = 0x3365c8u;

    // 0x3365c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3365c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3365cc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3365ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3365d0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3365d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3365d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3365d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3365d8: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x3365d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3365dc: 0xc4c40028  lwc1        $f4, 0x28($a2)
    ctx->pc = 0x3365dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3365e0: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x3365e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3365e4: 0x46040040  add.s       $f1, $f0, $f4
    ctx->pc = 0x3365e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3365e8: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x3365e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3365ec: 0x0  nop
    ctx->pc = 0x3365ecu;
    // NOP
    // 0x3365f0: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x3365F0u;
    {
        const bool branch_taken_0x3365f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3365F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3365F0u;
        // 0x3365f4: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365f0) {
            ctx->pc = 0x33666Cu;
            goto label_33666c;
        }
    }
    ctx->pc = 0x3365F8u;
    // 0x3365f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3365f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3365fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3365fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336600: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x336600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x336604: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x336604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x336608: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x336608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33660c: 0x0  nop
    ctx->pc = 0x33660cu;
    // NOP
    // 0x336610: 0x0  nop
    ctx->pc = 0x336610u;
    // NOP
    // 0x336614: 0x46000104  c1          0x104
    ctx->pc = 0x336614u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x336618: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x336618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x33661c: 0x0  nop
    ctx->pc = 0x33661cu;
    // NOP
    // 0x336620: 0x0  nop
    ctx->pc = 0x336620u;
    // NOP
    // 0x336624: 0x46041103  div.s       $f4, $f2, $f4
    ctx->pc = 0x336624u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x336628: 0xe581000c  swc1        $f1, 0xC($t4)
    ctx->pc = 0x336628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x33662c: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x33662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x336630: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x336630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x336634: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x336634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x336638: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x336638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x33663c: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x33663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x336640: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x336640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x336644: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x336644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x336648: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x336648u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33664c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x33664cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x336650: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x336650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x336654: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x336654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x336658: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x336658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33665c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x33665cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x336660: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x336660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x336664: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x336664u;
    {
        const bool branch_taken_0x336664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336664u;
        // 0x336668: 0xe5800008  swc1        $f0, 0x8($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x336664) {
            ctx->pc = 0x336800u;
            goto label_336800;
        }
    }
    ctx->pc = 0x33666Cu;
label_33666c:
    // 0x33666c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x33666cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336670: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x336670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x336674: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x336674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x336678: 0x24486a70  addiu       $t0, $v0, 0x6A70
    ctx->pc = 0x336678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27248));
    // 0x33667c: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x33667cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x336680: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x336680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x336684: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x336684u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x576A78u));
    // 0x336688: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x336688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33668c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x33668cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336690: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x336690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x336694: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x336694u;
    {
        const bool branch_taken_0x336694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x336698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336694u;
        // 0x336698: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336694) {
            ctx->pc = 0x3366A0u;
            goto label_3366a0;
        }
    }
    ctx->pc = 0x33669Cu;
    // 0x33669c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x33669cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3366a0:
    // 0x3366a0: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x3366a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3366a4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3366a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3366a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3366a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3366ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3366acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3366b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3366b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3366b4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3366b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3366b8: 0x0  nop
    ctx->pc = 0x3366b8u;
    // NOP
    // 0x3366bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3366BCu;
    {
        const bool branch_taken_0x3366bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3366bc) {
            ctx->pc = 0x3366C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3366BCu;
            // 0x3366c0: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3366C4u;
            goto label_3366c4;
        }
    }
    ctx->pc = 0x3366C4u;
label_3366c4:
    // 0x3366c4: 0xb4080  sll         $t0, $t3, 2
    ctx->pc = 0x3366c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3366c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3366c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3366cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3366ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3366d0: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x3366d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3366d4: 0x10b1021  addu        $v0, $t0, $t3
    ctx->pc = 0x3366d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x3366d8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3366d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3366dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3366dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3366e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3366e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3366e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3366e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3366e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3366e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3366ec: 0x54880  sll         $t1, $a1, 2
    ctx->pc = 0x3366ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3366f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3366f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3366f4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3366f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3366f8: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x3366f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x3366fc: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x3366fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x336700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x336700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x336704: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x336704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x336708: 0x3a82021  addu        $a0, $sp, $t0
    ctx->pc = 0x336708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x33670c: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x33670cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x336710: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x336710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x336714: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x336714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x336718: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x336718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33671c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33671cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x336720: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x336720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x336724: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x336724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x336728: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x336728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33672c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x33672cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x336730: 0x0  nop
    ctx->pc = 0x336730u;
    // NOP
    // 0x336734: 0x0  nop
    ctx->pc = 0x336734u;
    // NOP
    // 0x336738: 0x46010104  c1          0x10104
    ctx->pc = 0x336738u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x33673c: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x33673cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x336740: 0x46052032  c.eq.s      $f4, $f5
    ctx->pc = 0x336740u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336744: 0x0  nop
    ctx->pc = 0x336744u;
    // NOP
    // 0x336748: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x336748u;
    {
        const bool branch_taken_0x336748 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336748u;
        // 0x33674c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x336748) {
            ctx->pc = 0x33675Cu;
            goto label_33675c;
        }
    }
    ctx->pc = 0x336750u;
    // 0x336750: 0x0  nop
    ctx->pc = 0x336750u;
    // NOP
    // 0x336754: 0x0  nop
    ctx->pc = 0x336754u;
    // NOP
    // 0x336758: 0x46041903  div.s       $f4, $f3, $f4
    ctx->pc = 0x336758u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
label_33675c:
    // 0x33675c: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x33675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x336760: 0x1451821  addu        $v1, $t2, $a1
    ctx->pc = 0x336760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x336764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x336764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336768: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x336768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33676c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x336770: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x336770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x336774: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x336774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x336778: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x336778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x33677c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x33677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x336780: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x336780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x336784: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x336784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x336788: 0x14b2021  addu        $a0, $t2, $t3
    ctx->pc = 0x336788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x33678c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x33678cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x336790: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x336790u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x336794: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x336794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336798: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x336798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x33679c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3367a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3367a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3367a4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3367a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3367a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3367a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3367ac: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3367acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3367b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3367b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3367b4: 0x3a93021  addu        $a2, $sp, $t1
    ctx->pc = 0x3367b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 9)));
    // 0x3367b8: 0x3aa3821  addu        $a3, $sp, $t2
    ctx->pc = 0x3367b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 10)));
    // 0x3367bc: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x3367bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x3367c0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3367c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3367c4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3367c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3367c8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3367c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3367cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3367ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3367d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3367d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3367d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3367d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3367d8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3367d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3367dc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3367dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3367e0: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x3367e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3367e4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3367e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x3367e8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3367e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3367ec: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x3367ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3367f0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3367f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3367f4: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x3367f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x3367f8: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x3367f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x3367fc: 0xe5820004  swc1        $f2, 0x4($t4)
    ctx->pc = 0x3367fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_336800:
    // 0x336800: 0x3e00008  jr          $ra
    ctx->pc = 0x336800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336800u;
        // 0x336804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336808u;
}
