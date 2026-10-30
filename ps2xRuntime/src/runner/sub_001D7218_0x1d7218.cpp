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

// Function: sub_001D7218
// Address: 0x1d7218 - 0x1d7238
void sub_001D7218_0x1d7218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7218_0x1d7218");
#endif

    switch (ctx->pc) {
        case 0x1d7228u: goto label_1d7228;
        default: break;
    }

    ctx->pc = 0x1d7218u;

    // 0x1d7218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d721c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7220: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1D7220u;
    SET_GPR_U32(ctx, 31, 0x1D7228u);
    ctx->pc = 0x1D7224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7220u;
    // 0x1d7224: 0x24840330  addiu       $a0, $a0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1D7220u, 0x1D7228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7228u;
label_1d7228:
    // 0x1d7228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d722c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D722Cu;
        // 0x1d7230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D722Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7234u;
    // 0x1d7234: 0x0  nop
    ctx->pc = 0x1d7234u;
    // NOP
    ctx->pc = 0x1d7238u;
}
