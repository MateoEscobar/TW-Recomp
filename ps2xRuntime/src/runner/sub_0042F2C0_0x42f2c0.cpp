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

// Function: sub_0042F2C0
// Address: 0x42f2c0 - 0x42f2e0
void sub_0042F2C0_0x42f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F2C0_0x42f2c0");
#endif

    ctx->pc = 0x42f2c0u;

    // 0x42f2c0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42f2c4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x42f2c8: 0x2442c280  addiu       $v0, $v0, -0x3D80
    ctx->pc = 0x42f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951552));
    // 0x42f2cc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x42f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x42f2d0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x42f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x42f2d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x42f2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x42F2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F2D8u;
        // 0x42f2dc: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F2E0u;
}
