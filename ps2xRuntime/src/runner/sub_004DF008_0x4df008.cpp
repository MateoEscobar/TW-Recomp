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

// Function: sub_004DF008
// Address: 0x4df008 - 0x4df020
void sub_004DF008_0x4df008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF008_0x4df008");
#endif

    ctx->pc = 0x4df008u;

    // 0x4df008: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4df008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4df00c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DF00Cu;
    {
        const bool branch_taken_0x4df00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF00Cu;
        // 0x4df010: 0xac850024  sw          $a1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df00c) {
            ctx->pc = 0x4DF018u;
            goto label_4df018;
        }
    }
    ctx->pc = 0x4DF014u;
    // 0x4df014: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x4df014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
label_4df018:
    // 0x4df018: 0x3e00008  jr          $ra
    ctx->pc = 0x4DF018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF020u;
}
