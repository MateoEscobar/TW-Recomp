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

// Function: sub_003A3398
// Address: 0x3a3398 - 0x3a33b0
void sub_003A3398_0x3a3398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3398_0x3a3398");
#endif

    ctx->pc = 0x3a3398u;

    // 0x3a3398: 0x8c820870  lw          $v0, 0x870($a0)
    ctx->pc = 0x3a3398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2160)));
    // 0x3a339c: 0xaca20068  sw          $v0, 0x68($a1)
    ctx->pc = 0x3a339cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 2));
    // 0x3a33a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A33A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A33A0u;
        // 0x3a33a4: 0xac850870  sw          $a1, 0x870($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A33A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A33A8u;
    // 0x3a33a8: 0x0  nop
    ctx->pc = 0x3a33a8u;
    // NOP
    // 0x3a33ac: 0x0  nop
    ctx->pc = 0x3a33acu;
    // NOP
    ctx->pc = 0x3a33b0u;
}
