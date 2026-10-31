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

// Function: sub_004D7C60
// Address: 0x4d7c60 - 0x4d7ce8
void sub_004D7C60_0x4d7c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7C60_0x4d7c60");
#endif

    ctx->pc = 0x4d7c60u;

    // 0x4d7c60: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x4d7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d7c64: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4d7c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7c68: 0xc4870014  lwc1        $f7, 0x14($a0)
    ctx->pc = 0x4d7c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4d7c6c: 0x46020a01  sub.s       $f8, $f1, $f2
    ctx->pc = 0x4d7c6cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4d7c70: 0xc4850018  lwc1        $f5, 0x18($a0)
    ctx->pc = 0x4d7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4d7c74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4d7c74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4d7c78: 0xc484001c  lwc1        $f4, 0x1C($a0)
    ctx->pc = 0x4d7c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d7c7c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4d7c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7c80: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x4d7c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d7c84: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x4d7c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d7c88: 0x46070181  sub.s       $f6, $f0, $f7
    ctx->pc = 0x4d7c88u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x4d7c8c: 0x46051ac1  sub.s       $f11, $f3, $f5
    ctx->pc = 0x4d7c8cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x4d7c90: 0x46041281  sub.s       $f10, $f2, $f4
    ctx->pc = 0x4d7c90u;
    ctx->f[10] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x4d7c94: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x4d7c94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x4d7c98: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x4d7c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x4d7c9c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x4d7c9cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x4d7ca0: 0x460a4101  sub.s       $f4, $f8, $f10
    ctx->pc = 0x4d7ca0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[8], ctx->f[10]);
    // 0x4d7ca4: 0x460201c1  sub.s       $f7, $f0, $f2
    ctx->pc = 0x4d7ca4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4d7ca8: 0x46030941  sub.s       $f5, $f1, $f3
    ctx->pc = 0x4d7ca8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4d7cac: 0x460b3240  add.s       $f9, $f6, $f11
    ctx->pc = 0x4d7cacu;
    ctx->f[9] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
    // 0x4d7cb0: 0xe4840018  swc1        $f4, 0x18($a0)
    ctx->pc = 0x4d7cb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x4d7cb4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4d7cb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4d7cb8: 0xe4870014  swc1        $f7, 0x14($a0)
    ctx->pc = 0x4d7cb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x4d7cbc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4d7cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4d7cc0: 0xe4850010  swc1        $f5, 0x10($a0)
    ctx->pc = 0x4d7cc0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x4d7cc4: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x4d7cc4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x4d7cc8: 0xe489001c  swc1        $f9, 0x1C($a0)
    ctx->pc = 0x4d7cc8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x4d7ccc: 0x460b3181  sub.s       $f6, $f6, $f11
    ctx->pc = 0x4d7cccu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[11]);
    // 0x4d7cd0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4d7cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d7cd4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4d7cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d7cd8: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x4d7cd8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x4d7cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7CDCu;
        // 0x4d7ce0: 0xe486000c  swc1        $f6, 0xC($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D7CE4u;
    // 0x4d7ce4: 0x0  nop
    ctx->pc = 0x4d7ce4u;
    // NOP
    ctx->pc = 0x4d7ce8u;
}
