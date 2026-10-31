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

// Function: sub_0031E5F8
// Address: 0x31e5f8 - 0x31e618
void sub_0031E5F8_0x31e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E5F8_0x31e5f8");
#endif

    switch (ctx->pc) {
        case 0x31e608u: goto label_31e608;
        default: break;
    }

    ctx->pc = 0x31e5f8u;

    // 0x31e5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e5fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e600: 0xc0c793c  jal         func_31E4F0
    ctx->pc = 0x31E600u;
    SET_GPR_U32(ctx, 31, 0x31E608u);
    ctx->pc = 0x31E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E4F0u, 0x31E600u, 0x31E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E608u;
label_31e608:
    // 0x31e608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e60c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E60Cu;
        // 0x31e610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E614u;
    // 0x31e614: 0x0  nop
    ctx->pc = 0x31e614u;
    // NOP
    ctx->pc = 0x31e618u;
}
