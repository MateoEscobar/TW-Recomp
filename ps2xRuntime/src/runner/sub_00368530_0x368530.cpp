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

// Function: sub_00368530
// Address: 0x368530 - 0x368550
void sub_00368530_0x368530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368530_0x368530");
#endif

    switch (ctx->pc) {
        case 0x368540u: goto label_368540;
        default: break;
    }

    ctx->pc = 0x368530u;

    // 0x368530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368538: 0xc0639e0  jal         func_18E780
    ctx->pc = 0x368538u;
    SET_GPR_U32(ctx, 31, 0x368540u);
    ctx->pc = 0x18E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E780u, 0x368538u, 0x368540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368540u;
label_368540:
    // 0x368540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368548: 0x3e00008  jr          $ra
    ctx->pc = 0x368548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368548u;
        // 0x36854c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368550u;
}
