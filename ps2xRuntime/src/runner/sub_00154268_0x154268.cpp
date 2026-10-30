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

// Function: sub_00154268
// Address: 0x154268 - 0x154290
void sub_00154268_0x154268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154268_0x154268");
#endif

    ctx->pc = 0x154268u;

    // 0x154268: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x154268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x15426c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x15426cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x154270: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x154270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
    // 0x154274: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x154274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x154278: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x154278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x15427c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15427cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154280: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x154280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x154284: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x154284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x154288: 0x3e00008  jr          $ra
    ctx->pc = 0x154288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154288u;
        // 0x15428c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154290u;
}
