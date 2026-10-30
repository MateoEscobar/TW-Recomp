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

// Function: sub_00110528
// Address: 0x110528 - 0x110548
void sub_00110528_0x110528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110528_0x110528");
#endif

    switch (ctx->pc) {
        case 0x110538u: goto label_110538;
        default: break;
    }

    ctx->pc = 0x110528u;

    // 0x110528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11052c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110530: 0xc044b8c  jal         func_112E30
    ctx->pc = 0x110530u;
    SET_GPR_U32(ctx, 31, 0x110538u);
    ctx->pc = 0x112E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E30u, 0x110530u, 0x110538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110538u;
label_110538:
    // 0x110538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11053c: 0x3e00008  jr          $ra
    ctx->pc = 0x11053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11053Cu;
        // 0x110540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110544u;
    // 0x110544: 0x0  nop
    ctx->pc = 0x110544u;
    // NOP
    ctx->pc = 0x110548u;
}
