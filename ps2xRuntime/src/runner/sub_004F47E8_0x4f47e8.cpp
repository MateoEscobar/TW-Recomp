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

// Function: sub_004F47E8
// Address: 0x4f47e8 - 0x4f4800
void sub_004F47E8_0x4f47e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F47E8_0x4f47e8");
#endif

    ctx->pc = 0x4f47e8u;

    // 0x4f47e8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4f47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4f47ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4f47ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f47f0: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x4f47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x4f47f4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x4f47f4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x4f47f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F47F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F47F8u;
        // 0x4f47fc: 0x7c850000  sq          $a1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F47F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4800u;
}
