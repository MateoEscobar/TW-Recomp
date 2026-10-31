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

// Function: sub_002D0AA8
// Address: 0x2d0aa8 - 0x2d0ad8
void sub_002D0AA8_0x2d0aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0AA8_0x2d0aa8");
#endif

    ctx->pc = 0x2d0aa8u;

    // 0x2d0aa8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2d0aac: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2d0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2d0ab0: 0x24631530  addiu       $v1, $v1, 0x1530
    ctx->pc = 0x2d0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5424));
    // 0x2d0ab4: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2d0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2d0ab8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d0ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0abc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2d0ac0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2d0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2d0ac4: 0xa0870018  sb          $a3, 0x18($a0)
    ctx->pc = 0x2d0ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d0ac8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2d0ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0acc: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2d0accu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AD0u;
        // 0x2d0ad4: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0AD8u;
}
