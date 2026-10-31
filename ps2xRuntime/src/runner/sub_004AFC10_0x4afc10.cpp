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

// Function: sub_004AFC10
// Address: 0x4afc10 - 0x4afc38
void sub_004AFC10_0x4afc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFC10_0x4afc10");
#endif

    switch (ctx->pc) {
        case 0x4afc20u: goto label_4afc20;
        default: break;
    }

    ctx->pc = 0x4afc10u;

    // 0x4afc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afc18: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4AFC18u;
    SET_GPR_U32(ctx, 31, 0x4AFC20u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4AFC18u, 0x4AFC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFC20u;
label_4afc20:
    // 0x4afc20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4afc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4afc24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afc28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4afc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4afc2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4afc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4afc30: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFC30u;
        // 0x4afc34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFC38u;
}
