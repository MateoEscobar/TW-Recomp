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

// Function: sub_0041D0D0
// Address: 0x41d0d0 - 0x41d0e8
void sub_0041D0D0_0x41d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D0D0_0x41d0d0");
#endif

    ctx->pc = 0x41d0d0u;

    // 0x41d0d0: 0x28a2000f  slti        $v0, $a1, 0xF
    ctx->pc = 0x41d0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x41d0d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x41D0D4u;
    {
        const bool branch_taken_0x41d0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D0D4u;
        // 0x41d0d8: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d0d4) {
            ctx->pc = 0x41D0E0u;
            goto label_41d0e0;
        }
    }
    ctx->pc = 0x41D0DCu;
    // 0x41d0dc: 0xa046032b  sb          $a2, 0x32B($v0)
    ctx->pc = 0x41d0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 811), (uint8_t)GPR_U32(ctx, 6));
label_41d0e0:
    // 0x41d0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x41D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D0E8u;
}
