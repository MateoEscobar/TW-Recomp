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

// Function: sub_00292088
// Address: 0x292088 - 0x2920b8
void sub_00292088_0x292088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292088_0x292088");
#endif

    ctx->pc = 0x292088u;

    // 0x292088: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x292088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x29208c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29208cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292090: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x292090u;
    {
        const bool branch_taken_0x292090 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x292094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292090u;
        // 0x292094: 0xacc00a9c  sw          $zero, 0xA9C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292090) {
            ctx->pc = 0x2920ACu;
            goto label_2920ac;
        }
    }
    ctx->pc = 0x292098u;
    // 0x292098: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x292098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29209c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x29209cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2920a0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2920a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2920a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2920a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2920a8: 0xacc30a9c  sw          $v1, 0xA9C($a2)
    ctx->pc = 0x2920a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2716), GPR_U32(ctx, 3));
label_2920ac:
    // 0x2920ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2920ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2920ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2920B4u;
    // 0x2920b4: 0x0  nop
    ctx->pc = 0x2920b4u;
    // NOP
    ctx->pc = 0x2920b8u;
}
