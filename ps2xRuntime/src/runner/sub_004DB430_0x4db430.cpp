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

// Function: sub_004DB430
// Address: 0x4db430 - 0x4db448
void sub_004DB430_0x4db430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB430_0x4db430");
#endif

    ctx->pc = 0x4db430u;

    // 0x4db430: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4db430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4db434: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4db434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4db438: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x4db438u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4db43c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB43Cu;
        // 0x4db440: 0x7c830020  sq          $v1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB444u;
    // 0x4db444: 0x0  nop
    ctx->pc = 0x4db444u;
    // NOP
    ctx->pc = 0x4db448u;
}
