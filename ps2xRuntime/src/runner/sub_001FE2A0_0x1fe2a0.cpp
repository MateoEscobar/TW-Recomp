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

// Function: sub_001FE2A0
// Address: 0x1fe2a0 - 0x1fe2c0
void sub_001FE2A0_0x1fe2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE2A0_0x1fe2a0");
#endif

    switch (ctx->pc) {
        case 0x1fe2b4u: goto label_1fe2b4;
        default: break;
    }

    ctx->pc = 0x1fe2a0u;

    // 0x1fe2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe2a4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1fe2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1fe2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe2ac: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1FE2ACu;
    SET_GPR_U32(ctx, 31, 0x1FE2B4u);
    ctx->pc = 0x1FE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE2ACu;
    // 0x1fe2b0: 0x2484eeb8  addiu       $a0, $a0, -0x1148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1FE2ACu, 0x1FE2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE2B4u;
label_1fe2b4:
    // 0x1fe2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2B8u;
        // 0x1fe2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE2C0u;
}
