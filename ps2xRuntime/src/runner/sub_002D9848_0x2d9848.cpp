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

// Function: sub_002D9848
// Address: 0x2d9848 - 0x2d9870
void sub_002D9848_0x2d9848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9848_0x2d9848");
#endif

    ctx->pc = 0x2d9848u;

    // 0x2d9848: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d9848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2d984c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2d984cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2d9850: 0x24630ed0  addiu       $v1, $v1, 0xED0
    ctx->pc = 0x2d9850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3792));
    // 0x2d9854: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2d9854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2d9858: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d9858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d985c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d985cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2d9860: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2d9860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2d9864: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2d9864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9868: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9868u;
        // 0x2d986c: 0xa0800005  sb          $zero, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9870u;
}
