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

// Function: sub_0036DF28
// Address: 0x36df28 - 0x36df48
void sub_0036DF28_0x36df28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DF28_0x36df28");
#endif

    switch (ctx->pc) {
        case 0x36df38u: goto label_36df38;
        default: break;
    }

    ctx->pc = 0x36df28u;

    // 0x36df28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36df28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36df2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36df2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36df30: 0xc058340  jal         func_160D00
    ctx->pc = 0x36DF30u;
    SET_GPR_U32(ctx, 31, 0x36DF38u);
    ctx->pc = 0x160D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D00u, 0x36DF30u, 0x36DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DF38u;
label_36df38:
    // 0x36df38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36df38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36df3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36df3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36df40: 0x3e00008  jr          $ra
    ctx->pc = 0x36DF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DF40u;
        // 0x36df44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DF48u;
}
