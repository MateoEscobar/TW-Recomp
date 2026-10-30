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

// Function: sub_0015A270
// Address: 0x15a270 - 0x15a280
void sub_0015A270_0x15a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A270_0x15a270");
#endif

    ctx->pc = 0x15a270u;

    // 0x15a270: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15a270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x15a274: 0x3e00008  jr          $ra
    ctx->pc = 0x15A274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A274u;
        // 0x15a278: 0xac445d80  sw          $a0, 0x5D80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23936), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A27Cu;
    // 0x15a27c: 0x0  nop
    ctx->pc = 0x15a27cu;
    // NOP
    ctx->pc = 0x15a280u;
}
