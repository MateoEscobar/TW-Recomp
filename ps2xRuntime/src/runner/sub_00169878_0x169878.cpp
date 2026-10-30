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

// Function: sub_00169878
// Address: 0x169878 - 0x1698a0
void sub_00169878_0x169878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169878_0x169878");
#endif

    ctx->pc = 0x169878u;

    // 0x169878: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x169878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16987c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16987Cu;
    {
        const bool branch_taken_0x16987c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x169880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16987Cu;
        // 0x169880: 0xacc005e8  sw          $zero, 0x5E8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16987c) {
            ctx->pc = 0x169898u;
            goto label_169898;
        }
    }
    ctx->pc = 0x169884u;
    // 0x169884: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x169884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x169888: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x169888u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x16988c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x16988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x169890: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x169890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169894: 0xacc305e8  sw          $v1, 0x5E8($a2)
    ctx->pc = 0x169894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1512), GPR_U32(ctx, 3));
label_169898:
    // 0x169898: 0x3e00008  jr          $ra
    ctx->pc = 0x169898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1698A0u;
}
