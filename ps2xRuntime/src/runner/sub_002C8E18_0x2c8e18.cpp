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

// Function: sub_002C8E18
// Address: 0x2c8e18 - 0x2c8e48
void sub_002C8E18_0x2c8e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8E18_0x2c8e18");
#endif

    ctx->pc = 0x2c8e18u;

    // 0x2c8e18: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c8e1c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c8e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c8e20: 0x24630e70  addiu       $v1, $v1, 0xE70
    ctx->pc = 0x2c8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3696));
    // 0x2c8e24: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2c8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2c8e28: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c8e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c8e2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c8e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e30: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c8e30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8e34: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c8e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8e38: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2c8e38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c8e3c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2c8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2c8e40: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E40u;
        // 0x2c8e44: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8E48u;
}
