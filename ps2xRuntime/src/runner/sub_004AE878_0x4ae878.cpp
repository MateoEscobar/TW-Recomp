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

// Function: sub_004AE878
// Address: 0x4ae878 - 0x4ae898
void sub_004AE878_0x4ae878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE878_0x4ae878");
#endif

    switch (ctx->pc) {
        case 0x4ae888u: goto label_4ae888;
        default: break;
    }

    ctx->pc = 0x4ae878u;

    // 0x4ae878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae87c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae880: 0xc12afdc  jal         func_4ABF70
    ctx->pc = 0x4AE880u;
    SET_GPR_U32(ctx, 31, 0x4AE888u);
    ctx->pc = 0x4ABF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABF70u, 0x4AE880u, 0x4AE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE888u;
label_4ae888:
    // 0x4ae888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae88c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE88Cu;
        // 0x4ae890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE894u;
    // 0x4ae894: 0x0  nop
    ctx->pc = 0x4ae894u;
    // NOP
    ctx->pc = 0x4ae898u;
}
