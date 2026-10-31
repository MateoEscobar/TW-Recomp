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

// Function: sub_001B3F98
// Address: 0x1b3f98 - 0x1b3fc0
void sub_001B3F98_0x1b3f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3F98_0x1b3f98");
#endif

    switch (ctx->pc) {
        case 0x1b3fb0u: goto label_1b3fb0;
        default: break;
    }

    ctx->pc = 0x1b3f98u;

    // 0x1b3f98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b3f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3f9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3fa0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b3fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b3fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3fa8: 0xc06cb8e  jal         func_1B2E38
    ctx->pc = 0x1B3FA8u;
    SET_GPR_U32(ctx, 31, 0x1B3FB0u);
    ctx->pc = 0x1B3FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FA8u;
    // 0x1b3fac: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2E38u, 0x1B3FA8u, 0x1B3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FB0u;
label_1b3fb0:
    // 0x1b3fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FB4u;
        // 0x1b3fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3FBCu;
    // 0x1b3fbc: 0x0  nop
    ctx->pc = 0x1b3fbcu;
    // NOP
    ctx->pc = 0x1b3fc0u;
}
