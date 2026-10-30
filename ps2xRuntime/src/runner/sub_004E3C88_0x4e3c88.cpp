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

// Function: sub_004E3C88
// Address: 0x4e3c88 - 0x4e3c90
void sub_004E3C88_0x4e3c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3C88_0x4e3c88");
#endif

    ctx->pc = 0x4e3c88u;

    // 0x4e3c88: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3C88u;
        // 0x4e3c8c: 0xac850090  sw          $a1, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3C90u;
}
