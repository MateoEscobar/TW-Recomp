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

// Function: sub_004EEC28
// Address: 0x4eec28 - 0x4eec38
void sub_004EEC28_0x4eec28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEC28_0x4eec28");
#endif

    ctx->pc = 0x4eec28u;

    // 0x4eec28: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eec28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eec2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEC2Cu;
        // 0x4eec30: 0x24426610  addiu       $v0, $v0, 0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEC34u;
    // 0x4eec34: 0x0  nop
    ctx->pc = 0x4eec34u;
    // NOP
    ctx->pc = 0x4eec38u;
}
