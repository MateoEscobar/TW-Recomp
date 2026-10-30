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

// Function: sub_001928C0
// Address: 0x1928c0 - 0x1928d8
void sub_001928C0_0x1928c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001928C0_0x1928c0");
#endif

    ctx->pc = 0x1928c0u;

    // 0x1928c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1928c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1928c4: 0x8c43cd98  lw          $v1, -0x3268($v0)
    ctx->pc = 0x1928c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CD98u));
    // 0x1928c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1928c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1928cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1928CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1928D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928CCu;
        // 0x1928d0: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1928CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1928D4u;
    // 0x1928d4: 0x0  nop
    ctx->pc = 0x1928d4u;
    // NOP
    ctx->pc = 0x1928d8u;
}
