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

// Function: sub_004F6368
// Address: 0x4f6368 - 0x4f6380
void sub_004F6368_0x4f6368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6368_0x4f6368");
#endif

    ctx->pc = 0x4f6368u;

    // 0x4f6368: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x4f6368u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4f636c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4f636cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6370: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x4f6370u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x4f6374: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x4f6374u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x4f6378: 0x3e00008  jr          $ra
    ctx->pc = 0x4F6378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6378u;
        // 0x4f637c: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F6380u;
}
