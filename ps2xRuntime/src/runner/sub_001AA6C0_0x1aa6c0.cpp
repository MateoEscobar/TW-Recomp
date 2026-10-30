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

// Function: sub_001AA6C0
// Address: 0x1aa6c0 - 0x1aa6f0
void sub_001AA6C0_0x1aa6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA6C0_0x1aa6c0");
#endif

    ctx->pc = 0x1aa6c0u;

    // 0x1aa6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa6c4: 0x8c830a98  lw          $v1, 0xA98($a0)
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2712)));
    // 0x1aa6c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA6C8u;
    {
        const bool branch_taken_0x1aa6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6C8u;
        // 0x1aa6cc: 0xac820a94  sw          $v0, 0xA94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6c8) {
            ctx->pc = 0x1AA6E4u;
            goto label_1aa6e4;
        }
    }
    ctx->pc = 0x1AA6D0u;
    // 0x1aa6d0: 0xac800370  sw          $zero, 0x370($a0)
    ctx->pc = 0x1aa6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 0));
    // 0x1aa6d4: 0xac800458  sw          $zero, 0x458($a0)
    ctx->pc = 0x1aa6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1112), GPR_U32(ctx, 0));
    // 0x1aa6d8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1aa6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1aa6dc: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x1aa6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x1aa6e0: 0xac800260  sw          $zero, 0x260($a0)
    ctx->pc = 0x1aa6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 0));
label_1aa6e4:
    // 0x1aa6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA6ECu;
    // 0x1aa6ec: 0x0  nop
    ctx->pc = 0x1aa6ecu;
    // NOP
    ctx->pc = 0x1aa6f0u;
}
