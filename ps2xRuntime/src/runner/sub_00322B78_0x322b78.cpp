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

// Function: sub_00322B78
// Address: 0x322b78 - 0x322ba8
void sub_00322B78_0x322b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322B78_0x322b78");
#endif

    ctx->pc = 0x322b78u;

    // 0x322b78: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x322b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x322b7c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x322b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x322b80: 0x24634338  addiu       $v1, $v1, 0x4338
    ctx->pc = 0x322b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17208));
    // 0x322b84: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x322b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x322b88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x322b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b8c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x322b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x322b90: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x322b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x322b94: 0xa0870016  sb          $a3, 0x16($a0)
    ctx->pc = 0x322b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 7));
    // 0x322b98: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x322b98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x322b9c: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x322b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x322ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x322BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BA0u;
        // 0x322ba4: 0xa0800015  sb          $zero, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322BA8u;
}
