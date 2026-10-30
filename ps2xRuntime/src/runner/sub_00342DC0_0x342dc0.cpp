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

// Function: sub_00342DC0
// Address: 0x342dc0 - 0x342df8
void sub_00342DC0_0x342dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342DC0_0x342dc0");
#endif

    ctx->pc = 0x342dc0u;

    // 0x342dc0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x342dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x342dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x342dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342dc8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x342dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x342dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x342dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x342dd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x342dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342dd4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x342dd4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x342dd8: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x342dd8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x342ddc: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x342ddcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x342de0: 0xe48c0040  swc1        $f12, 0x40($a0)
    ctx->pc = 0x342de0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x342de4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x342de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x342de8: 0xe44d0004  swc1        $f13, 0x4($v0)
    ctx->pc = 0x342de8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x342dec: 0x3e00008  jr          $ra
    ctx->pc = 0x342DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DECu;
        // 0x342df0: 0xe44e0008  swc1        $f14, 0x8($v0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342DF4u;
    // 0x342df4: 0x0  nop
    ctx->pc = 0x342df4u;
    // NOP
    ctx->pc = 0x342df8u;
}
