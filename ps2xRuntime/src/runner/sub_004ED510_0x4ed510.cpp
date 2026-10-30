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

// Function: sub_004ED510
// Address: 0x4ed510 - 0x4ed538
void sub_004ED510_0x4ed510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED510_0x4ed510");
#endif

    switch (ctx->pc) {
        case 0x4ed52cu: goto label_4ed52c;
        default: break;
    }

    ctx->pc = 0x4ed510u;

    // 0x4ed510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed514: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ed514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ed518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed51c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4ed51cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed520: 0x2442ef58  addiu       $v0, $v0, -0x10A8
    ctx->pc = 0x4ed520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963032));
    // 0x4ed524: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4ED524u;
    SET_GPR_U32(ctx, 31, 0x4ED52Cu);
    ctx->pc = 0x4ED528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED524u;
    // 0x4ed528: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4ED524u, 0x4ED52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED52Cu;
label_4ed52c:
    // 0x4ed52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed530: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED530u;
        // 0x4ed534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED538u;
}
