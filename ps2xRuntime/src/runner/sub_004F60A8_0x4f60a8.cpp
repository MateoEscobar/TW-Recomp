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

// Function: sub_004F60A8
// Address: 0x4f60a8 - 0x4f60c0
void sub_004F60A8_0x4f60a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F60A8_0x4f60a8");
#endif

    ctx->pc = 0x4f60a8u;

    // 0x4f60a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f60ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f60acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4f60b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f60b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F60B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F60B4u;
        // 0x4f60b8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F60B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F60BCu;
    // 0x4f60bc: 0x0  nop
    ctx->pc = 0x4f60bcu;
    // NOP
    ctx->pc = 0x4f60c0u;
}
