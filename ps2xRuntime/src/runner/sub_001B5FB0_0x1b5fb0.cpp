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

// Function: sub_001B5FB0
// Address: 0x1b5fb0 - 0x1b5fd0
void sub_001B5FB0_0x1b5fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5FB0_0x1b5fb0");
#endif

    switch (ctx->pc) {
        case 0x1b5fc4u: goto label_1b5fc4;
        default: break;
    }

    ctx->pc = 0x1b5fb0u;

    // 0x1b5fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5fb4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b5fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5fbc: 0xc06ce2e  jal         func_1B38B8
    ctx->pc = 0x1B5FBCu;
    SET_GPR_U32(ctx, 31, 0x1B5FC4u);
    ctx->pc = 0x1B5FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FBCu;
    // 0x1b5fc0: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38B8u, 0x1B5FBCu, 0x1B5FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FC4u;
label_1b5fc4:
    // 0x1b5fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FC8u;
        // 0x1b5fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5FD0u;
}
