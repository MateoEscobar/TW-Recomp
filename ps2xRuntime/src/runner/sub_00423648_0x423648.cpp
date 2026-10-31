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

// Function: sub_00423648
// Address: 0x423648 - 0x423670
void sub_00423648_0x423648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423648_0x423648");
#endif

    switch (ctx->pc) {
        case 0x423664u: goto label_423664;
        default: break;
    }

    ctx->pc = 0x423648u;

    // 0x423648: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x423648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42364c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x423650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x423650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x423654: 0x8c44504c  lw          $a0, 0x504C($v0)
    ctx->pc = 0x423654u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51504Cu));
    // 0x423658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42365c: 0xc108cea  jal         func_4233A8
    ctx->pc = 0x42365Cu;
    SET_GPR_U32(ctx, 31, 0x423664u);
    ctx->pc = 0x4233A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4233A8u, 0x42365Cu, 0x423664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423664u;
label_423664:
    // 0x423664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423668: 0x3e00008  jr          $ra
    ctx->pc = 0x423668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423668u;
        // 0x42366c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423670u;
}
