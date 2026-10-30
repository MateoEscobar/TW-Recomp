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

// Function: sub_0027B680
// Address: 0x27b680 - 0x27b6a8
void sub_0027B680_0x27b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B680_0x27b680");
#endif

    switch (ctx->pc) {
        case 0x27b690u: goto label_27b690;
        default: break;
    }

    ctx->pc = 0x27b680u;

    // 0x27b680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b688: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27B688u;
    SET_GPR_U32(ctx, 31, 0x27B690u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27B688u, 0x27B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B690u;
label_27b690:
    // 0x27b690: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x27b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x27b694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b698: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27b698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27b69c: 0x3e00008  jr          $ra
    ctx->pc = 0x27B69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B69Cu;
        // 0x27b6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B6A4u;
    // 0x27b6a4: 0x0  nop
    ctx->pc = 0x27b6a4u;
    // NOP
    ctx->pc = 0x27b6a8u;
}
