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

// Function: sub_001AA6F0
// Address: 0x1aa6f0 - 0x1aa720
void sub_001AA6F0_0x1aa6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA6F0_0x1aa6f0");
#endif

    ctx->pc = 0x1aa6f0u;

    // 0x1aa6f0: 0x8c820a98  lw          $v0, 0xA98($a0)
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2712)));
    // 0x1aa6f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA6F4u;
    {
        const bool branch_taken_0x1aa6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6F4u;
        // 0x1aa6f8: 0xac800a94  sw          $zero, 0xA94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6f4) {
            ctx->pc = 0x1AA714u;
            goto label_1aa714;
        }
    }
    ctx->pc = 0x1AA6FCu;
    // 0x1aa6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa700: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x1aa700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x1aa704: 0xac820458  sw          $v0, 0x458($a0)
    ctx->pc = 0x1aa704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1112), GPR_U32(ctx, 2));
    // 0x1aa708: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1aa708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x1aa70c: 0xac820150  sw          $v0, 0x150($a0)
    ctx->pc = 0x1aa70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
    // 0x1aa710: 0xac820260  sw          $v0, 0x260($a0)
    ctx->pc = 0x1aa710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
label_1aa714:
    // 0x1aa714: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA71Cu;
    // 0x1aa71c: 0x0  nop
    ctx->pc = 0x1aa71cu;
    // NOP
    ctx->pc = 0x1aa720u;
}
