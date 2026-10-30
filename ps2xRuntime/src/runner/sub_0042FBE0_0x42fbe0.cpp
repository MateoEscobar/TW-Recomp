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

// Function: sub_0042FBE0
// Address: 0x42fbe0 - 0x42fc00
void sub_0042FBE0_0x42fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FBE0_0x42fbe0");
#endif

    ctx->pc = 0x42fbe0u;

    // 0x42fbe0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42FBE0u;
    {
        const bool branch_taken_0x42fbe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FBE0u;
        // 0x42fbe4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fbe0) {
            ctx->pc = 0x42FBF4u;
            goto label_42fbf4;
        }
    }
    ctx->pc = 0x42FBE8u;
    // 0x42fbe8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x42fbec: 0x2442c428  addiu       $v0, $v0, -0x3BD8
    ctx->pc = 0x42fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951976));
    // 0x42fbf0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x42fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_42fbf4:
    // 0x42fbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x42FBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FBFCu;
    // 0x42fbfc: 0x0  nop
    ctx->pc = 0x42fbfcu;
    // NOP
    ctx->pc = 0x42fc00u;
}
