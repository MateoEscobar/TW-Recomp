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

// Function: sub_0042F000
// Address: 0x42f000 - 0x42f020
void sub_0042F000_0x42f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F000_0x42f000");
#endif

    ctx->pc = 0x42f000u;

    // 0x42f000: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42F000u;
    {
        const bool branch_taken_0x42f000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F000u;
        // 0x42f004: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f000) {
            ctx->pc = 0x42F014u;
            goto label_42f014;
        }
    }
    ctx->pc = 0x42F008u;
    // 0x42f008: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42f008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x42f00c: 0x2442c2b0  addiu       $v0, $v0, -0x3D50
    ctx->pc = 0x42f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
    // 0x42f010: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x42f010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_42f014:
    // 0x42f014: 0x3e00008  jr          $ra
    ctx->pc = 0x42F014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F01Cu;
    // 0x42f01c: 0x0  nop
    ctx->pc = 0x42f01cu;
    // NOP
    ctx->pc = 0x42f020u;
}
