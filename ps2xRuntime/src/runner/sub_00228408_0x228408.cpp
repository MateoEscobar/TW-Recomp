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

// Function: sub_00228408
// Address: 0x228408 - 0x228428
void sub_00228408_0x228408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228408_0x228408");
#endif

    switch (ctx->pc) {
        case 0x228418u: goto label_228418;
        default: break;
    }

    ctx->pc = 0x228408u;

    // 0x228408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22840c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228410: 0xc089998  jal         func_226660
    ctx->pc = 0x228410u;
    SET_GPR_U32(ctx, 31, 0x228418u);
    ctx->pc = 0x228414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228410u;
    // 0x228414: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x228410u, 0x228418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228418u;
label_228418:
    // 0x228418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22841c: 0x3e00008  jr          $ra
    ctx->pc = 0x22841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22841Cu;
        // 0x228420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22841Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228424u;
    // 0x228424: 0x0  nop
    ctx->pc = 0x228424u;
    // NOP
    ctx->pc = 0x228428u;
}
