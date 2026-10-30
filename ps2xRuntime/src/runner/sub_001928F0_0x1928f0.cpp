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

// Function: sub_001928F0
// Address: 0x1928f0 - 0x192908
void sub_001928F0_0x1928f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001928F0_0x1928f0");
#endif

    ctx->pc = 0x1928f0u;

    // 0x1928f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1928f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1928f4: 0x8c43cd98  lw          $v1, -0x3268($v0)
    ctx->pc = 0x1928f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CD98u));
    // 0x1928f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1928f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1928fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1928FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928FCu;
        // 0x192900: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1928FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192904u;
    // 0x192904: 0x0  nop
    ctx->pc = 0x192904u;
    // NOP
    ctx->pc = 0x192908u;
}
