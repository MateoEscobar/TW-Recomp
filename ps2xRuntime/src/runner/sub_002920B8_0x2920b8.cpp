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

// Function: sub_002920B8
// Address: 0x2920b8 - 0x2920e0
void sub_002920B8_0x2920b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002920B8_0x2920b8");
#endif

    ctx->pc = 0x2920b8u;

    // 0x2920b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2920b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920bc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2920BCu;
    {
        const bool branch_taken_0x2920bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2920C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920BCu;
        // 0x2920c0: 0xacc002cc  sw          $zero, 0x2CC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920bc) {
            ctx->pc = 0x2920D8u;
            goto label_2920d8;
        }
    }
    ctx->pc = 0x2920C4u;
    // 0x2920c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2920c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2920c8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2920c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2920cc: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2920ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2920d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2920d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2920d4: 0xacc302cc  sw          $v1, 0x2CC($a2)
    ctx->pc = 0x2920d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 716), GPR_U32(ctx, 3));
label_2920d8:
    // 0x2920d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2920D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2920D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2920E0u;
}
