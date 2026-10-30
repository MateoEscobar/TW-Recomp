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

// Function: sub_002A9DF8
// Address: 0x2a9df8 - 0x2a9e40
void sub_002A9DF8_0x2a9df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9DF8_0x2a9df8");
#endif

    ctx->pc = 0x2a9df8u;

    // 0x2a9df8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9dfc: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x2a9dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
    // 0x2a9e00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a9e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a9e04: 0x2508f730  addiu       $t0, $t0, -0x8D0
    ctx->pc = 0x2a9e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965040));
    // 0x2a9e08: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a9e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9e0c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2a9e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2a9e10: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2a9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2a9e14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a9e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e18: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x2a9e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x2a9e1c: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x2a9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x2a9e20: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x2a9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x2a9e24: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2a9e24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9e28: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2a9e28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9e2c: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x2a9e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9e30: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2a9e30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a9e34: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E34u;
        // 0x2a9e38: 0x7c830020  sq          $v1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9E3Cu;
    // 0x2a9e3c: 0x0  nop
    ctx->pc = 0x2a9e3cu;
    // NOP
    ctx->pc = 0x2a9e40u;
}
