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

// Function: sub_004EB040
// Address: 0x4eb040 - 0x4eb070
void sub_004EB040_0x4eb040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB040_0x4eb040");
#endif

    switch (ctx->pc) {
        case 0x4eb064u: goto label_4eb064;
        default: break;
    }

    ctx->pc = 0x4eb040u;

    // 0x4eb040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eb040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eb044: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4eb044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4eb048: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4eb048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4eb04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eb04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eb050: 0x2442d418  addiu       $v0, $v0, -0x2BE8
    ctx->pc = 0x4eb050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956056));
    // 0x4eb054: 0x2463d440  addiu       $v1, $v1, -0x2BC0
    ctx->pc = 0x4eb054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956096));
    // 0x4eb058: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x4eb058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x4eb05c: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4EB05Cu;
    SET_GPR_U32(ctx, 31, 0x4EB064u);
    ctx->pc = 0x4EB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB05Cu;
    // 0x4eb060: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EB05Cu, 0x4EB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB064u;
label_4eb064:
    // 0x4eb064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb068: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB068u;
        // 0x4eb06c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB070u;
}
