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

// Function: sub_004DD048
// Address: 0x4dd048 - 0x4dd058
void sub_004DD048_0x4dd048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD048_0x4dd048");
#endif

    ctx->pc = 0x4dd048u;

    // 0x4dd048: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4dd048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4dd04c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DD04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD04Cu;
        // 0x4dd050: 0x2442db68  addiu       $v0, $v0, -0x2498 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD054u;
    // 0x4dd054: 0x0  nop
    ctx->pc = 0x4dd054u;
    // NOP
    ctx->pc = 0x4dd058u;
}
