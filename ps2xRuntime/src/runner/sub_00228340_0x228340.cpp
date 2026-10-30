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

// Function: sub_00228340
// Address: 0x228340 - 0x228360
void sub_00228340_0x228340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228340_0x228340");
#endif

    switch (ctx->pc) {
        case 0x228350u: goto label_228350;
        default: break;
    }

    ctx->pc = 0x228340u;

    // 0x228340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228348: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228348u;
    SET_GPR_U32(ctx, 31, 0x228350u);
    ctx->pc = 0x22834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228348u;
    // 0x22834c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228348u, 0x228350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228350u;
label_228350:
    // 0x228350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228354: 0x3e00008  jr          $ra
    ctx->pc = 0x228354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228354u;
        // 0x228358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22835Cu;
    // 0x22835c: 0x0  nop
    ctx->pc = 0x22835cu;
    // NOP
    ctx->pc = 0x228360u;
}
