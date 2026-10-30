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

// Function: sub_002B6B88
// Address: 0x2b6b88 - 0x2b6bb8
void sub_002B6B88_0x2b6b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6B88_0x2b6b88");
#endif

    ctx->pc = 0x2b6b88u;

    // 0x2b6b88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b6b8c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b6b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b6b90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b6b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b6b94: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2b6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2b6b98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b6b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b6b9c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b6b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b6ba0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b6ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ba4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b6ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b6ba8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b6ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BACu;
        // 0x2b6bb0: 0xa0800005  sb          $zero, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6BB4u;
    // 0x2b6bb4: 0x0  nop
    ctx->pc = 0x2b6bb4u;
    // NOP
    ctx->pc = 0x2b6bb8u;
}
