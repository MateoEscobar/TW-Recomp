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

// Function: sub_002E4E28
// Address: 0x2e4e28 - 0x2e4e70
void sub_002E4E28_0x2e4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4E28_0x2e4e28");
#endif

    ctx->pc = 0x2e4e28u;

    // 0x2e4e28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e4e2c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e4e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e4e30: 0x246322b0  addiu       $v1, $v1, 0x22B0
    ctx->pc = 0x2e4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8880));
    // 0x2e4e34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e4e38: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e4e3c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2e4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2e4e40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e4e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e44: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2e4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2e4e48: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2e4e48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4e4c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2e4e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4e50: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x2e4e50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e4e54: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2e4e54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2e4e58: 0x79250000  lq          $a1, 0x0($t1)
    ctx->pc = 0x2e4e58u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2e4e5c: 0xac8a0030  sw          $t2, 0x30($a0)
    ctx->pc = 0x2e4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 10));
    // 0x2e4e60: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x2e4e60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x2e4e64: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x2e4e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x2e4e68: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E68u;
        // 0x2e4e6c: 0xac870038  sw          $a3, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4E70u;
}
