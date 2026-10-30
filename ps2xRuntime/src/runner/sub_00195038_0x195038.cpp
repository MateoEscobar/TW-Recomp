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

// Function: sub_00195038
// Address: 0x195038 - 0x195060
void sub_00195038_0x195038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195038_0x195038");
#endif

    switch (ctx->pc) {
        case 0x195048u: goto label_195048;
        case 0x195050u: goto label_195050;
        default: break;
    }

    ctx->pc = 0x195038u;

    // 0x195038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19503c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19503cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195040: 0xc123142  jal         func_48C508
    ctx->pc = 0x195040u;
    SET_GPR_U32(ctx, 31, 0x195048u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x195040u, 0x195048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195048u;
label_195048:
    // 0x195048: 0xc123142  jal         func_48C508
    ctx->pc = 0x195048u;
    SET_GPR_U32(ctx, 31, 0x195050u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x195048u, 0x195050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195050u;
label_195050:
    // 0x195050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195054: 0x3e00008  jr          $ra
    ctx->pc = 0x195054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195054u;
        // 0x195058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19505Cu;
    // 0x19505c: 0x0  nop
    ctx->pc = 0x19505cu;
    // NOP
    ctx->pc = 0x195060u;
}
