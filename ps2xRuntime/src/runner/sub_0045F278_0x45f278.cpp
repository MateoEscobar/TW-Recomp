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

// Function: sub_0045F278
// Address: 0x45f278 - 0x45f4a8
void sub_0045F278_0x45f278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F278_0x45f278");
#endif

    switch (ctx->pc) {
        case 0x45f3c0u: goto label_45f3c0;
        default: break;
    }

    ctx->pc = 0x45f278u;

    // 0x45f278: 0xc5080068  lwc1        $f8, 0x68($t0)
    ctx->pc = 0x45f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x45f27c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x45f27cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x45f280: 0xc500006c  lwc1        $f0, 0x6C($t0)
    ctx->pc = 0x45f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f284: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x45f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x45f288: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x45f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x45f28c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x45f28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x45f290: 0x46074382  mul.s       $f14, $f8, $f7
    ctx->pc = 0x45f290u;
    ctx->f[14] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x45f294: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x45f294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45f298: 0x46060242  mul.s       $f9, $f0, $f6
    ctx->pc = 0x45f298u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x45f29c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x45f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x45f2a0: 0x46054342  mul.s       $f13, $f8, $f5
    ctx->pc = 0x45f2a0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x45f2a4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x45f2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f2a8: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x45f2a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x45f2ac: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x45f2acu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x45f2b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x45f2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x45f2b4: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x45f2b4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x45f2b8: 0x46097380  add.s       $f14, $f14, $f9
    ctx->pc = 0x45f2b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[9]);
    // 0x45f2bc: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x45f2bcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x45f2c0: 0xe7ad0030  swc1        $f13, 0x30($sp)
    ctx->pc = 0x45f2c0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x45f2c4: 0xe7ae0038  swc1        $f14, 0x38($sp)
    ctx->pc = 0x45f2c4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x45f2c8: 0xe7a80034  swc1        $f8, 0x34($sp)
    ctx->pc = 0x45f2c8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x45f2cc: 0xc5010070  lwc1        $f1, 0x70($t0)
    ctx->pc = 0x45f2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f2d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x45f2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x45f2d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x45f2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x45f2d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x45f2d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x45f2dc: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x45f2dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x45f2e0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x45f2e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x45f2e4: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x45f2e4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x45f2e8: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x45f2e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x45f2ec: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x45f2ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x45f2f0: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x45f2f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x45f2f4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x45f2f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x45f2f8: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x45f2f8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x45f2fc: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x45f2fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x45f300: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x45f300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x45f304: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x45f304u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x45f308: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x45f308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x45f30c: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x45f30cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x45f310: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x45f310u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x45f314: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x45f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45f318: 0x46003a47  neg.s       $f9, $f7
    ctx->pc = 0x45f318u;
    ctx->f[9] = FPU_NEG_S(ctx->f[7]);
    // 0x45f31c: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x45f31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x45f320: 0x46030280  add.s       $f10, $f0, $f3
    ctx->pc = 0x45f320u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x45f324: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x45f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x45f328: 0x46020ac0  add.s       $f11, $f1, $f2
    ctx->pc = 0x45f328u;
    ctx->f[11] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45f32c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45f330: 0x46064b00  add.s       $f12, $f9, $f6
    ctx->pc = 0x45f330u;
    ctx->f[12] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x45f334: 0x46032bc0  add.s       $f15, $f5, $f3
    ctx->pc = 0x45f334u;
    ctx->f[15] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x45f338: 0x46022400  add.s       $f16, $f4, $f2
    ctx->pc = 0x45f338u;
    ctx->f[16] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x45f33c: 0x46063c40  add.s       $f17, $f7, $f6
    ctx->pc = 0x45f33cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x45f340: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x45f340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x45f344: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45f344u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45f348: 0x46064a41  sub.s       $f9, $f9, $f6
    ctx->pc = 0x45f348u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x45f34c: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x45f34cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x45f350: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x45f350u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x45f354: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x45f354u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x45f358: 0x460d5280  add.s       $f10, $f10, $f13
    ctx->pc = 0x45f358u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x45f35c: 0x46085ac0  add.s       $f11, $f11, $f8
    ctx->pc = 0x45f35cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
    // 0x45f360: 0x460e6300  add.s       $f12, $f12, $f14
    ctx->pc = 0x45f360u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x45f364: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x45f364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x45f368: 0xe7aa0024  swc1        $f10, 0x24($sp)
    ctx->pc = 0x45f368u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x45f36c: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x45f36cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x45f370: 0xe7ab0028  swc1        $f11, 0x28($sp)
    ctx->pc = 0x45f370u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x45f374: 0x460e4a40  add.s       $f9, $f9, $f14
    ctx->pc = 0x45f374u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[14]);
    // 0x45f378: 0xe7ac002c  swc1        $f12, 0x2C($sp)
    ctx->pc = 0x45f378u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x45f37c: 0x460d2940  add.s       $f5, $f5, $f13
    ctx->pc = 0x45f37cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[13]);
    // 0x45f380: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x45f380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45f384: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x45f384u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x45f388: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x45f388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45f38c: 0x460e39c0  add.s       $f7, $f7, $f14
    ctx->pc = 0x45f38cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[14]);
    // 0x45f390: 0xe7a90008  swc1        $f9, 0x8($sp)
    ctx->pc = 0x45f390u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45f394: 0x460d7bc0  add.s       $f15, $f15, $f13
    ctx->pc = 0x45f394u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[13]);
    // 0x45f398: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x45f398u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x45f39c: 0x46088400  add.s       $f16, $f16, $f8
    ctx->pc = 0x45f39cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[8]);
    // 0x45f3a0: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x45f3a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45f3a4: 0x460e8c40  add.s       $f17, $f17, $f14
    ctx->pc = 0x45f3a4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[14]);
    // 0x45f3a8: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x45f3a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x45f3ac: 0xe7af0018  swc1        $f15, 0x18($sp)
    ctx->pc = 0x45f3acu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45f3b0: 0xe7b0001c  swc1        $f16, 0x1C($sp)
    ctx->pc = 0x45f3b0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x45f3b4: 0x18e00039  blez        $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x45F3B4u;
    {
        const bool branch_taken_0x45f3b4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x45F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F3B4u;
        // 0x45f3b8: 0xe7b10020  swc1        $f17, 0x20($sp) (Delay Slot)
        { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f3b4) {
            ctx->pc = 0x45F49Cu;
            goto label_45f49c;
        }
    }
    ctx->pc = 0x45F3BCu;
    // 0x45f3bc: 0x0  nop
    ctx->pc = 0x45f3bcu;
    // NOP
label_45f3c0:
    // 0x45f3c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x45f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f3c4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45f3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45f3c8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x45f3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f3cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f3ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f3d0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x45f3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f3d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x45f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f3d8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f3dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f3dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f3e0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x45f3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f3e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x45f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f3e8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x45f3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f3ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f3ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f3f0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x45f3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f3f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45f3f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f3fc: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x45f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f400: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f404: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f408: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45f408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f40c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x45f40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f410: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f414: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45f414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f418: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f41c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x45f41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f420: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f424: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f428: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45f428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45f42c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f430: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x45f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f438: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f43c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f440: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x45f440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f444: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f448: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45f448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f44c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f450: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x45f450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f454: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f458: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f45c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45f460: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f464: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x45f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f468: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f46c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45f46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45f470: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f474: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x45f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f478: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45f478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45f47c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45f47cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45f480: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x45f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45f484: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x45f484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f488: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x45f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x45f48c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45f48cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45f490: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x45f490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x45f494: 0x14e0ffca  bnez        $a3, . + 4 + (-0x36 << 2)
    ctx->pc = 0x45F494u;
    {
        const bool branch_taken_0x45f494 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F494u;
        // 0x45f498: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f494) {
            ctx->pc = 0x45F3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45f3c0;
        }
    }
    ctx->pc = 0x45F49Cu;
label_45f49c:
    // 0x45f49c: 0x3e00008  jr          $ra
    ctx->pc = 0x45F49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F49Cu;
        // 0x45f4a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F4A4u;
    // 0x45f4a4: 0x0  nop
    ctx->pc = 0x45f4a4u;
    // NOP
    ctx->pc = 0x45f4a8u;
}
