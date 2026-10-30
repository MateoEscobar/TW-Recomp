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

// Function: sub_004E4C68
// Address: 0x4e4c68 - 0x4e4c78
void sub_004E4C68_0x4e4c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C68_0x4e4c68");
#endif

    ctx->pc = 0x4e4c68u;

    // 0x4e4c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e4c6c: 0xa08501b1  sb          $a1, 0x1B1($a0)
    ctx->pc = 0x4e4c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 433), (uint8_t)GPR_U32(ctx, 5));
    // 0x4e4c70: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4C70u;
        // 0x4e4c74: 0xac8201b4  sw          $v0, 0x1B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4C78u;
}
