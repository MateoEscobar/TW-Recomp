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

// Function: sub_003897B0
// Address: 0x3897b0 - 0x3897c8
void sub_003897B0_0x3897b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003897B0_0x3897b0");
#endif

    ctx->pc = 0x3897b0u;

    // 0x3897b0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3897b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3897b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3897b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3897b8: 0xa0831308  sb          $v1, 0x1308($a0)
    ctx->pc = 0x3897b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4872), (uint8_t)GPR_U32(ctx, 3));
    // 0x3897bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3897BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3897C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897BCu;
        // 0x3897c0: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3897BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3897C4u;
    // 0x3897c4: 0x0  nop
    ctx->pc = 0x3897c4u;
    // NOP
    ctx->pc = 0x3897c8u;
}
