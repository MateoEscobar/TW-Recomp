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

// Function: sub_002B6DC0
// Address: 0x2b6dc0 - 0x2b6df8
void sub_002B6DC0_0x2b6dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6DC0_0x2b6dc0");
#endif

    ctx->pc = 0x2b6dc0u;

    // 0x2b6dc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b6dc4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b6dc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b6dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b6dcc: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2b6dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2b6dd0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b6dd4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b6dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b6dd8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b6dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ddc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b6ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b6de0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b6de0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6de4: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2b6de4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6de8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2b6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2b6dec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DECu;
        // 0x2b6df0: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6DF4u;
    // 0x2b6df4: 0x0  nop
    ctx->pc = 0x2b6df4u;
    // NOP
    ctx->pc = 0x2b6df8u;
}
