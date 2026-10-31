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

// Function: sub_001A3338
// Address: 0x1a3338 - 0x1a3360
void sub_001A3338_0x1a3338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3338_0x1a3338");
#endif

    ctx->pc = 0x1a3338u;

    // 0x1a3338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a333c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a333cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3340: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a3340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3344: 0x460c0329  min.s       $f12, $f0, $f12
    ctx->pc = 0x1a3344u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[12]);
    // 0x1a3348: 0x46016328  max.s       $f12, $f12, $f1
    ctx->pc = 0x1a3348u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[1]);
    // 0x1a334c: 0x46016328  max.s       $f12, $f12, $f1
    ctx->pc = 0x1a334cu;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[1]);
    // 0x1a3350: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x1a3350u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x1a3354: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3354u;
        // 0x1a3358: 0xe48c0188  swc1        $f12, 0x188($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A335Cu;
    // 0x1a335c: 0x0  nop
    ctx->pc = 0x1a335cu;
    // NOP
    ctx->pc = 0x1a3360u;
}
