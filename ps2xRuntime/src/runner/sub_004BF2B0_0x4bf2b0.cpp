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

// Function: sub_004BF2B0
// Address: 0x4bf2b0 - 0x4bf2e8
void sub_004BF2B0_0x4bf2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF2B0_0x4bf2b0");
#endif

    ctx->pc = 0x4bf2b0u;

    // 0x4bf2b0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4bf2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4bf2b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4bf2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bf2b8: 0x8c4341f8  lw          $v1, 0x41F8($v0)
    ctx->pc = 0x4bf2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7141F8u));
    // 0x4bf2bc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4bf2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4bf2c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4bf2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf2c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4bf2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4bf2c8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4bf2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4bf2cc: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x4bf2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x4bf2d0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x4bf2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x4bf2d4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4bf2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x4bf2d8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4bf2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4bf2dc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4bf2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x4bf2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF2E0u;
        // 0x4bf2e4: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF2E8u;
}
