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

// Function: sub_002E07A8
// Address: 0x2e07a8 - 0x2e07d0
void sub_002E07A8_0x2e07a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E07A8_0x2e07a8");
#endif

    ctx->pc = 0x2e07a8u;

    // 0x2e07a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e07a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07ac: 0x8cc5002c  lw          $a1, 0x2C($a2)
    ctx->pc = 0x2e07acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2e07b0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E07B0u;
    {
        const bool branch_taken_0x2e07b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07B0u;
        // 0x2e07b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e07b0) {
            ctx->pc = 0x2E07C8u;
            goto label_2e07c8;
        }
    }
    ctx->pc = 0x2E07B8u;
    // 0x2e07b8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2e07b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2e07bc: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2e07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2e07c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e07c4: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x2e07c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
label_2e07c8:
    // 0x2e07c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E07C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E07C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E07D0u;
}
