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

// Function: sub_00369120
// Address: 0x369120 - 0x369140
void sub_00369120_0x369120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369120_0x369120");
#endif

    switch (ctx->pc) {
        case 0x369130u: goto label_369130;
        default: break;
    }

    ctx->pc = 0x369120u;

    // 0x369120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x369124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x369128: 0xc063812  jal         func_18E048
    ctx->pc = 0x369128u;
    SET_GPR_U32(ctx, 31, 0x369130u);
    ctx->pc = 0x18E048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E048u, 0x369128u, 0x369130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369130u;
label_369130:
    // 0x369130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x369134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369138: 0x3e00008  jr          $ra
    ctx->pc = 0x369138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369138u;
        // 0x36913c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369140u;
}
