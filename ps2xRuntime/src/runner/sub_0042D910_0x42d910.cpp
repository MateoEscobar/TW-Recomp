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

// Function: sub_0042D910
// Address: 0x42d910 - 0x42d948
void sub_0042D910_0x42d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D910_0x42d910");
#endif

    switch (ctx->pc) {
        case 0x42d920u: goto label_42d920;
        default: break;
    }

    ctx->pc = 0x42d910u;

    // 0x42d910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42d914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42d918: 0xc10b262  jal         func_42C988
    ctx->pc = 0x42D918u;
    SET_GPR_U32(ctx, 31, 0x42D920u);
    ctx->pc = 0x42C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C988u, 0x42D918u, 0x42D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D920u;
label_42d920:
    // 0x42d920: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42d924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42d924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42d928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42d928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42d92c: 0xdc640020  ld          $a0, 0x20($v1)
    ctx->pc = 0x42d92cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x42d930: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x42d930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d934: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x42d934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x42d938: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x42d938u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x42d93c: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x42d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x42d940: 0x3e00008  jr          $ra
    ctx->pc = 0x42D940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D940u;
        // 0x42d944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D948u;
}
