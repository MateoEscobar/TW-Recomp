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

// Function: sub_00335FA0
// Address: 0x335fa0 - 0x336308
void sub_00335FA0_0x335fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335FA0_0x335fa0");
#endif

    switch (ctx->pc) {
        case 0x336090u: goto label_336090;
        case 0x3360d0u: goto label_3360d0;
        case 0x3361d8u: goto label_3361d8;
        default: break;
    }

    ctx->pc = 0x335fa0u;

    // 0x335fa0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x335fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x335fa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x335fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x335fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335fac: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x335facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x335fb0: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x335fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x335fb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x335fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335fb8: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x335fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x335fbc: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x335fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x335fc0: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x335fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x335fc4: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x335fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x335fc8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x335fc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x335fcc: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x335fccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x335fd0: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x335fd0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x335fd4: 0x78a60030  lq          $a2, 0x30($a1)
    ctx->pc = 0x335fd4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x335fd8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x335fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x335fdc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x335fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x335fe0: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x335fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x335fe4: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x335fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x335fe8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x335fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x335fec: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x335fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x335ff0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x335ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x335ff4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x335ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x335ff8: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x335ff8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335ffc: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x335ffcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336000: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x336000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336004: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x336004u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336008: 0x70854ca8  pextuw      $t1, $a0, $a1
    ctx->pc = 0x336008u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x33600c: 0x704354a8  pextuw      $t2, $v0, $v1
    ctx->pc = 0x33600cu;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336010: 0x70855c88  pextlw      $t3, $a0, $a1
    ctx->pc = 0x336010u;
    SET_GPR_VEC(ctx, 11, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x336014: 0x70436488  pextlw      $t4, $v0, $v1
    ctx->pc = 0x336014u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336018: 0x712a7ba9  pcpyud      $t7, $t1, $t2
    ctx->pc = 0x336018u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x33601c: 0x71497389  pcpyld      $t6, $t2, $t1
    ctx->pc = 0x33601cu;
    SET_GPR_VEC(ctx, 14, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x336020: 0x716c6ba9  pcpyud      $t5, $t3, $t4
    ctx->pc = 0x336020u;
    SET_GPR_VEC(ctx, 13, _mm_unpackhi_epi64(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x336024: 0x718b2b89  pcpyld      $a1, $t4, $t3
    ctx->pc = 0x336024u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x336028: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x336028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x33602c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33602cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x336030: 0x244217a0  addiu       $v0, $v0, 0x17A0
    ctx->pc = 0x336030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6048));
    // 0x336034: 0x246317b0  addiu       $v1, $v1, 0x17B0
    ctx->pc = 0x336034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6064));
    // 0x336038: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x336038u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x5117A0u));
    // 0x33603c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x33603cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x336040: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x336040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x336044: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x336044u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5117B0u));
    // 0x336048: 0x248417c0  addiu       $a0, $a0, 0x17C0
    ctx->pc = 0x336048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6080));
    // 0x33604c: 0x24c617d0  addiu       $a2, $a2, 0x17D0
    ctx->pc = 0x33604cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6096));
    // 0x336050: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x336050u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x5117C0u));
    // 0x336054: 0x27b90040  addiu       $t9, $sp, 0x40
    ctx->pc = 0x336054u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x336058: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x336058u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5117D0u));
    // 0x33605c: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x33605cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x336060: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x336060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x336064: 0x320a02d  daddu       $s4, $t9, $zero
    ctx->pc = 0x336064u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336068: 0x7fad0050  sq          $t5, 0x50($sp)
    ctx->pc = 0x336068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
    // 0x33606c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x33606cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336070: 0x7fae0060  sq          $t6, 0x60($sp)
    ctx->pc = 0x336070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 14));
    // 0x336074: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x336074u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336078: 0x7faf0070  sq          $t7, 0x70($sp)
    ctx->pc = 0x336078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 15));
    // 0x33607c: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x33607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x336080: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x336080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x336084: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x336084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
    // 0x336088: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x336088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x33608c: 0x181080  sll         $v0, $t8, 2
    ctx->pc = 0x33608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
label_336090:
    // 0x336090: 0x270c0001  addiu       $t4, $t8, 0x1
    ctx->pc = 0x336090u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x336094: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x336094u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336098: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x336098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33609c: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x33609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x3360a0: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x3360a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3360a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3360a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3360a8: 0x2d830004  sltiu       $v1, $t4, 0x4
    ctx->pc = 0x3360a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3360ac: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x3360acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x3360b0: 0x186900  sll         $t5, $t8, 4
    ctx->pc = 0x3360b0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x3360b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3360b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3360b8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x3360b8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x3360bc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3360BCu;
    {
        const bool branch_taken_0x3360bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3360C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360BCu;
        // 0x3360c0: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360bc) {
            ctx->pc = 0x33610Cu;
            goto label_33610c;
        }
    }
    ctx->pc = 0x3360C4u;
    // 0x3360c4: 0x1d41021  addu        $v0, $t6, $s4
    ctx->pc = 0x3360c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 20)));
    // 0x3360c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3360c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3360cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3360ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3360d0:
    // 0x3360d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3360d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3360d4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3360d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3360d8: 0x0  nop
    ctx->pc = 0x3360d8u;
    // NOP
    // 0x3360dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3360DCu;
    {
        const bool branch_taken_0x3360dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3360dc) {
            ctx->pc = 0x3360E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3360DCu;
            // 0x3360e0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3360E4u;
            goto label_3360e4;
        }
    }
    ctx->pc = 0x3360E4u;
label_3360e4:
    // 0x3360e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3360e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3360e8: 0x0  nop
    ctx->pc = 0x3360e8u;
    // NOP
    // 0x3360ec: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3360ECu;
    {
        const bool branch_taken_0x3360ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3360ec) {
            ctx->pc = 0x3360F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3360ECu;
            // 0x3360f0: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336100u;
            goto label_336100;
        }
    }
    ctx->pc = 0x3360F4u;
    // 0x3360f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3360f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x3360f8: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x3360f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3360fc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3360fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_336100:
    // 0x336100: 0x2d820004  sltiu       $v0, $t4, 0x4
    ctx->pc = 0x336100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x336104: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x336104u;
    {
        const bool branch_taken_0x336104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336104u;
        // 0x336108: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336104) {
            ctx->pc = 0x3360D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3360d0;
        }
    }
    ctx->pc = 0x33610Cu;
label_33610c:
    // 0x33610c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x33610cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x336110: 0x24d3021  addu        $a2, $s2, $t5
    ctx->pc = 0x336110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x336114: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x336114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x336118: 0x32d3821  addu        $a3, $t9, $t5
    ctx->pc = 0x336118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x33611c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x33611cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x336120: 0x3252821  addu        $a1, $t9, $a1
    ctx->pc = 0x336120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x336124: 0x30e2021  addu        $a0, $t8, $t6
    ctx->pc = 0x336124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
    // 0x336128: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x336128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33612c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33612cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336130: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x336130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x336134: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x336134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x336138: 0x3242021  addu        $a0, $t9, $a0
    ctx->pc = 0x336138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x33613c: 0x1bd4021  addu        $t0, $t5, $sp
    ctx->pc = 0x33613cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 29)));
    // 0x336140: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x336140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336144: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x336144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336148: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x336148u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33614c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x33614cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336150: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x336150u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x336154: 0x2ad8021  addu        $s0, $s5, $t5
    ctx->pc = 0x336154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x336158: 0x28d7821  addu        $t7, $s4, $t5
    ctx->pc = 0x336158u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x33615c: 0x1d47021  addu        $t6, $t6, $s4
    ctx->pc = 0x33615cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 20)));
    // 0x336160: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x336160u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x336164: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x336164u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336168: 0x27ad0080  addiu       $t5, $sp, 0x80
    ctx->pc = 0x336168u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33616c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x33616cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x336170: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x336170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336174: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x336174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x336178: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x336178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33617c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x33617cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x336180: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x336180u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x336184: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336184u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336188: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x336188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33618c: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x33618cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x336190: 0x0  nop
    ctx->pc = 0x336190u;
    // NOP
    // 0x336194: 0x0  nop
    ctx->pc = 0x336194u;
    // NOP
    // 0x336198: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x336198u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x33619c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x33619cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3361a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3361a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3361a4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3361a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3361a8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x3361a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3361ac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3361acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3361b0: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3361b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x3361b4: 0x7d230040  sq          $v1, 0x40($t1)
    ctx->pc = 0x3361b4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 64), GPR_VEC(ctx, 3));
    // 0x3361b8: 0x79420080  lq          $v0, 0x80($t2)
    ctx->pc = 0x3361b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x3361bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3361bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3361c0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3361c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3361c4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x3361c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3361c8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3361c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3361cc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3361ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3361d0: 0x7d620080  sq          $v0, 0x80($t3)
    ctx->pc = 0x3361d0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 128), GPR_VEC(ctx, 2));
    // 0x3361d4: 0x0  nop
    ctx->pc = 0x3361d4u;
    // NOP
label_3361d8:
    // 0x3361d8: 0x51980024  beql        $t4, $t8, . + 4 + (0x24 << 2)
    ctx->pc = 0x3361D8u;
    {
        const bool branch_taken_0x3361d8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 24));
        if (branch_taken_0x3361d8) {
            ctx->pc = 0x3361DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3361D8u;
            // 0x3361dc: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33626Cu;
            goto label_33626c;
        }
    }
    ctx->pc = 0x3361E0u;
    // 0x3361e0: 0x79e30000  lq          $v1, 0x0($t7)
    ctx->pc = 0x3361e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3361e4: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x3361e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3361e8: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3361e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x3361ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3361ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3361f0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3361f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3361f4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3361f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3361f8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3361f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x3361fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3361fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336200: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x336200u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x336204: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x336204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x336208: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x336208u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33620c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33620cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336210: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x336210u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x336214: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x336214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x336218: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x336218u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33621c: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x33621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x336220: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x336220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
    // 0x336224: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x336224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x336228: 0x79a2ffc0  lq          $v0, -0x40($t5)
    ctx->pc = 0x336228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 4294967232)));
    // 0x33622c: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x33622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x336230: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x336230u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336234: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x336234u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336238: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x336238u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33623c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33623cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x336240: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x336240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x336244: 0x7da2ffc0  sq          $v0, -0x40($t5)
    ctx->pc = 0x336244u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967232), GPR_VEC(ctx, 2));
    // 0x336248: 0x79a30000  lq          $v1, 0x0($t5)
    ctx->pc = 0x336248u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x33624c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x33624cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x336250: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x336250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336254: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x336254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336258: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x336258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33625c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x33625cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x336260: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x336260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x336264: 0x7da30000  sq          $v1, 0x0($t5)
    ctx->pc = 0x336264u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 3));
    // 0x336268: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x336268u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_33626c:
    // 0x33626c: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x33626cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x336270: 0x2d820004  sltiu       $v0, $t4, 0x4
    ctx->pc = 0x336270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x336274: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x336274u;
    {
        const bool branch_taken_0x336274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336274u;
        // 0x336278: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336274) {
            ctx->pc = 0x3361D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3361d8;
        }
    }
    ctx->pc = 0x33627Cu;
    // 0x33627c: 0x220c02d  daddu       $t8, $s1, $zero
    ctx->pc = 0x33627cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336280: 0x2f020004  sltiu       $v0, $t8, 0x4
    ctx->pc = 0x336280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x336284: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x336284u;
    {
        const bool branch_taken_0x336284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336284u;
        // 0x336288: 0x181080  sll         $v0, $t8, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336284) {
            ctx->pc = 0x336090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336090;
        }
    }
    ctx->pc = 0x33628Cu;
    // 0x33628c: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x33628cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x336290: 0x7ba40090  lq          $a0, 0x90($sp)
    ctx->pc = 0x336290u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x336294: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x336294u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x336298: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x336298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33629c: 0x70854ca8  pextuw      $t1, $a0, $a1
    ctx->pc = 0x33629cu;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x3362a0: 0x704354a8  pextuw      $t2, $v0, $v1
    ctx->pc = 0x3362a0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3362a4: 0x70855c88  pextlw      $t3, $a0, $a1
    ctx->pc = 0x3362a4u;
    SET_GPR_VEC(ctx, 11, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x3362a8: 0x70436488  pextlw      $t4, $v0, $v1
    ctx->pc = 0x3362a8u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3362ac: 0x712a43a9  pcpyud      $t0, $t1, $t2
    ctx->pc = 0x3362acu;
    SET_GPR_VEC(ctx, 8, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3362b0: 0x71493b89  pcpyld      $a3, $t2, $t1
    ctx->pc = 0x3362b0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x3362b4: 0x716c33a9  pcpyud      $a2, $t3, $t4
    ctx->pc = 0x3362b4u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x3362b8: 0x718b2b89  pcpyld      $a1, $t4, $t3
    ctx->pc = 0x3362b8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x3362bc: 0x7e680030  sq          $t0, 0x30($s3)
    ctx->pc = 0x3362bcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 8));
    // 0x3362c0: 0x7e650000  sq          $a1, 0x0($s3)
    ctx->pc = 0x3362c0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 5));
    // 0x3362c4: 0x7e660010  sq          $a2, 0x10($s3)
    ctx->pc = 0x3362c4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 6));
    // 0x3362c8: 0x7e670020  sq          $a3, 0x20($s3)
    ctx->pc = 0x3362c8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 7));
    // 0x3362cc: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x3362ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3362d0: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x3362d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3362d4: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x3362d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3362d8: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x3362d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3362dc: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x3362dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3362e0: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x3362e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3362e4: 0x7fa500f0  sq          $a1, 0xF0($sp)
    ctx->pc = 0x3362e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 5));
    // 0x3362e8: 0x7fa60100  sq          $a2, 0x100($sp)
    ctx->pc = 0x3362e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 6));
    // 0x3362ec: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x3362ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
    // 0x3362f0: 0x7fa80120  sq          $t0, 0x120($sp)
    ctx->pc = 0x3362f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 8));
    // 0x3362f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3362F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3362F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362F4u;
        // 0x3362f8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3362F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3362FCu;
    // 0x3362fc: 0x0  nop
    ctx->pc = 0x3362fcu;
    // NOP
    // 0x336300: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x336300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x336304: 0x0  nop
    ctx->pc = 0x336304u;
    // NOP
    ctx->pc = 0x336308u;
}
