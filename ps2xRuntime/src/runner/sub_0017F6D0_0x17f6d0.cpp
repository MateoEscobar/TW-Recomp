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

// Function: sub_0017F6D0
// Address: 0x17f6d0 - 0x17f708
void sub_0017F6D0_0x17f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F6D0_0x17f6d0");
#endif

    ctx->pc = 0x17f6d0u;

    // 0x17f6d0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17f6d4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x17f6d8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17f6dc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x17f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17f6e0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x17f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17f6e4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17f6e8: 0x8c62d268  lw          $v0, -0x2D98($v1)
    ctx->pc = 0x17f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FD268u));
    // 0x17f6ec: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x17f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x17f6f0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x17f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x17f6f4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x17f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x17f6f8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x17f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x17f6fc: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x17f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x17f700: 0x3e00008  jr          $ra
    ctx->pc = 0x17F700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F700u;
        // 0x17f704: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F708u;
}
