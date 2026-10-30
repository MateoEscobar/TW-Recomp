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

// Function: sub_00481D78
// Address: 0x481d78 - 0x481f50
void sub_00481D78_0x481d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481D78_0x481d78");
#endif

    switch (ctx->pc) {
        case 0x481f3cu: goto label_481f3c;
        default: break;
    }

    ctx->pc = 0x481d78u;

    // 0x481d78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481d7c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x481d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x481d80: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x481d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x481d84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x481d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x481d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x481d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x481d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x481d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481d90: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x481d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x481d94: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x481d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481d98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x481d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481d9c: 0x46070202  mul.s       $f8, $f0, $f7
    ctx->pc = 0x481d9cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x481da0: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x481da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x481da4: 0xc4440050  lwc1        $f4, 0x50($v0)
    ctx->pc = 0x481da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481da8: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x481da8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x481dac: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x481dacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x481db0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x481db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481db4: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x481db4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x481db8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x481db8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x481dbc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x481dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481dc0: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x481dc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x481dc4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x481dc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x481dc8: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x481dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481dcc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x481dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x481dd0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x481dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x481dd4: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x481dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x481dd8: 0x46013201  sub.s       $f8, $f6, $f1
    ctx->pc = 0x481dd8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x481ddc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x481ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481de0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x481de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x481de4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x481de4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x481de8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x481de8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x481dec: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x481decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481df0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x481df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x481df4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x481df4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x481df8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x481df8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x481dfc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x481dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481e00: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x481e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x481e04: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x481e04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x481e08: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x481e08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x481e0c: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x481e0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x481e10: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x481e10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x481e14: 0xe4c20020  swc1        $f2, 0x20($a2)
    ctx->pc = 0x481e14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x481e18: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x481e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481e1c: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x481e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481e20: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x481e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x481e24: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x481e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481e28: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x481e28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x481e2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x481e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x481e30: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x481e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x481e34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x481e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x481e38: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x481e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x481e3c: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x481e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x481e40: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x481e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x481e44: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x481e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481e48: 0x46070a02  mul.s       $f8, $f1, $f7
    ctx->pc = 0x481e48u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x481e4c: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x481e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481e50: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x481e50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x481e54: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x481e54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x481e58: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x481e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481e5c: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x481e5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x481e60: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x481e60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x481e64: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x481e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481e68: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x481e68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x481e6c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x481e6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x481e70: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x481e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481e74: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x481e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x481e78: 0x46060a00  add.s       $f8, $f1, $f6
    ctx->pc = 0x481e78u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x481e7c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x481e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481e80: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x481e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x481e84: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x481e84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x481e88: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x481e88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x481e8c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x481e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481e90: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x481e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x481e94: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x481e94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x481e98: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x481e98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x481e9c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x481e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481ea0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x481ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x481ea4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x481ea4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x481ea8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x481ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x481eac: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x481eacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x481eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481eb4: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x481eb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x481eb8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x481eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481ebc: 0xe4c20024  swc1        $f2, 0x24($a2)
    ctx->pc = 0x481ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x481ec0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x481ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481ec4: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x481ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481ec8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x481ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x481ecc: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x481eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481ed0: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x481ed0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x481ed4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x481ed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x481ed8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x481ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x481edc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x481edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x481ee0: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x481ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x481ee4: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x481ee4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x481ee8: 0xe4c60034  swc1        $f6, 0x34($a2)
    ctx->pc = 0x481ee8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x481eec: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x481eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481ef0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x481ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x481ef4: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x481ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481ef8: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x481ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x481efc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x481efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481f00: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x481f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x481f04: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x481f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481f08: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x481f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481f0c: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x481f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481f10: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x481f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481f14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x481f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x481f18: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x481f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x481f1c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x481f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x481f20: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x481f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481f24: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x481f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x481f28: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x481f28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x481f2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x481f2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x481f30: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x481f30u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x481f34: 0xc11f2aa  jal         func_47CAA8
    ctx->pc = 0x481F34u;
    SET_GPR_U32(ctx, 31, 0x481F3Cu);
    ctx->pc = 0x481F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x481F34u;
    // 0x481f38: 0xe4c10038  swc1        $f1, 0x38($a2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CAA8u, 0x481F34u, 0x481F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481F3Cu;
label_481f3c:
    // 0x481f3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x481f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x481f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481f44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x481f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481f48: 0x3e00008  jr          $ra
    ctx->pc = 0x481F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481F48u;
        // 0x481f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481F50u;
}
