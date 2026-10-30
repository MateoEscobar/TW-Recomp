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

// Function: sub_0014C358
// Address: 0x14c358 - 0x14c378
void sub_0014C358_0x14c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C358_0x14c358");
#endif

    switch (ctx->pc) {
        case 0x14c368u: goto label_14c368;
        default: break;
    }

    ctx->pc = 0x14c358u;

    // 0x14c358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c35c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c360: 0xc0530de  jal         func_14C378
    ctx->pc = 0x14C360u;
    SET_GPR_U32(ctx, 31, 0x14C368u);
    ctx->pc = 0x14C378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C378u, 0x14C360u, 0x14C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C368u;
label_14c368:
    // 0x14c368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c36c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C36Cu;
        // 0x14c370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C374u;
    // 0x14c374: 0x0  nop
    ctx->pc = 0x14c374u;
    // NOP
    ctx->pc = 0x14c378u;
}
