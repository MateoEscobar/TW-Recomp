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

// Function: sub_00110570
// Address: 0x110570 - 0x110590
void sub_00110570_0x110570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110570_0x110570");
#endif

    switch (ctx->pc) {
        case 0x110580u: goto label_110580;
        default: break;
    }

    ctx->pc = 0x110570u;

    // 0x110570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110578: 0xc044ba4  jal         func_112E90
    ctx->pc = 0x110578u;
    SET_GPR_U32(ctx, 31, 0x110580u);
    ctx->pc = 0x112E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E90u, 0x110578u, 0x110580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110580u;
label_110580:
    // 0x110580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110584: 0x3e00008  jr          $ra
    ctx->pc = 0x110584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110584u;
        // 0x110588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11058Cu;
    // 0x11058c: 0x0  nop
    ctx->pc = 0x11058cu;
    // NOP
    ctx->pc = 0x110590u;
}
