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

// Function: sub_00482490
// Address: 0x482490 - 0x482668
void sub_00482490_0x482490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482490_0x482490");
#endif

    switch (ctx->pc) {
        case 0x482650u: goto label_482650;
        default: break;
    }

    ctx->pc = 0x482490u;

    // 0x482490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482494: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x482494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x482498: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x482498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x48249c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4824a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4824a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4824a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4824a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4824a8: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x4824a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4824ac: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x4824acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4824b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4824b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4824b4: 0x46070202  mul.s       $f8, $f0, $f7
    ctx->pc = 0x4824b4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x4824b8: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x4824b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x4824bc: 0xc4440050  lwc1        $f4, 0x50($v0)
    ctx->pc = 0x4824bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4824c0: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x4824c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x4824c4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x4824c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4824c8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x4824c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4824cc: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x4824ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x4824d0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x4824d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4824d4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x4824d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4824d8: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x4824d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x4824dc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x4824dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4824e0: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x4824e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4824e4: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x4824e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x4824e8: 0x46000a07  neg.s       $f8, $f1
    ctx->pc = 0x4824e8u;
    ctx->f[8] = FPU_NEG_S(ctx->f[1]);
    // 0x4824ec: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x4824ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4824f0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x4824f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x4824f4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4824f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4824f8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x4824f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4824fc: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x4824fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482500: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x482500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x482504: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x482504u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x482508: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x482508u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x48250c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x48250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482510: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x482510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x482514: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x482514u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x482518: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x482518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x48251c: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x48251cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x482520: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x482520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x482524: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x482524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x482528: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x482528u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x48252c: 0xe4c20020  swc1        $f2, 0x20($a2)
    ctx->pc = 0x48252cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x482530: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x482530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482534: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x482534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x482538: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x482538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x48253c: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x48253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482540: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x482540u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x482544: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x482544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x482548: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x482548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x48254c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x48254cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x482550: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x482550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x482554: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x482554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x482558: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x482558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x48255c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x48255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482560: 0x46070a02  mul.s       $f8, $f1, $f7
    ctx->pc = 0x482560u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x482564: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x482564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x482568: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x482568u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x48256c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x48256cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x482570: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x482570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482574: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x482574u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x482578: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x482578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x48257c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x48257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482580: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x482580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x482584: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x482584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x482588: 0xc604007c  lwc1        $f4, 0x7C($s0)
    ctx->pc = 0x482588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48258c: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x48258cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x482590: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x482590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482594: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x482594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x482598: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x482598u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x48259c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x48259cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4825a0: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x4825a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4825a4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x4825a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x4825a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4825a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4825ac: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x4825acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4825b0: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x4825b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4825b4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x4825b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x4825b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4825b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4825bc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x4825bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4825c0: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x4825c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4825c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4825c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4825c8: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x4825c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x4825cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4825ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4825d0: 0xe4c10024  swc1        $f1, 0x24($a2)
    ctx->pc = 0x4825d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x4825d4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x4825d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4825d8: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x4825d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4825dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4825dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4825e0: 0xc4640038  lwc1        $f4, 0x38($v1)
    ctx->pc = 0x4825e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4825e4: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x4825e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x4825e8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x4825e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x4825ec: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4825ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4825f0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x4825f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4825f4: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x4825f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x4825f8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x4825f8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x4825fc: 0xe4c60034  swc1        $f6, 0x34($a2)
    ctx->pc = 0x4825fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x482600: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x482600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482604: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x482604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x482608: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x482608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48260c: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x48260cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x482610: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x482610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482614: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x482614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x482618: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x482618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48261c: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x48261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482620: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x482620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482624: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x482624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x482628: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x482628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x48262c: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x48262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x482630: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x482630u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x482634: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x482634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482638: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x482638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x48263c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x48263cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x482640: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x482640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x482644: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x482644u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x482648: 0xc11f2aa  jal         func_47CAA8
    ctx->pc = 0x482648u;
    SET_GPR_U32(ctx, 31, 0x482650u);
    ctx->pc = 0x48264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482648u;
    // 0x48264c: 0xe4c10038  swc1        $f1, 0x38($a2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CAA8u, 0x482648u, 0x482650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482650u;
label_482650:
    // 0x482650: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x482654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482658: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x482658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48265c: 0x3e00008  jr          $ra
    ctx->pc = 0x48265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48265Cu;
        // 0x482660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482664u;
    // 0x482664: 0x0  nop
    ctx->pc = 0x482664u;
    // NOP
    ctx->pc = 0x482668u;
}
