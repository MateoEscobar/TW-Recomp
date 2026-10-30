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

// Function: sub_0041FF58
// Address: 0x41ff58 - 0x41ff68
void sub_0041FF58_0x41ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FF58_0x41ff58");
#endif

    ctx->pc = 0x41ff58u;

    // 0x41ff58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ff5c: 0x3e00008  jr          $ra
    ctx->pc = 0x41FF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF5Cu;
        // 0x41ff60: 0xac82018c  sw          $v0, 0x18C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FF64u;
    // 0x41ff64: 0x0  nop
    ctx->pc = 0x41ff64u;
    // NOP
    ctx->pc = 0x41ff68u;
}
