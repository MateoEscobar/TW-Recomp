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

// Function: sub_0036DF78
// Address: 0x36df78 - 0x36df98
void sub_0036DF78_0x36df78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DF78_0x36df78");
#endif

    switch (ctx->pc) {
        case 0x36df88u: goto label_36df88;
        default: break;
    }

    ctx->pc = 0x36df78u;

    // 0x36df78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36df78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36df7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36df80: 0xc05834e  jal         func_160D38
    ctx->pc = 0x36DF80u;
    SET_GPR_U32(ctx, 31, 0x36DF88u);
    ctx->pc = 0x160D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D38u, 0x36DF80u, 0x36DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DF88u;
label_36df88:
    // 0x36df88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36df88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36df8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36df8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36df90: 0x3e00008  jr          $ra
    ctx->pc = 0x36DF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DF90u;
        // 0x36df94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DF98u;
}
