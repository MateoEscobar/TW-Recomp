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

// Function: sub_004B3770
// Address: 0x4b3770 - 0x4b3790
void sub_004B3770_0x4b3770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3770_0x4b3770");
#endif

    switch (ctx->pc) {
        case 0x4b3780u: goto label_4b3780;
        default: break;
    }

    ctx->pc = 0x4b3770u;

    // 0x4b3770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3778: 0xc12de66  jal         func_4B7998
    ctx->pc = 0x4B3778u;
    SET_GPR_U32(ctx, 31, 0x4B3780u);
    ctx->pc = 0x4B7998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7998u, 0x4B3778u, 0x4B3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3780u;
label_4b3780:
    // 0x4b3780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3784: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3784u;
        // 0x4b3788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B378Cu;
    // 0x4b378c: 0x0  nop
    ctx->pc = 0x4b378cu;
    // NOP
    ctx->pc = 0x4b3790u;
}
