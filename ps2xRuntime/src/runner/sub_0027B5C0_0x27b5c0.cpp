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

// Function: sub_0027B5C0
// Address: 0x27b5c0 - 0x27b5e0
void sub_0027B5C0_0x27b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B5C0_0x27b5c0");
#endif

    switch (ctx->pc) {
        case 0x27b5d0u: goto label_27b5d0;
        default: break;
    }

    ctx->pc = 0x27b5c0u;

    // 0x27b5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b5c8: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27B5C8u;
    SET_GPR_U32(ctx, 31, 0x27B5D0u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27B5C8u, 0x27B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5D0u;
label_27b5d0:
    // 0x27b5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b5d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27b5d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27b5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x27B5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5D8u;
        // 0x27b5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B5E0u;
}
