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

// Function: sub_0041DAD8
// Address: 0x41dad8 - 0x41daf8
void sub_0041DAD8_0x41dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DAD8_0x41dad8");
#endif

    switch (ctx->pc) {
        case 0x41dae8u: goto label_41dae8;
        default: break;
    }

    ctx->pc = 0x41dad8u;

    // 0x41dad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41dad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41dadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41dadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41dae0: 0xc069816  jal         func_1A6058
    ctx->pc = 0x41DAE0u;
    SET_GPR_U32(ctx, 31, 0x41DAE8u);
    ctx->pc = 0x1A6058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6058u, 0x41DAE0u, 0x41DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DAE8u;
label_41dae8:
    // 0x41dae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41dae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41daec: 0x3e00008  jr          $ra
    ctx->pc = 0x41DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DAECu;
        // 0x41daf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DAF4u;
    // 0x41daf4: 0x0  nop
    ctx->pc = 0x41daf4u;
    // NOP
    ctx->pc = 0x41daf8u;
}
