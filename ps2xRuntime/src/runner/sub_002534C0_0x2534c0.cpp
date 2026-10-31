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

// Function: sub_002534C0
// Address: 0x2534c0 - 0x2534d0
void sub_002534C0_0x2534c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002534C0_0x2534c0");
#endif

    ctx->pc = 0x2534c0u;

    // 0x2534c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2534c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2534c4: 0xa4801770  sh          $zero, 0x1770($a0)
    ctx->pc = 0x2534c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6000), (uint16_t)GPR_U32(ctx, 0));
    // 0x2534c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2534C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2534CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534C8u;
        // 0x2534cc: 0xa4821772  sh          $v0, 0x1772($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6002), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2534C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2534D0u;
}
