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

// Function: sub_004AFBF0
// Address: 0x4afbf0 - 0x4afc10
void sub_004AFBF0_0x4afbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFBF0_0x4afbf0");
#endif

    switch (ctx->pc) {
        case 0x4afc00u: goto label_4afc00;
        default: break;
    }

    ctx->pc = 0x4afbf0u;

    // 0x4afbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afbf8: 0xc12c56e  jal         func_4B15B8
    ctx->pc = 0x4AFBF8u;
    SET_GPR_U32(ctx, 31, 0x4AFC00u);
    ctx->pc = 0x4B15B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B15B8u, 0x4AFBF8u, 0x4AFC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFC00u;
label_4afc00:
    // 0x4afc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afc04: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFC04u;
        // 0x4afc08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFC0Cu;
    // 0x4afc0c: 0x0  nop
    ctx->pc = 0x4afc0cu;
    // NOP
    ctx->pc = 0x4afc10u;
}
