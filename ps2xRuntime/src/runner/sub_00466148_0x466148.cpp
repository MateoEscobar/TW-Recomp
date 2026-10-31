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

// Function: sub_00466148
// Address: 0x466148 - 0x466168
void sub_00466148_0x466148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466148_0x466148");
#endif

    switch (ctx->pc) {
        case 0x466158u: goto label_466158;
        default: break;
    }

    ctx->pc = 0x466148u;

    // 0x466148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x466148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46614c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466150: 0xc1192a2  jal         func_464A88
    ctx->pc = 0x466150u;
    SET_GPR_U32(ctx, 31, 0x466158u);
    ctx->pc = 0x464A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464A88u, 0x466150u, 0x466158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466158u;
label_466158:
    // 0x466158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46615c: 0x3e00008  jr          $ra
    ctx->pc = 0x46615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46615Cu;
        // 0x466160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466164u;
    // 0x466164: 0x0  nop
    ctx->pc = 0x466164u;
    // NOP
    ctx->pc = 0x466168u;
}
