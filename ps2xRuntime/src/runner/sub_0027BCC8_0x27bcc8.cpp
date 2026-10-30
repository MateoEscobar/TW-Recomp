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

// Function: sub_0027BCC8
// Address: 0x27bcc8 - 0x27bcd8
void sub_0027BCC8_0x27bcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BCC8_0x27bcc8");
#endif

    ctx->pc = 0x27bcc8u;

    // 0x27bcc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27bccc: 0x3e00008  jr          $ra
    ctx->pc = 0x27BCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCCCu;
        // 0x27bcd0: 0xac40097c  sw          $zero, 0x97C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BCD4u;
    // 0x27bcd4: 0x0  nop
    ctx->pc = 0x27bcd4u;
    // NOP
    ctx->pc = 0x27bcd8u;
}
