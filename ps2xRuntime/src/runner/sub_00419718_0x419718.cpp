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

// Function: sub_00419718
// Address: 0x419718 - 0x419728
void sub_00419718_0x419718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419718_0x419718");
#endif

    ctx->pc = 0x419718u;

    // 0x419718: 0x8c820268  lw          $v0, 0x268($a0)
    ctx->pc = 0x419718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x41971c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x41971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x419720: 0x3e00008  jr          $ra
    ctx->pc = 0x419720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419720u;
        // 0x419724: 0xac820268  sw          $v0, 0x268($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419728u;
}
