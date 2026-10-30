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

// Function: sub_004AFFE0
// Address: 0x4affe0 - 0x4b0000
void sub_004AFFE0_0x4affe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFFE0_0x4affe0");
#endif

    ctx->pc = 0x4affe0u;

    // 0x4affe0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4affe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4affe4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4affe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4affe8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4affe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4affec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFFECu;
    {
        const bool branch_taken_0x4affec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFFECu;
        // 0x4afff0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4affec) {
            ctx->pc = 0x4AFFF8u;
            goto label_4afff8;
        }
    }
    ctx->pc = 0x4AFFF4u;
    // 0x4afff4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4afff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4afff8:
    // 0x4afff8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0000u;
}
