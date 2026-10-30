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

// Function: sub_001988F0
// Address: 0x1988f0 - 0x198910
void sub_001988F0_0x1988f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001988F0_0x1988f0");
#endif

    switch (ctx->pc) {
        case 0x198900u: goto label_198900;
        default: break;
    }

    ctx->pc = 0x1988f0u;

    // 0x1988f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1988f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1988f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1988f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1988f8: 0xc120aa4  jal         func_482A90
    ctx->pc = 0x1988F8u;
    SET_GPR_U32(ctx, 31, 0x198900u);
    ctx->pc = 0x1988FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988F8u;
    // 0x1988fc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A90u, 0x1988F8u, 0x198900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198900u;
label_198900:
    // 0x198900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198904: 0x3e00008  jr          $ra
    ctx->pc = 0x198904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198904u;
        // 0x198908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19890Cu;
    // 0x19890c: 0x0  nop
    ctx->pc = 0x19890cu;
    // NOP
    ctx->pc = 0x198910u;
}
