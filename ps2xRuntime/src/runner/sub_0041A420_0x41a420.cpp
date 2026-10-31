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

// Function: sub_0041A420
// Address: 0x41a420 - 0x41a430
void sub_0041A420_0x41a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A420_0x41a420");
#endif

    switch (ctx->pc) {
        case 0x41a424u: goto label_41a424;
        default: break;
    }

    ctx->pc = 0x41a420u;

    // 0x41a420: 0xa04556de  sb          $a1, 0x56DE($v0)
    ctx->pc = 0x41a420u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22238), (uint8_t)GPR_U32(ctx, 5));
label_41a424:
    // 0x41a424: 0x3e00008  jr          $ra
    ctx->pc = 0x41A424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A424u;
        // 0x41a428: 0xa08556de  sb          $a1, 0x56DE($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 22238), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A42Cu;
    // 0x41a42c: 0x0  nop
    ctx->pc = 0x41a42cu;
    // NOP
    ctx->pc = 0x41a430u;
}
