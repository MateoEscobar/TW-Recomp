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

// Function: sub_00110618
// Address: 0x110618 - 0x110638
void sub_00110618_0x110618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110618_0x110618");
#endif

    switch (ctx->pc) {
        case 0x110628u: goto label_110628;
        default: break;
    }

    ctx->pc = 0x110618u;

    // 0x110618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11061c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110620: 0xc044bae  jal         func_112EB8
    ctx->pc = 0x110620u;
    SET_GPR_U32(ctx, 31, 0x110628u);
    ctx->pc = 0x112EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112EB8u, 0x110620u, 0x110628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110628u;
label_110628:
    // 0x110628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11062c: 0x3e00008  jr          $ra
    ctx->pc = 0x11062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11062Cu;
        // 0x110630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110634u;
    // 0x110634: 0x0  nop
    ctx->pc = 0x110634u;
    // NOP
    ctx->pc = 0x110638u;
}
