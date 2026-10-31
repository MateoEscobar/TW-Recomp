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

// Function: sub_0014D408
// Address: 0x14d408 - 0x14d428
void sub_0014D408_0x14d408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D408_0x14d408");
#endif

    switch (ctx->pc) {
        case 0x14d418u: goto label_14d418;
        default: break;
    }

    ctx->pc = 0x14d408u;

    // 0x14d408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d410: 0xc053ff8  jal         func_14FFE0
    ctx->pc = 0x14D410u;
    SET_GPR_U32(ctx, 31, 0x14D418u);
    ctx->pc = 0x14D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D410u;
    // 0x14d414: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FFE0u, 0x14D410u, 0x14D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D418u;
label_14d418:
    // 0x14d418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d41c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D41Cu;
        // 0x14d420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D424u;
    // 0x14d424: 0x0  nop
    ctx->pc = 0x14d424u;
    // NOP
    ctx->pc = 0x14d428u;
}
