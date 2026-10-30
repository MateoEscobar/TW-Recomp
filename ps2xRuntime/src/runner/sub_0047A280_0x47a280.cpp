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

// Function: sub_0047A280
// Address: 0x47a280 - 0x47a290
void sub_0047A280_0x47a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A280_0x47a280");
#endif

    ctx->pc = 0x47a280u;

    // 0x47a280: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x47a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x47a284: 0x3e00008  jr          $ra
    ctx->pc = 0x47A284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A284u;
        // 0x47a288: 0x2442e880  addiu       $v0, $v0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A28Cu;
    // 0x47a28c: 0x0  nop
    ctx->pc = 0x47a28cu;
    // NOP
    ctx->pc = 0x47a290u;
}
