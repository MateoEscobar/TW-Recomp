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

// Function: sub_00460778
// Address: 0x460778 - 0x460960
void sub_00460778_0x460778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460778_0x460778");
#endif

    switch (ctx->pc) {
        case 0x4607a8u: goto label_4607a8;
        default: break;
    }

    ctx->pc = 0x460778u;

    // 0x460778: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x460778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x46077c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46077cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x460780: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x460780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x460784: 0xc5070068  lwc1        $f7, 0x68($t0)
    ctx->pc = 0x460784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x460788: 0xc506006c  lwc1        $f6, 0x6C($t0)
    ctx->pc = 0x460788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x46078c: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x46078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x460790: 0x18e00071  blez        $a3, . + 4 + (0x71 << 2)
    ctx->pc = 0x460790u;
    {
        const bool branch_taken_0x460790 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x460794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460790u;
        // 0x460794: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460790) {
            ctx->pc = 0x460958u;
            goto label_460958;
        }
    }
    ctx->pc = 0x460798u;
    // 0x460798: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x460798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x46079c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x46079cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4607a0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x4607a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x4607a4: 0x0  nop
    ctx->pc = 0x4607a4u;
    // NOP
label_4607a8:
    // 0x4607a8: 0xc441ffe0  lwc1        $f1, -0x20($v0)
    ctx->pc = 0x4607a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4607ac: 0xc440ffd0  lwc1        $f0, -0x30($v0)
    ctx->pc = 0x4607acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4607b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4607b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4607b4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4607b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4607b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x4607b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4607bc: 0xc440ffe4  lwc1        $f0, -0x1C($v0)
    ctx->pc = 0x4607bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4607c0: 0xc441ffd4  lwc1        $f1, -0x2C($v0)
    ctx->pc = 0x4607c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4607c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4607c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4607c8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x4607c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x4607cc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x4607ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4607d0: 0xc441ffe8  lwc1        $f1, -0x18($v0)
    ctx->pc = 0x4607d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4607d4: 0xc440ffd8  lwc1        $f0, -0x28($v0)
    ctx->pc = 0x4607d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4607d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4607d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4607dc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4607dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4607e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x4607e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4607e4: 0xc440ffe0  lwc1        $f0, -0x20($v0)
    ctx->pc = 0x4607e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4607e8: 0xc444ffd0  lwc1        $f4, -0x30($v0)
    ctx->pc = 0x4607e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4607ec: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x4607ecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4607f0: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x4607f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x4607f4: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x4607f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4607f8: 0xc441ffe4  lwc1        $f1, -0x1C($v0)
    ctx->pc = 0x4607f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4607fc: 0xc440ffd4  lwc1        $f0, -0x2C($v0)
    ctx->pc = 0x4607fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460800: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x460800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x460804: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x460804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x460808: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x460808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x46080c: 0xc440ffe8  lwc1        $f0, -0x18($v0)
    ctx->pc = 0x46080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460810: 0xc441ffd8  lwc1        $f1, -0x28($v0)
    ctx->pc = 0x460810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460814: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x460814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x460818: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x460818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x46081c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x46081cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x460820: 0xc442ffd0  lwc1        $f2, -0x30($v0)
    ctx->pc = 0x460820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460824: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x460824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460828: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x460828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x46082c: 0xc440ffe0  lwc1        $f0, -0x20($v0)
    ctx->pc = 0x46082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460830: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x460830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x460834: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x460834u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x460838: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x460838u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x46083c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x46083cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x460840: 0xc442ffd4  lwc1        $f2, -0x2C($v0)
    ctx->pc = 0x460840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460844: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x460844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460848: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x460848u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x46084c: 0xc440ffe4  lwc1        $f0, -0x1C($v0)
    ctx->pc = 0x46084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460850: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x460850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x460854: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x460854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x460858: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x460858u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x46085c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x46085cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x460860: 0xc442ffd8  lwc1        $f2, -0x28($v0)
    ctx->pc = 0x460860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460864: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x460864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460868: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x460868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x46086c: 0xc440ffe8  lwc1        $f0, -0x18($v0)
    ctx->pc = 0x46086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460870: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x460870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x460874: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x460874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x460878: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x460878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x46087c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x46087cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x460880: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x460880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x460884: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x460884u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x460888: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x460888u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x46088c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x46088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460890: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x460890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460894: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x460898: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x460898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x46089c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x46089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4608a0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x4608a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4608a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4608a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4608a8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x4608a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4608ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4608acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4608b0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x4608b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4608b4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x4608b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4608b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4608b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4608bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4608bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4608c0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x4608c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4608c4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x4608c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4608c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4608c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4608cc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4608ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4608d0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4608d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4608d4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4608d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4608d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4608d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4608dc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4608dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4608e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4608e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4608e4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x4608e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4608e8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x4608e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4608ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4608ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4608f0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4608f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4608f4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x4608f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4608f8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x4608f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4608fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4608fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x460900: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x460900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x460904: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x460904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460908: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x460908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46090c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x46090cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x460910: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x460910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x460914: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x460914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x460918: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x460918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46091c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x46091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460920: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x460924: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x460924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x460928: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x460928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46092c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x46092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460930: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x460930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x460934: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x460934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x460938: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x460938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46093c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x46093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x460944: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x460944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x460948: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x460948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x46094c: 0x14e0ff96  bnez        $a3, . + 4 + (-0x6A << 2)
    ctx->pc = 0x46094Cu;
    {
        const bool branch_taken_0x46094c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x460950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46094Cu;
        // 0x460950: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46094c) {
            ctx->pc = 0x4607A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4607a8;
        }
    }
    ctx->pc = 0x460954u;
    // 0x460954: 0x0  nop
    ctx->pc = 0x460954u;
    // NOP
label_460958:
    // 0x460958: 0x3e00008  jr          $ra
    ctx->pc = 0x460958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460958u;
        // 0x46095c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460960u;
}
