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

// Function: sub_00466B70
// Address: 0x466b70 - 0x466b80
void sub_00466B70_0x466b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466B70_0x466b70");
#endif

    ctx->pc = 0x466b70u;

    // 0x466b70: 0xaf8484ac  sw          $a0, -0x7B54($gp)
    ctx->pc = 0x466b70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935724), GPR_U32(ctx, 4));
    // 0x466b74: 0x3e00008  jr          $ra
    ctx->pc = 0x466B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466B74u;
        // 0x466b78: 0xaf8584b0  sw          $a1, -0x7B50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466B7Cu;
    // 0x466b7c: 0x0  nop
    ctx->pc = 0x466b7cu;
    // NOP
    ctx->pc = 0x466b80u;
}
