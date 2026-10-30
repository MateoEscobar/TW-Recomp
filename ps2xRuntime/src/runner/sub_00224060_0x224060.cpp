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

// Function: sub_00224060
// Address: 0x224060 - 0x224080
void sub_00224060_0x224060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224060_0x224060");
#endif

    switch (ctx->pc) {
        case 0x224070u: goto label_224070;
        default: break;
    }

    ctx->pc = 0x224060u;

    // 0x224060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224068: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x224068u;
    SET_GPR_U32(ctx, 31, 0x224070u);
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x224068u, 0x224070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224070u;
label_224070:
    // 0x224070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224074: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x224074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x224078: 0x3e00008  jr          $ra
    ctx->pc = 0x224078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224078u;
        // 0x22407c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224080u;
}
