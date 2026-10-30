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

// Function: sub_00481F50
// Address: 0x481f50 - 0x482490
void sub_00481F50_0x481f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481F50_0x481f50");
#endif

    switch (ctx->pc) {
        case 0x482064u: goto label_482064;
        default: break;
    }

    ctx->pc = 0x481f50u;

    // 0x481f50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x481f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x481f54: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x481f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x481f58: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x481f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x481f5c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x481f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x481f60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x481f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481f64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x481f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x481f68: 0x26090148  addiu       $t1, $s0, 0x148
    ctx->pc = 0x481f68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x481f6c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x481f6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x481f70: 0x26030130  addiu       $v1, $s0, 0x130
    ctx->pc = 0x481f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x481f74: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x481f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x481f78: 0x26130124  addiu       $s3, $s0, 0x124
    ctx->pc = 0x481f78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x481f7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x481f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x481f80: 0x26080178  addiu       $t0, $s0, 0x178
    ctx->pc = 0x481f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    // 0x481f84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x481f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x481f88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x481f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x481f8c: 0x26020160  addiu       $v0, $s0, 0x160
    ctx->pc = 0x481f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x481f90: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x481f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x481f94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x481f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481f98: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x481f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x481f9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x481f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481fa0: 0x4601a241  sub.s       $f9, $f20, $f1
    ctx->pc = 0x481fa0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x481fa4: 0xc6030068  lwc1        $f3, 0x68($s0)
    ctx->pc = 0x481fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x481fa8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x481fa8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x481fac: 0xc605006c  lwc1        $f5, 0x6C($s0)
    ctx->pc = 0x481facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x481fb0: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x481fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481fb4: 0x46001907  neg.s       $f4, $f3
    ctx->pc = 0x481fb4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[3]);
    // 0x481fb8: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x481fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481fbc: 0x26120094  addiu       $s2, $s0, 0x94
    ctx->pc = 0x481fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x481fc0: 0xc60a007c  lwc1        $f10, 0x7C($s0)
    ctx->pc = 0x481fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x481fc4: 0x46024ac2  mul.s       $f11, $f9, $f2
    ctx->pc = 0x481fc4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x481fc8: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x481fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x481fcc: 0x4600a201  sub.s       $f8, $f20, $f0
    ctx->pc = 0x481fccu;
    ctx->f[8] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x481fd0: 0xe6010144  swc1        $f1, 0x144($s0)
    ctx->pc = 0x481fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x481fd4: 0x26270050  addiu       $a3, $s1, 0x50
    ctx->pc = 0x481fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x481fd8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x481fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x481fdc: 0x460b21c0  add.s       $f7, $f4, $f11
    ctx->pc = 0x481fdcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x481fe0: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x481fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x481fe4: 0x460b1980  add.s       $f6, $f3, $f11
    ctx->pc = 0x481fe4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x481fe8: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x481fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x481fec: 0x460242c2  mul.s       $f11, $f8, $f2
    ctx->pc = 0x481fecu;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x481ff0: 0xe6000174  swc1        $f0, 0x174($s0)
    ctx->pc = 0x481ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x481ff4: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x481ff4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x481ff8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x481ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x481ffc: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x481ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x482000: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x482000u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x482004: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x482004u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x482008: 0xe6060124  swc1        $f6, 0x124($s0)
    ctx->pc = 0x482008u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x48200c: 0xe6060148  swc1        $f6, 0x148($s0)
    ctx->pc = 0x48200cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x482010: 0x460a4ac2  mul.s       $f11, $f9, $f10
    ctx->pc = 0x482010u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x482014: 0xe607013c  swc1        $f7, 0x13C($s0)
    ctx->pc = 0x482014u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x482018: 0xe667000c  swc1        $f7, 0xC($s3)
    ctx->pc = 0x482018u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x48201c: 0xe6030178  swc1        $f3, 0x178($s0)
    ctx->pc = 0x48201cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
    // 0x482020: 0x460b0880  add.s       $f2, $f1, $f11
    ctx->pc = 0x482020u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x482024: 0xe6630030  swc1        $f3, 0x30($s3)
    ctx->pc = 0x482024u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x482028: 0x460b2800  add.s       $f0, $f5, $f11
    ctx->pc = 0x482028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x48202c: 0xe604016c  swc1        $f4, 0x16C($s0)
    ctx->pc = 0x48202cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x482030: 0x460a42c2  mul.s       $f11, $f8, $f10
    ctx->pc = 0x482030u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x482034: 0xe664003c  swc1        $f4, 0x3C($s3)
    ctx->pc = 0x482034u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x482038: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x482038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x48203c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x48203cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x482040: 0x460b2940  add.s       $f5, $f5, $f11
    ctx->pc = 0x482040u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x482044: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x482044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x482048: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x482048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x48204c: 0xe662001c  swc1        $f2, 0x1C($s3)
    ctx->pc = 0x48204cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x482050: 0xe4450004  swc1        $f5, 0x4($v0)
    ctx->pc = 0x482050u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x482054: 0xe6650034  swc1        $f5, 0x34($s3)
    ctx->pc = 0x482054u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x482058: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x482058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x48205c: 0xc120052  jal         func_480148
    ctx->pc = 0x48205Cu;
    SET_GPR_U32(ctx, 31, 0x482064u);
    ctx->pc = 0x482060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48205Cu;
    // 0x482060: 0xe661004c  swc1        $f1, 0x4C($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x480148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480148u, 0x48205Cu, 0x482064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482064u;
label_482064:
    // 0x482064: 0x6a220077  ldl         $v0, 0x77($s1)
    ctx->pc = 0x482064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x482068: 0x6e220070  ldr         $v0, 0x70($s1)
    ctx->pc = 0x482068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x48206c: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x48206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x482070: 0xb202009b  sdl         $v0, 0x9B($s0)
    ctx->pc = 0x482070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x482074: 0xb6020094  sdr         $v0, 0x94($s0)
    ctx->pc = 0x482074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x482078: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x482078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x48207c: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x48207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482080: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x482080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482084: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x482084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482088: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x482088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x48208c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x48208cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x482090: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x482090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x482094: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x482094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x482098: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x482098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48209c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x48209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4820a0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x4820a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4820a4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4820a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4820a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4820a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4820ac: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x4820acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x4820b0: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x4820b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x4820b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4820b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4820b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4820b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4820bc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4820bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4820c0: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x4820c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x4820c4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x4820c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x4820c8: 0xa2430011  sb          $v1, 0x11($s2)
    ctx->pc = 0x4820c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x4820cc: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x4820ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x4820d0: 0xa2440012  sb          $a0, 0x12($s2)
    ctx->pc = 0x4820d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x4820d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4820d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4820d8: 0xa2420010  sb          $v0, 0x10($s2)
    ctx->pc = 0x4820d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x4820dc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x4820dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4820e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4820e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4820e4: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x4820e4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x4820e8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4820e8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x4820ec: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x4820ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x4820f0: 0xe6440018  swc1        $f4, 0x18($s2)
    ctx->pc = 0x4820f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x4820f4: 0xe642001c  swc1        $f2, 0x1C($s2)
    ctx->pc = 0x4820f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x4820f8: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4820f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4820fc: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x4820fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x482100: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x482100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x482104: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x482104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x482108: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x482108u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x48210c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x48210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x482110: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x482110u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x482114: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x482114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x482118: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x482118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x48211c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x48211cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x482120: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x482120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x482124: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x482124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x482128: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x482128u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x48212c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x482130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x482130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x482134: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x482134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x482138: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x482138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x48213c: 0xa2440024  sb          $a0, 0x24($s2)
    ctx->pc = 0x48213cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x482140: 0xa2420025  sb          $v0, 0x25($s2)
    ctx->pc = 0x482140u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x482144: 0xa2430026  sb          $v1, 0x26($s2)
    ctx->pc = 0x482144u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x482148: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x482148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x48214c: 0xc667000c  lwc1        $f7, 0xC($s3)
    ctx->pc = 0x48214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x482150: 0xc662003c  lwc1        $f2, 0x3C($s3)
    ctx->pc = 0x482150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482154: 0xc6660010  lwc1        $f6, 0x10($s3)
    ctx->pc = 0x482154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x482158: 0xc6680040  lwc1        $f8, 0x40($s3)
    ctx->pc = 0x482158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x48215c: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x48215cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x482160: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x482160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x482164: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x482164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482168: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x482168u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x48216c: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x48216cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x482170: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x482170u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x482174: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x482174u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x482178: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x482178u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x48217c: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x48217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482180: 0xc664004c  lwc1        $f4, 0x4C($s3)
    ctx->pc = 0x482180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x482184: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x482184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x482188: 0xc6630050  lwc1        $f3, 0x50($s3)
    ctx->pc = 0x482188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48218c: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x48218cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x482190: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x482190u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x482194: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x482194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x482198: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x482198u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x48219c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x48219cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4821a0: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x4821a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x4821a4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x4821a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4821a8: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x4821a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x4821ac: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x4821acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4821b0: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x4821b0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x4821b4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x4821b4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x4821b8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x4821b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x4821bc: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x4821bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x4821c0: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x4821c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x4821c4: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x4821c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x4821c8: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x4821c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x4821cc: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x4821ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x4821d0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4821d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4821d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4821d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4821d8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4821d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4821dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4821dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4821e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4821e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4821e4: 0x46010204  c1          0x10204
    ctx->pc = 0x4821e4u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x4821e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4821e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4821ec: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x4821ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4821f0: 0x0  nop
    ctx->pc = 0x4821f0u;
    // NOP
    // 0x4821f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4821F4u;
    {
        const bool branch_taken_0x4821f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4821F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4821F4u;
        // 0x4821f8: 0xc6400028  lwc1        $f0, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4821f4) {
            ctx->pc = 0x482200u;
            goto label_482200;
        }
    }
    ctx->pc = 0x4821FCu;
    // 0x4821fc: 0x4608a203  div.s       $f8, $f20, $f8
    ctx->pc = 0x4821fcu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[20], ctx->f[8]); }
label_482200:
    // 0x482200: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x482200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482204: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x482204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482208: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x482208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x48220c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x48220cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x482210: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x482210u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x482214: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x482214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x482218: 0xe641002c  swc1        $f1, 0x2C($s2)
    ctx->pc = 0x482218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x48221c: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x48221cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x482220: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x482220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x482224: 0xc6640010  lwc1        $f4, 0x10($s3)
    ctx->pc = 0x482224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x482228: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x482228u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x48222c: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x48222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x482230: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x482230u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x482234: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x482234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x482238: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x482238u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x48223c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x48223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x482240: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x482240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x482244: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x482244u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x482248: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x482248u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x48224c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x48224cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x482250: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x482250u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x482254: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x482254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x482258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x482258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48225c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x482260: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x482260u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x482264: 0xa2440038  sb          $a0, 0x38($s2)
    ctx->pc = 0x482264u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x482268: 0xa2420039  sb          $v0, 0x39($s2)
    ctx->pc = 0x482268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x48226c: 0xa243003a  sb          $v1, 0x3A($s2)
    ctx->pc = 0x48226cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x482270: 0xe6430034  swc1        $f3, 0x34($s2)
    ctx->pc = 0x482270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x482274: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x482274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482278: 0xc660003c  lwc1        $f0, 0x3C($s3)
    ctx->pc = 0x482278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48227c: 0xc6640034  lwc1        $f4, 0x34($s3)
    ctx->pc = 0x48227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x482280: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x482280u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x482284: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x482284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482288: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x482288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x48228c: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x48228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482290: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x482290u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x482294: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x482294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x482298: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x482298u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x48229c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x48229cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4822a0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x4822a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4822a4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4822a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4822a8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4822a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4822ac: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x4822acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4822b0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x4822b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x4822b4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x4822b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4822b8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x4822b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4822bc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4822bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4822c0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x4822c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x4822c4: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x4822c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x4822c8: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x4822c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x4822cc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x4822ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x4822d0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4822d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4822d4: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x4822d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x4822d8: 0xe6420044  swc1        $f2, 0x44($s2)
    ctx->pc = 0x4822d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x4822dc: 0xe641003c  swc1        $f1, 0x3C($s2)
    ctx->pc = 0x4822dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x4822e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4822e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4822e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4822e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4822e8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4822e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4822ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4822ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4822f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4822f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4822f4: 0x46010204  c1          0x10204
    ctx->pc = 0x4822f4u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x4822f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4822f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4822fc: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x4822fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x482300: 0x0  nop
    ctx->pc = 0x482300u;
    // NOP
    // 0x482304: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x482304u;
    {
        const bool branch_taken_0x482304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x482308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482304u;
        // 0x482308: 0xc644003c  lwc1        $f4, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482304) {
            ctx->pc = 0x482318u;
            goto label_482318;
        }
    }
    ctx->pc = 0x48230Cu;
    // 0x48230c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x48230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x482310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x482310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x482314: 0x46080203  div.s       $f8, $f0, $f8
    ctx->pc = 0x482314u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
label_482318:
    // 0x482318: 0xc6450040  lwc1        $f5, 0x40($s2)
    ctx->pc = 0x482318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x48231c: 0xc6460044  lwc1        $f6, 0x44($s2)
    ctx->pc = 0x48231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x482320: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x482320u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x482324: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x482324u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x482328: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x482328u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x48232c: 0xe644003c  swc1        $f4, 0x3C($s2)
    ctx->pc = 0x48232cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x482330: 0xe6450040  swc1        $f5, 0x40($s2)
    ctx->pc = 0x482330u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x482334: 0xe6460044  swc1        $f6, 0x44($s2)
    ctx->pc = 0x482334u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x482338: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x482338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48233c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x48233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482340: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x482340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x482344: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x482344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482348: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x482348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x48234c: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x48234cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x482350: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x482350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x482354: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x482354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x482358: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x482358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x48235c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x48235cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x482360: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x482360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x482364: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x482364u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x482368: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x482368u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x48236c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48236cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x482370: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x482370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x482374: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x482374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x482378: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x482378u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x48237c: 0xa244004c  sb          $a0, 0x4C($s2)
    ctx->pc = 0x48237cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x482380: 0xa242004d  sb          $v0, 0x4D($s2)
    ctx->pc = 0x482380u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x482384: 0xa243004e  sb          $v1, 0x4E($s2)
    ctx->pc = 0x482384u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x482388: 0xe6410048  swc1        $f1, 0x48($s2)
    ctx->pc = 0x482388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x48238c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x48238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482390: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x482390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482394: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x482394u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x482398: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x482398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48239c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x48239cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4823a0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4823a0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x4823a4: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x4823a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x4823a8: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x4823a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x4823ac: 0xe6420058  swc1        $f2, 0x58($s2)
    ctx->pc = 0x4823acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x4823b0: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x4823b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4823b4: 0xc6670028  lwc1        $f7, 0x28($s3)
    ctx->pc = 0x4823b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4823b8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x4823b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4823bc: 0xc668002c  lwc1        $f8, 0x2C($s3)
    ctx->pc = 0x4823bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x4823c0: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x4823c0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x4823c4: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x4823c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x4823c8: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x4823c8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x4823cc: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4823ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x4823d0: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x4823d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x4823d4: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x4823d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x4823d8: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x4823d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x4823dc: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x4823dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x4823e0: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x4823e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x4823e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4823e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4823e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4823e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4823ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4823ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4823f0: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x4823f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x4823f4: 0xa2440060  sb          $a0, 0x60($s2)
    ctx->pc = 0x4823f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x4823f8: 0xa2420061  sb          $v0, 0x61($s2)
    ctx->pc = 0x4823f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x4823fc: 0xa2430062  sb          $v1, 0x62($s2)
    ctx->pc = 0x4823fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x482400: 0xe643005c  swc1        $f3, 0x5C($s2)
    ctx->pc = 0x482400u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x482404: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x482404u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x482408: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x482408u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x48240c: 0xe6440064  swc1        $f4, 0x64($s2)
    ctx->pc = 0x48240cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x482410: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x482410u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x482414: 0xe6450068  swc1        $f5, 0x68($s2)
    ctx->pc = 0x482414u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x482418: 0xe646006c  swc1        $f6, 0x6C($s2)
    ctx->pc = 0x482418u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x48241c: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x48241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482420: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x482420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482424: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x482424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x482428: 0xc662002c  lwc1        $f2, 0x2C($s3)
    ctx->pc = 0x482428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48242c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x48242cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x482430: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x482430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x482434: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x482434u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x482438: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x482438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x48243c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x48243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x482440: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x482440u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x482444: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x482444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x482448: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x482448u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x48244c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x48244cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x482450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x482450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x482454: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x482454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x482458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x482458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48245c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x48245cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x482460: 0xa2420076  sb          $v0, 0x76($s2)
    ctx->pc = 0x482460u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x482464: 0xa2440074  sb          $a0, 0x74($s2)
    ctx->pc = 0x482464u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x482468: 0xa2430075  sb          $v1, 0x75($s2)
    ctx->pc = 0x482468u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x48246c: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x48246cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x482470: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x482470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x482474: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x482474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x482478: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x482478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48247c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48247cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x482480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482484: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x482484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x482488: 0x3e00008  jr          $ra
    ctx->pc = 0x482488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482488u;
        // 0x48248c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482490u;
}
