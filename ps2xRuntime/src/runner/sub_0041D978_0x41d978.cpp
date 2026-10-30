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

// Function: sub_0041D978
// Address: 0x41d978 - 0x41d988
void sub_0041D978_0x41d978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D978_0x41d978");
#endif

    ctx->pc = 0x41d978u;

    // 0x41d978: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d97c: 0x3e00008  jr          $ra
    ctx->pc = 0x41D97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D97Cu;
        // 0x41d980: 0xa44448bc  sh          $a0, 0x48BC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 18620), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D984u;
    // 0x41d984: 0x0  nop
    ctx->pc = 0x41d984u;
    // NOP
    ctx->pc = 0x41d988u;
}
