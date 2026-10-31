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

// Function: sub_00156200
// Address: 0x156200 - 0x156220
void sub_00156200_0x156200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156200_0x156200");
#endif

    switch (ctx->pc) {
        case 0x156210u: goto label_156210;
        default: break;
    }

    ctx->pc = 0x156200u;

    // 0x156200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156208: 0xc0579fa  jal         func_15E7E8
    ctx->pc = 0x156208u;
    SET_GPR_U32(ctx, 31, 0x156210u);
    ctx->pc = 0x15E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E7E8u, 0x156208u, 0x156210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156210u;
label_156210:
    // 0x156210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156214: 0x3e00008  jr          $ra
    ctx->pc = 0x156214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156214u;
        // 0x156218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15621Cu;
    // 0x15621c: 0x0  nop
    ctx->pc = 0x15621cu;
    // NOP
    ctx->pc = 0x156220u;
}
