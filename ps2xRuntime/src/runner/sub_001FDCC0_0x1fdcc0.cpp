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

// Function: sub_001FDCC0
// Address: 0x1fdcc0 - 0x1fdcd0
void sub_001FDCC0_0x1fdcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDCC0_0x1fdcc0");
#endif

    ctx->pc = 0x1fdcc0u;

    // 0x1fdcc0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1fdcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCC4u;
        // 0x1fdcc8: 0xc440f508  lwc1        $f0, -0xAF8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDCCCu;
    // 0x1fdccc: 0x0  nop
    ctx->pc = 0x1fdcccu;
    // NOP
    ctx->pc = 0x1fdcd0u;
}
