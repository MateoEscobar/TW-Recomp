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

// Function: sub_00354178
// Address: 0x354178 - 0x3541a0
void sub_00354178_0x354178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354178_0x354178");
#endif

    switch (ctx->pc) {
        case 0x354188u: goto label_354188;
        default: break;
    }

    ctx->pc = 0x354178u;

    // 0x354178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35417c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35417cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354180: 0xc0d52ce  jal         func_354B38
    ctx->pc = 0x354180u;
    SET_GPR_U32(ctx, 31, 0x354188u);
    ctx->pc = 0x354B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B38u, 0x354180u, 0x354188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354188u;
label_354188:
    // 0x354188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35418c: 0x3e00008  jr          $ra
    ctx->pc = 0x35418Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35418Cu;
        // 0x354190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35418Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354194u;
    // 0x354194: 0x0  nop
    ctx->pc = 0x354194u;
    // NOP
    // 0x354198: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x354198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35419c: 0x0  nop
    ctx->pc = 0x35419cu;
    // NOP
    ctx->pc = 0x3541a0u;
}
