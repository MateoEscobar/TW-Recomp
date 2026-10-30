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

// Function: sub_004E3F98
// Address: 0x4e3f98 - 0x4e3fa8
void sub_004E3F98_0x4e3f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F98_0x4e3f98");
#endif

    ctx->pc = 0x4e3f98u;

    // 0x4e3f98: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x4e3f98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x4e3f9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4e3f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3FA0u;
        // 0x4e3fa4: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3FA8u;
}
