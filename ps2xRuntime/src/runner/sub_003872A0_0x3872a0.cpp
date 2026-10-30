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

// Function: sub_003872A0
// Address: 0x3872a0 - 0x387368
void sub_003872A0_0x3872a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003872A0_0x3872a0");
#endif

    ctx->pc = 0x3872a0u;

    // 0x3872a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3872a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3872a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3872a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3872a8: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x3872a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3872ac: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x3872acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3872b0: 0xc4a50020  lwc1        $f5, 0x20($a1)
    ctx->pc = 0x3872b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3872b4: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x3872b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3872b8: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x3872b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3872bc: 0xe4870010  swc1        $f7, 0x10($a0)
    ctx->pc = 0x3872bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3872c0: 0xc4a90014  lwc1        $f9, 0x14($a1)
    ctx->pc = 0x3872c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3872c4: 0xe4890014  swc1        $f9, 0x14($a0)
    ctx->pc = 0x3872c4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3872c8: 0xc4ab0024  lwc1        $f11, 0x24($a1)
    ctx->pc = 0x3872c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3872cc: 0xe48b0018  swc1        $f11, 0x18($a0)
    ctx->pc = 0x3872ccu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3872d0: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x3872d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3872d4: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x3872d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3872d8: 0xc4a80018  lwc1        $f8, 0x18($a1)
    ctx->pc = 0x3872d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3872dc: 0xe4880024  swc1        $f8, 0x24($a0)
    ctx->pc = 0x3872dcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x3872e0: 0xc4aa0028  lwc1        $f10, 0x28($a1)
    ctx->pc = 0x3872e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3872e4: 0xe48a0028  swc1        $f10, 0x28($a0)
    ctx->pc = 0x3872e4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x3872e8: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x3872e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3872ec: 0xc4a60034  lwc1        $f6, 0x34($a1)
    ctx->pc = 0x3872ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3872f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3872f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3872f4: 0xc4a20038  lwc1        $f2, 0x38($a1)
    ctx->pc = 0x3872f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3872f8: 0x460639c2  mul.s       $f7, $f7, $f6
    ctx->pc = 0x3872f8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x3872fc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x3872fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x387300: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x387300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x387304: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x387304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x387308: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x387308u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x38730c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x38730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x387310: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x387310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387314: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x387314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x387318: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x387318u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x38731c: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x38731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x387320: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x387320u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x387324: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x387324u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x387328: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x387328u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x38732c: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x38732cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x387330: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x387330u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x387334: 0xe4830034  swc1        $f3, 0x34($a0)
    ctx->pc = 0x387334u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x387338: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x387338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38733c: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x38733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x387340: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x387340u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x387344: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x387344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387348: 0x46025ac2  mul.s       $f11, $f11, $f2
    ctx->pc = 0x387348u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x38734c: 0x46015282  mul.s       $f10, $f10, $f1
    ctx->pc = 0x38734cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x387350: 0x460b2940  add.s       $f5, $f5, $f11
    ctx->pc = 0x387350u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x387354: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x387354u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x387358: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x387358u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x38735c: 0x3e00008  jr          $ra
    ctx->pc = 0x38735Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38735Cu;
        // 0x387360: 0xe4850038  swc1        $f5, 0x38($a0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38735Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387364u;
    // 0x387364: 0x0  nop
    ctx->pc = 0x387364u;
    // NOP
    ctx->pc = 0x387368u;
}
