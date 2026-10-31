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

// Function: sub_002B5110
// Address: 0x2b5110 - 0x2b5148
void sub_002B5110_0x2b5110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5110_0x2b5110");
#endif

    ctx->pc = 0x2b5110u;

    // 0x2b5110: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2b5110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2b5114: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b5114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2b5118: 0x2442ff10  addiu       $v0, $v0, -0xF0
    ctx->pc = 0x2b5118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
    // 0x2b511c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2b511cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b5120: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2b5120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2b5124: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b5124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b5128: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b5128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b512c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2b512cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2b5130: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b5130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5134: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2b5134u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5138: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2b5138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2b513c: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x2b513cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5140: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5140u;
        // 0x2b5144: 0xa0800015  sb          $zero, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5148u;
}
