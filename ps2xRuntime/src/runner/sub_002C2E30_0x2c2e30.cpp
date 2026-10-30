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

// Function: sub_002C2E30
// Address: 0x2c2e30 - 0x2c2e80
void sub_002C2E30_0x2c2e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2E30_0x2c2e30");
#endif

    ctx->pc = 0x2c2e30u;

    // 0x2c2e30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c2e34: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c2e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c2e38: 0x246308d0  addiu       $v1, $v1, 0x8D0
    ctx->pc = 0x2c2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
    // 0x2c2e3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c2e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c2e40: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2c2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2c2e44: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c2e48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c2e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e4c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c2e50: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2c2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2c2e54: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c2e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2e58: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c2e58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2e5c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2c2e5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c2e60: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x2c2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x2c2e64: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2c2e64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2c2e68: 0xac890034  sw          $t1, 0x34($a0)
    ctx->pc = 0x2c2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 9));
    // 0x2c2e6c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2c2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2c2e70: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c2e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E74u;
        // 0x2c2e78: 0xa0800040  sb          $zero, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2E7Cu;
    // 0x2c2e7c: 0x0  nop
    ctx->pc = 0x2c2e7cu;
    // NOP
    ctx->pc = 0x2c2e80u;
}
