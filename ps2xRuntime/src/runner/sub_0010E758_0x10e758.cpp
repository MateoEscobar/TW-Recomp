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

// Function: sub_0010E758
// Address: 0x10e758 - 0x10e798
void sub_0010E758_0x10e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E758_0x10e758");
#endif

    ctx->pc = 0x10e758u;

    // 0x10e758: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e75c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e760: 0x0  nop
    ctx->pc = 0x10e760u;
    // NOP
    // 0x10e764: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x10e764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e768: 0x0  nop
    ctx->pc = 0x10e768u;
    // NOP
    // 0x10e76c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10E76Cu;
    {
        const bool branch_taken_0x10e76c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e76c) {
            ctx->pc = 0x10E770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E76Cu;
            // 0x10e770: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E774u;
            goto label_10e774;
        }
    }
    ctx->pc = 0x10E774u;
label_10e774:
    // 0x10e774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e778: 0x0  nop
    ctx->pc = 0x10e778u;
    // NOP
    // 0x10e77c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x10e77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e780: 0x0  nop
    ctx->pc = 0x10e780u;
    // NOP
    // 0x10e784: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10E784u;
    {
        const bool branch_taken_0x10e784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e784) {
            ctx->pc = 0x10E788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E784u;
            // 0x10e788: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E78Cu;
            goto label_10e78c;
        }
    }
    ctx->pc = 0x10E78Cu;
label_10e78c:
    // 0x10e78c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E78Cu;
        // 0x10e790: 0xe48c0060  swc1        $f12, 0x60($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E794u;
    // 0x10e794: 0x0  nop
    ctx->pc = 0x10e794u;
    // NOP
    ctx->pc = 0x10e798u;
}
