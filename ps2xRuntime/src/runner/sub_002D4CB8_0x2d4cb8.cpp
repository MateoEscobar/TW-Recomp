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

// Function: sub_002D4CB8
// Address: 0x2d4cb8 - 0x2d4cf8
void sub_002D4CB8_0x2d4cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4CB8_0x2d4cb8");
#endif

    ctx->pc = 0x2d4cb8u;

    // 0x2d4cb8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4cbc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2d4cc0: 0x246311d0  addiu       $v1, $v1, 0x11D0
    ctx->pc = 0x2d4cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4560));
    // 0x2d4cc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d4cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d4cc8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2d4cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2d4ccc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2d4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2d4cd0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2d4cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2d4cd4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2d4cd8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d4cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4cdc: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2d4cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4ce0: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2d4ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4ce4: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x2d4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d4ce8: 0xa0860014  sb          $a2, 0x14($a0)
    ctx->pc = 0x2d4ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d4cec: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2d4cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2d4cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CF0u;
        // 0x2d4cf4: 0xa0800015  sb          $zero, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4CF8u;
}
