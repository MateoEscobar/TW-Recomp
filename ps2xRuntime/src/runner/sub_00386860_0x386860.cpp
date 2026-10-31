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

// Function: sub_00386860
// Address: 0x386860 - 0x386898
void sub_00386860_0x386860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386860_0x386860");
#endif

    ctx->pc = 0x386860u;

    // 0x386860: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x386860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x386864: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x386864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x386868: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x386868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38686c: 0x0  nop
    ctx->pc = 0x38686cu;
    // NOP
    // 0x386870: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x386870u;
    {
        const bool branch_taken_0x386870 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x386874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386870u;
        // 0x386874: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386870) {
            ctx->pc = 0x386890u;
            goto label_386890;
        }
    }
    ctx->pc = 0x386878u;
    // 0x386878: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x386878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38687c: 0x0  nop
    ctx->pc = 0x38687cu;
    // NOP
    // 0x386880: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x386880u;
    {
        const bool branch_taken_0x386880 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x386884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386880u;
        // 0x386884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386880) {
            ctx->pc = 0x386890u;
            goto label_386890;
        }
    }
    ctx->pc = 0x386888u;
    // 0x386888: 0x3e00008  jr          $ra
    ctx->pc = 0x386888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386888u;
        // 0x38688c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386890u;
label_386890:
    // 0x386890: 0x3e00008  jr          $ra
    ctx->pc = 0x386890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386898u;
}
