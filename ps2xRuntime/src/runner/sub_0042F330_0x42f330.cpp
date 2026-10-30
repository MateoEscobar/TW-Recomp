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

// Function: sub_0042F330
// Address: 0x42f330 - 0x42f350
void sub_0042F330_0x42f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F330_0x42f330");
#endif

    switch (ctx->pc) {
        case 0x42f340u: goto label_42f340;
        default: break;
    }

    ctx->pc = 0x42f330u;

    // 0x42f330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42f334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42f338: 0xc10bbd2  jal         func_42EF48
    ctx->pc = 0x42F338u;
    SET_GPR_U32(ctx, 31, 0x42F340u);
    ctx->pc = 0x42EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF48u, 0x42F338u, 0x42F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F340u;
label_42f340:
    // 0x42f340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42f340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f344: 0x3e00008  jr          $ra
    ctx->pc = 0x42F344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F344u;
        // 0x42f348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F34Cu;
    // 0x42f34c: 0x0  nop
    ctx->pc = 0x42f34cu;
    // NOP
    ctx->pc = 0x42f350u;
}
