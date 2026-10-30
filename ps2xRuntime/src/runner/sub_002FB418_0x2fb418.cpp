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

// Function: sub_002FB418
// Address: 0x2fb418 - 0x2fb440
void sub_002FB418_0x2fb418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB418_0x2fb418");
#endif

    ctx->pc = 0x2fb418u;

    // 0x2fb418: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fb418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fb41c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fb41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fb420: 0x24632de0  addiu       $v1, $v1, 0x2DE0
    ctx->pc = 0x2fb420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11744));
    // 0x2fb424: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x2fb424u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x2fb428: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fb428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb42c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fb42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fb430: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fb430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fb434: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB434u;
        // 0x2fb438: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB43Cu;
    // 0x2fb43c: 0x0  nop
    ctx->pc = 0x2fb43cu;
    // NOP
    ctx->pc = 0x2fb440u;
}
