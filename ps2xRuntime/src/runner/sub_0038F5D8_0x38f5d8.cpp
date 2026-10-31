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

// Function: sub_0038F5D8
// Address: 0x38f5d8 - 0x38f600
void sub_0038F5D8_0x38f5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F5D8_0x38f5d8");
#endif

    ctx->pc = 0x38f5d8u;

    // 0x38f5d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38f5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f5dc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38F5DCu;
    {
        const bool branch_taken_0x38f5dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5DCu;
        // 0x38f5e0: 0xacc000f0  sw          $zero, 0xF0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f5dc) {
            ctx->pc = 0x38F5F8u;
            goto label_38f5f8;
        }
    }
    ctx->pc = 0x38F5E4u;
    // 0x38f5e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x38f5e8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x38f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x38f5ec: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x38f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x38f5f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x38f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38f5f4: 0xacc300f0  sw          $v1, 0xF0($a2)
    ctx->pc = 0x38f5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 3));
label_38f5f8:
    // 0x38f5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38F5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F600u;
}
