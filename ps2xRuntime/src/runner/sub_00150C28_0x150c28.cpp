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

// Function: sub_00150C28
// Address: 0x150c28 - 0x150c60
void sub_00150C28_0x150c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150C28_0x150c28");
#endif

    switch (ctx->pc) {
        case 0x150c38u: goto label_150c38;
        case 0x150c40u: goto label_150c40;
        case 0x150c48u: goto label_150c48;
        case 0x150c50u: goto label_150c50;
        default: break;
    }

    ctx->pc = 0x150c28u;

    // 0x150c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150c30: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150C30u;
    SET_GPR_U32(ctx, 31, 0x150C38u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150C30u, 0x150C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C38u;
label_150c38:
    // 0x150c38: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150C38u;
    SET_GPR_U32(ctx, 31, 0x150C40u);
    ctx->pc = 0x150C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C38u;
    // 0x150c3c: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150C38u, 0x150C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C40u;
label_150c40:
    // 0x150c40: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150C40u;
    SET_GPR_U32(ctx, 31, 0x150C48u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150C40u, 0x150C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C48u;
label_150c48:
    // 0x150c48: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150C48u;
    SET_GPR_U32(ctx, 31, 0x150C50u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150C48u, 0x150C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C50u;
label_150c50:
    // 0x150c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150c54: 0x3e00008  jr          $ra
    ctx->pc = 0x150C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C54u;
        // 0x150c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150C5Cu;
    // 0x150c5c: 0x0  nop
    ctx->pc = 0x150c5cu;
    // NOP
    ctx->pc = 0x150c60u;
}
