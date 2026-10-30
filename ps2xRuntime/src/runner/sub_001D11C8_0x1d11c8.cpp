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

// Function: sub_001D11C8
// Address: 0x1d11c8 - 0x1d11f8
void sub_001D11C8_0x1d11c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D11C8_0x1d11c8");
#endif

    ctx->pc = 0x1d11c8u;

    // 0x1d11c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d11c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d11cc: 0x0  nop
    ctx->pc = 0x1d11ccu;
    // NOP
    // 0x1d11d0: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1d11d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d11d4: 0x0  nop
    ctx->pc = 0x1d11d4u;
    // NOP
    // 0x1d11d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D11D8u;
    {
        const bool branch_taken_0x1d11d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d11d8) {
            ctx->pc = 0x1D11F0u;
            goto label_1d11f0;
        }
    }
    ctx->pc = 0x1D11E0u;
    // 0x1d11e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d11e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d11e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d11e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d11e8: 0x0  nop
    ctx->pc = 0x1d11e8u;
    // NOP
    // 0x1d11ec: 0x46006029  min.s       $f0, $f12, $f0
    ctx->pc = 0x1d11ecu;
    ctx->f[0] = std::min(ctx->f[12], ctx->f[0]);
label_1d11f0:
    // 0x1d11f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D11F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11F0u;
        // 0x1d11f4: 0xe4800050  swc1        $f0, 0x50($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D11F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D11F8u;
}
