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

// Function: sub_003A5AB8
// Address: 0x3a5ab8 - 0x3a5ad8
void sub_003A5AB8_0x3a5ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5AB8_0x3a5ab8");
#endif

    switch (ctx->pc) {
        case 0x3a5ac8u: goto label_3a5ac8;
        default: break;
    }

    ctx->pc = 0x3a5ab8u;

    // 0x3a5ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a5ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a5abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a5ac0: 0xc086670  jal         func_2199C0
    ctx->pc = 0x3A5AC0u;
    SET_GPR_U32(ctx, 31, 0x3A5AC8u);
    ctx->pc = 0x2199C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2199C0u, 0x3A5AC0u, 0x3A5AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5AC8u;
label_3a5ac8:
    // 0x3a5ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5AD0u;
        // 0x3a5ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5AD8u;
}
