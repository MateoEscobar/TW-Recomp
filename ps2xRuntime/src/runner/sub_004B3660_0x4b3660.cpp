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

// Function: sub_004B3660
// Address: 0x4b3660 - 0x4b3680
void sub_004B3660_0x4b3660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3660_0x4b3660");
#endif

    switch (ctx->pc) {
        case 0x4b3670u: goto label_4b3670;
        default: break;
    }

    ctx->pc = 0x4b3660u;

    // 0x4b3660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3668: 0xc12ceae  jal         func_4B3AB8
    ctx->pc = 0x4B3668u;
    SET_GPR_U32(ctx, 31, 0x4B3670u);
    ctx->pc = 0x4B3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3AB8u, 0x4B3668u, 0x4B3670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3670u;
label_4b3670:
    // 0x4b3670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3674: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3674u;
        // 0x4b3678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B367Cu;
    // 0x4b367c: 0x0  nop
    ctx->pc = 0x4b367cu;
    // NOP
    ctx->pc = 0x4b3680u;
}
