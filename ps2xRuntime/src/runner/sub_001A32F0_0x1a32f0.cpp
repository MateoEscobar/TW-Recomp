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

// Function: sub_001A32F0
// Address: 0x1a32f0 - 0x1a3310
void sub_001A32F0_0x1a32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A32F0_0x1a32f0");
#endif

    switch (ctx->pc) {
        case 0x1a3300u: goto label_1a3300;
        default: break;
    }

    ctx->pc = 0x1a32f0u;

    // 0x1a32f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a32f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a32f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a32f8: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1A32F8u;
    SET_GPR_U32(ctx, 31, 0x1A3300u);
    ctx->pc = 0x1A32FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32F8u;
    // 0x1a32fc: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1A32F8u, 0x1A3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3300u;
label_1a3300:
    // 0x1a3300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3304: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3304u;
        // 0x1a3308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A330Cu;
    // 0x1a330c: 0x0  nop
    ctx->pc = 0x1a330cu;
    // NOP
    ctx->pc = 0x1a3310u;
}
