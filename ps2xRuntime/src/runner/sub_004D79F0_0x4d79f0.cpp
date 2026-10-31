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

// Function: sub_004D79F0
// Address: 0x4d79f0 - 0x4d7a78
void sub_004D79F0_0x4d79f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D79F0_0x4d79f0");
#endif

    ctx->pc = 0x4d79f0u;

    // 0x4d79f0: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x4d79f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d79f4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4d79f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d79f8: 0xc4870014  lwc1        $f7, 0x14($a0)
    ctx->pc = 0x4d79f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d79fc: 0x46020a01  sub.s       $f8, $f1, $f2
    ctx->pc = 0x4d79fcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4d7a00: 0xc4850018  lwc1        $f5, 0x18($a0)
    ctx->pc = 0x4d7a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d7a04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4d7a04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4d7a08: 0xc484001c  lwc1        $f4, 0x1C($a0)
    ctx->pc = 0x4d7a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d7a0c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4d7a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7a10: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x4d7a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d7a14: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x4d7a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d7a18: 0x46070181  sub.s       $f6, $f0, $f7
    ctx->pc = 0x4d7a18u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x4d7a1c: 0x46051ac1  sub.s       $f11, $f3, $f5
    ctx->pc = 0x4d7a1cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x4d7a20: 0x46041281  sub.s       $f10, $f2, $f4
    ctx->pc = 0x4d7a20u;
    ctx->f[10] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x4d7a24: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x4d7a24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x4d7a28: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4d7a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4d7a2c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x4d7a2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x4d7a30: 0x460a4100  add.s       $f4, $f8, $f10
    ctx->pc = 0x4d7a30u;
    ctx->f[4] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x4d7a34: 0x460201c1  sub.s       $f7, $f0, $f2
    ctx->pc = 0x4d7a34u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4d7a38: 0x46030941  sub.s       $f5, $f1, $f3
    ctx->pc = 0x4d7a38u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4d7a3c: 0x460b3241  sub.s       $f9, $f6, $f11
    ctx->pc = 0x4d7a3cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[6], ctx->f[11]);
    // 0x4d7a40: 0xe4840018  swc1        $f4, 0x18($a0)
    ctx->pc = 0x4d7a40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d7a44: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4d7a44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4d7a48: 0xe4870014  swc1        $f7, 0x14($a0)
    ctx->pc = 0x4d7a48u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4d7a4c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4d7a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4d7a50: 0xe4850010  swc1        $f5, 0x10($a0)
    ctx->pc = 0x4d7a50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4d7a54: 0x460a4201  sub.s       $f8, $f8, $f10
    ctx->pc = 0x4d7a54u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[10]);
    // 0x4d7a58: 0xe489001c  swc1        $f9, 0x1C($a0)
    ctx->pc = 0x4d7a58u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d7a5c: 0x460b3180  add.s       $f6, $f6, $f11
    ctx->pc = 0x4d7a5cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
    // 0x4d7a60: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4d7a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d7a64: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4d7a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d7a68: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x4d7a68u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d7a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7A6Cu;
        // 0x4d7a70: 0xe486000c  swc1        $f6, 0xC($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7A74u;
    // 0x4d7a74: 0x0  nop
    ctx->pc = 0x4d7a74u;
    // NOP
    ctx->pc = 0x4d7a78u;
}
