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

// Function: sub_0027B608
// Address: 0x27b608 - 0x27b630
void sub_0027B608_0x27b608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B608_0x27b608");
#endif

    switch (ctx->pc) {
        case 0x27b618u: goto label_27b618;
        default: break;
    }

    ctx->pc = 0x27b608u;

    // 0x27b608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b610: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27B610u;
    SET_GPR_U32(ctx, 31, 0x27B618u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27B610u, 0x27B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B618u;
label_27b618:
    // 0x27b618: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x27b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x27b61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b620: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27b620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27b624: 0x3e00008  jr          $ra
    ctx->pc = 0x27B624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B624u;
        // 0x27b628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B62Cu;
    // 0x27b62c: 0x0  nop
    ctx->pc = 0x27b62cu;
    // NOP
    ctx->pc = 0x27b630u;
}
