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

// Function: sub_001E7338
// Address: 0x1e7338 - 0x1e7358
void sub_001E7338_0x1e7338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7338_0x1e7338");
#endif

    switch (ctx->pc) {
        case 0x1e7348u: goto label_1e7348;
        default: break;
    }

    ctx->pc = 0x1e7338u;

    // 0x1e7338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e733c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e733cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7340: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x1E7340u;
    SET_GPR_U32(ctx, 31, 0x1E7348u);
    ctx->pc = 0x1E7344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7340u;
    // 0x1e7344: 0x24840310  addiu       $a0, $a0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1E7340u, 0x1E7348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7348u;
label_1e7348:
    // 0x1e7348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e734c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E734Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E734Cu;
        // 0x1e7350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E734Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7354u;
    // 0x1e7354: 0x0  nop
    ctx->pc = 0x1e7354u;
    // NOP
    ctx->pc = 0x1e7358u;
}
