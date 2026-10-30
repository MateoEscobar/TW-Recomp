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

// Function: sub_002911E8
// Address: 0x2911e8 - 0x2911f8
void sub_002911E8_0x2911e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002911E8_0x2911e8");
#endif

    ctx->pc = 0x2911e8u;

    // 0x2911e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2911e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2911ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2911ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2911F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911ECu;
        // 0x2911f0: 0xa0860298  sb          $a2, 0x298($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 664), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2911ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2911F4u;
    // 0x2911f4: 0x0  nop
    ctx->pc = 0x2911f4u;
    // NOP
    ctx->pc = 0x2911f8u;
}
