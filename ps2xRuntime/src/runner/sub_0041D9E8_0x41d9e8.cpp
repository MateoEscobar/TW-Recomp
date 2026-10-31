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

// Function: sub_0041D9E8
// Address: 0x41d9e8 - 0x41da08
void sub_0041D9E8_0x41d9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D9E8_0x41d9e8");
#endif

    switch (ctx->pc) {
        case 0x41d9f8u: goto label_41d9f8;
        default: break;
    }

    ctx->pc = 0x41d9e8u;

    // 0x41d9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d9ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d9f0: 0xc067bbe  jal         func_19EEF8
    ctx->pc = 0x41D9F0u;
    SET_GPR_U32(ctx, 31, 0x41D9F8u);
    ctx->pc = 0x19EEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEF8u, 0x41D9F0u, 0x41D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D9F8u;
label_41d9f8:
    // 0x41d9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x41D9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D9FCu;
        // 0x41da00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DA04u;
    // 0x41da04: 0x0  nop
    ctx->pc = 0x41da04u;
    // NOP
    ctx->pc = 0x41da08u;
}
