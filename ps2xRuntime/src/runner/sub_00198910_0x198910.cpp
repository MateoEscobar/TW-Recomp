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

// Function: sub_00198910
// Address: 0x198910 - 0x198930
void sub_00198910_0x198910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198910_0x198910");
#endif

    switch (ctx->pc) {
        case 0x198920u: goto label_198920;
        default: break;
    }

    ctx->pc = 0x198910u;

    // 0x198910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198918: 0xc120ad8  jal         func_482B60
    ctx->pc = 0x198918u;
    SET_GPR_U32(ctx, 31, 0x198920u);
    ctx->pc = 0x19891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198918u;
    // 0x19891c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482B60u, 0x198918u, 0x198920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198920u;
label_198920:
    // 0x198920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198924: 0x3e00008  jr          $ra
    ctx->pc = 0x198924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198924u;
        // 0x198928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19892Cu;
    // 0x19892c: 0x0  nop
    ctx->pc = 0x19892cu;
    // NOP
    ctx->pc = 0x198930u;
}
