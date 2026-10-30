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

// Function: sub_0014C8F8
// Address: 0x14c8f8 - 0x14c918
void sub_0014C8F8_0x14c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C8F8_0x14c8f8");
#endif

    switch (ctx->pc) {
        case 0x14c908u: goto label_14c908;
        default: break;
    }

    ctx->pc = 0x14c8f8u;

    // 0x14c8f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c900: 0xc05401e  jal         func_150078
    ctx->pc = 0x14C900u;
    SET_GPR_U32(ctx, 31, 0x14C908u);
    ctx->pc = 0x14C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C900u;
    // 0x14c904: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150078u, 0x14C900u, 0x14C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C908u;
label_14c908:
    // 0x14c908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c90c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C90Cu;
        // 0x14c910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C914u;
    // 0x14c914: 0x0  nop
    ctx->pc = 0x14c914u;
    // NOP
    ctx->pc = 0x14c918u;
}
