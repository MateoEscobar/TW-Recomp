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

// Function: sub_00223900
// Address: 0x223900 - 0x223920
void sub_00223900_0x223900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223900_0x223900");
#endif

    switch (ctx->pc) {
        case 0x223910u: goto label_223910;
        default: break;
    }

    ctx->pc = 0x223900u;

    // 0x223900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223908: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223908u;
    SET_GPR_U32(ctx, 31, 0x223910u);
    ctx->pc = 0x22390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223908u;
    // 0x22390c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223908u, 0x223910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223910u;
label_223910:
    // 0x223910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223914: 0x3e00008  jr          $ra
    ctx->pc = 0x223914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223914u;
        // 0x223918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22391Cu;
    // 0x22391c: 0x0  nop
    ctx->pc = 0x22391cu;
    // NOP
    ctx->pc = 0x223920u;
}
