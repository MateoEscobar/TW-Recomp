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

// Function: sub_0042FC00
// Address: 0x42fc00 - 0x42fc20
void sub_0042FC00_0x42fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FC00_0x42fc00");
#endif

    ctx->pc = 0x42fc00u;

    // 0x42fc00: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42FC00u;
    {
        const bool branch_taken_0x42fc00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FC00u;
        // 0x42fc04: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fc00) {
            ctx->pc = 0x42FC14u;
            goto label_42fc14;
        }
    }
    ctx->pc = 0x42FC08u;
    // 0x42fc08: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x42fc0c: 0x2442c418  addiu       $v0, $v0, -0x3BE8
    ctx->pc = 0x42fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951960));
    // 0x42fc10: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x42fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_42fc14:
    // 0x42fc14: 0x3e00008  jr          $ra
    ctx->pc = 0x42FC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FC1Cu;
    // 0x42fc1c: 0x0  nop
    ctx->pc = 0x42fc1cu;
    // NOP
    ctx->pc = 0x42fc20u;
}
