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

// Function: sub_004605E8
// Address: 0x4605e8 - 0x460778
void sub_004605E8_0x4605e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004605E8_0x4605e8");
#endif

    switch (ctx->pc) {
        case 0x460618u: goto label_460618;
        default: break;
    }

    ctx->pc = 0x4605e8u;

    // 0x4605e8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4605e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4605ec: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4605ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4605f0: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x4605f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x4605f4: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x4605f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x4605f8: 0x18e0005d  blez        $a3, . + 4 + (0x5D << 2)
    ctx->pc = 0x4605F8u;
    {
        const bool branch_taken_0x4605f8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4605FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4605F8u;
        // 0x4605fc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4605f8) {
            ctx->pc = 0x460770u;
            goto label_460770;
        }
    }
    ctx->pc = 0x460600u;
    // 0x460600: 0x24620038  addiu       $v0, $v1, 0x38
    ctx->pc = 0x460600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x460604: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x460604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x460608: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x460608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x46060c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x46060cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x460610: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x460610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x460614: 0x0  nop
    ctx->pc = 0x460614u;
    // NOP
label_460618:
    // 0x460618: 0xc468ffd0  lwc1        $f8, -0x30($v1)
    ctx->pc = 0x460618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x46061c: 0x46094202  mul.s       $f8, $f8, $f9
    ctx->pc = 0x46061cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x460620: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x460620u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x460624: 0xc467ffd4  lwc1        $f7, -0x2C($v1)
    ctx->pc = 0x460624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x460628: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x460628u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x46062c: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x46062cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x460630: 0xc465ffd8  lwc1        $f5, -0x28($v1)
    ctx->pc = 0x460630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x460634: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x460634u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x460638: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x460638u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x46063c: 0xc464ffe0  lwc1        $f4, -0x20($v1)
    ctx->pc = 0x46063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x460640: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x460640u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x460644: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x460644u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x460648: 0xc463ffe4  lwc1        $f3, -0x1C($v1)
    ctx->pc = 0x460648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46064c: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x46064cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x460650: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x460650u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x460654: 0xc460ffe8  lwc1        $f0, -0x18($v1)
    ctx->pc = 0x460654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460658: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x460658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x46065c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x46065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x460660: 0x46044040  add.s       $f1, $f8, $f4
    ctx->pc = 0x460660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x460664: 0x46033980  add.s       $f6, $f7, $f3
    ctx->pc = 0x460664u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x460668: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x460668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x46066c: 0x46002880  add.s       $f2, $f5, $f0
    ctx->pc = 0x46066cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x460670: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x460670u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x460674: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x460674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x460678: 0x46044201  sub.s       $f8, $f8, $f4
    ctx->pc = 0x460678u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x46067c: 0x460339c1  sub.s       $f7, $f7, $f3
    ctx->pc = 0x46067cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x460680: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x460680u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x460684: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x460684u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x460688: 0xe7a70034  swc1        $f7, 0x34($sp)
    ctx->pc = 0x460688u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x46068c: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x46068cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x460690: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x460690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x460694: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x460694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x460698: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x460698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46069c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x46069cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x4606a0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4606a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4606a4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x4606a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4606a8: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x4606a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4606ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4606acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4606b0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4606b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4606b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4606b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4606b8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x4606b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4606bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4606bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4606c0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4606c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4606c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4606c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4606c8: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x4606c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4606cc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x4606ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4606d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4606d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4606d4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4606d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4606d8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x4606d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4606dc: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x4606dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4606e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4606e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4606e4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4606e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4606e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4606e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4606ec: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x4606ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4606f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4606f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4606f4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x4606f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4606f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4606f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4606fc: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x4606fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460700: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x460700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460704: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x460704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x460708: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x460708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x46070c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x46070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460710: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x460710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460714: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x460714u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x460718: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x460718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x46071c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x46071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460720: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x460720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460724: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x460724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x460728: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x460728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x46072c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x460730: 0xc440fff8  lwc1        $f0, -0x8($v0)
    ctx->pc = 0x460730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460734: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x460734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460738: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x46073c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x46073cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x460740: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x460740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460744: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x460744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460748: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x460748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x46074c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x46074cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x460750: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x460750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460754: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x460754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460758: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x46075c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x46075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x460760: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x460760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x460764: 0x14e0ffac  bnez        $a3, . + 4 + (-0x54 << 2)
    ctx->pc = 0x460764u;
    {
        const bool branch_taken_0x460764 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x460768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460764u;
        // 0x460768: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460764) {
            ctx->pc = 0x460618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460618;
        }
    }
    ctx->pc = 0x46076Cu;
    // 0x46076c: 0x0  nop
    ctx->pc = 0x46076cu;
    // NOP
label_460770:
    // 0x460770: 0x3e00008  jr          $ra
    ctx->pc = 0x460770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x460774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460770u;
        // 0x460774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460778u;
}
