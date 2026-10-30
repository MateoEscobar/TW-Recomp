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

// Function: sub_004F2890
// Address: 0x4f2890 - 0x4f2898
void sub_004F2890_0x4f2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2890_0x4f2890");
#endif

    ctx->pc = 0x4f2890u;

    // 0x4f2890: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2890u;
        // 0x4f2894: 0xac8512f8  sw          $a1, 0x12F8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4856), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2898u;
}
