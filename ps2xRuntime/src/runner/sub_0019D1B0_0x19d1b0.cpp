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

// Function: sub_0019D1B0
// Address: 0x19d1b0 - 0x19d1e0
void sub_0019D1B0_0x19d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D1B0_0x19d1b0");
#endif

    ctx->pc = 0x19d1b0u;

    // 0x19d1b0: 0xc48032fc  lwc1        $f0, 0x32FC($a0)
    ctx->pc = 0x19d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 13052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d1b4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19d1b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d1b8: 0x0  nop
    ctx->pc = 0x19d1b8u;
    // NOP
    // 0x19d1bc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x19D1BCu;
    {
        const bool branch_taken_0x19d1bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d1bc) {
            ctx->pc = 0x19D1D8u;
            goto label_19d1d8;
        }
    }
    ctx->pc = 0x19D1C4u;
    // 0x19d1c4: 0xc4803300  lwc1        $f0, 0x3300($a0)
    ctx->pc = 0x19d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 13056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d1c8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x19d1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d1cc: 0x0  nop
    ctx->pc = 0x19d1ccu;
    // NOP
    // 0x19d1d0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19D1D0u;
    {
        const bool branch_taken_0x19d1d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d1d0) {
            ctx->pc = 0x19D1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D1D0u;
            // 0x19d1d4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D1D8u;
            goto label_19d1d8;
        }
    }
    ctx->pc = 0x19D1D8u;
label_19d1d8:
    // 0x19d1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D1E0u;
}
