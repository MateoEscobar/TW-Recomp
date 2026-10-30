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

// Function: sub_001C73E8
// Address: 0x1c73e8 - 0x1c7408
void sub_001C73E8_0x1c73e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C73E8_0x1c73e8");
#endif

    switch (ctx->pc) {
        case 0x1c73f8u: goto label_1c73f8;
        default: break;
    }

    ctx->pc = 0x1c73e8u;

    // 0x1c73e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c73e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c73ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c73ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c73f0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x1C73F0u;
    SET_GPR_U32(ctx, 31, 0x1C73F8u);
    ctx->pc = 0x1C73F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73F0u;
    // 0x1c73f4: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1C73F0u, 0x1C73F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73F8u;
label_1c73f8:
    // 0x1c73f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c73f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c73fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c73fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c7400: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7400u;
        // 0x1c7404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7408u;
}
