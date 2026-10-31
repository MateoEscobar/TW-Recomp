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

// Function: sub_0042FB58
// Address: 0x42fb58 - 0x42fb78
void sub_0042FB58_0x42fb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FB58_0x42fb58");
#endif

    ctx->pc = 0x42fb58u;

    // 0x42fb58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42FB58u;
    {
        const bool branch_taken_0x42fb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FB58u;
        // 0x42fb5c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fb58) {
            ctx->pc = 0x42FB70u;
            goto label_42fb70;
        }
    }
    ctx->pc = 0x42FB60u;
    // 0x42fb60: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x42fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x42fb64: 0x2442c478  addiu       $v0, $v0, -0x3B88
    ctx->pc = 0x42fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952056));
    // 0x42fb68: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x42fb6c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x42fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_42fb70:
    // 0x42fb70: 0x3e00008  jr          $ra
    ctx->pc = 0x42FB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FB78u;
}
