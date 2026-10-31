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

// Function: sub_002E2D28
// Address: 0x2e2d28 - 0x2e2d78
void sub_002E2D28_0x2e2d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2D28_0x2e2d28");
#endif

    ctx->pc = 0x2e2d28u;

    // 0x2e2d28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e2d2c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e2d30: 0x24631a10  addiu       $v1, $v1, 0x1A10
    ctx->pc = 0x2e2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6672));
    // 0x2e2d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e2d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e2d38: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2e2d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2e2d3c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e2d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e2d40: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2e2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2e2d44: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2e2d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2e2d48: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2e2d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x2e2d4c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2e2d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2d50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e2d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d54: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2e2d54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2d58: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e2d58u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2e2d5c: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2e2d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2e2d60: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2e2d60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2e2d64: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2e2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2e2d68: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2e2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2e2d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D6Cu;
        // 0x2e2d70: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2D74u;
    // 0x2e2d74: 0x0  nop
    ctx->pc = 0x2e2d74u;
    // NOP
    ctx->pc = 0x2e2d78u;
}
