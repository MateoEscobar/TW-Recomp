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

// Function: sub_001E7380
// Address: 0x1e7380 - 0x1e73a0
void sub_001E7380_0x1e7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7380_0x1e7380");
#endif

    switch (ctx->pc) {
        case 0x1e7390u: goto label_1e7390;
        default: break;
    }

    ctx->pc = 0x1e7380u;

    // 0x1e7380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7388: 0xc068992  jal         func_1A2648
    ctx->pc = 0x1E7388u;
    SET_GPR_U32(ctx, 31, 0x1E7390u);
    ctx->pc = 0x1E738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7388u;
    // 0x1e738c: 0x24840210  addiu       $a0, $a0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1E7388u, 0x1E7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7390u;
label_1e7390:
    // 0x1e7390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7394: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7394u;
        // 0x1e7398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E739Cu;
    // 0x1e739c: 0x0  nop
    ctx->pc = 0x1e739cu;
    // NOP
    ctx->pc = 0x1e73a0u;
}
