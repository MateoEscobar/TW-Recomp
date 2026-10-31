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

// Function: sub_0029F3A8
// Address: 0x29f3a8 - 0x29f3c8
void sub_0029F3A8_0x29f3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F3A8_0x29f3a8");
#endif

    ctx->pc = 0x29f3a8u;

    // 0x29f3a8: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F3A8u;
    {
        const bool branch_taken_0x29f3a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x29F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F3A8u;
        // 0x29f3ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f3a8) {
            ctx->pc = 0x29F3C0u;
            goto label_29f3c0;
        }
    }
    ctx->pc = 0x29F3B0u;
    // 0x29f3b0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x29f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f3b4: 0x8c440b84  lw          $a0, 0xB84($v0)
    ctx->pc = 0x29f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2948)));
    // 0x29f3b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29f3bc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x29f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_29f3c0:
    // 0x29f3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x29F3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F3C8u;
}
