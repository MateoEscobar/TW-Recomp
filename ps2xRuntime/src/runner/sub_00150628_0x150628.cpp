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

// Function: sub_00150628
// Address: 0x150628 - 0x150660
void sub_00150628_0x150628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150628_0x150628");
#endif

    switch (ctx->pc) {
        case 0x150638u: goto label_150638;
        case 0x150640u: goto label_150640;
        case 0x150648u: goto label_150648;
        case 0x150650u: goto label_150650;
        default: break;
    }

    ctx->pc = 0x150628u;

    // 0x150628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15062c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150630: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150630u;
    SET_GPR_U32(ctx, 31, 0x150638u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150630u, 0x150638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150638u;
label_150638:
    // 0x150638: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150638u;
    SET_GPR_U32(ctx, 31, 0x150640u);
    ctx->pc = 0x15063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150638u;
    // 0x15063c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150638u, 0x150640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150640u;
label_150640:
    // 0x150640: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150640u;
    SET_GPR_U32(ctx, 31, 0x150648u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150640u, 0x150648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150648u;
label_150648:
    // 0x150648: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150648u;
    SET_GPR_U32(ctx, 31, 0x150650u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150648u, 0x150650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150650u;
label_150650:
    // 0x150650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150654: 0x3e00008  jr          $ra
    ctx->pc = 0x150654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150654u;
        // 0x150658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15065Cu;
    // 0x15065c: 0x0  nop
    ctx->pc = 0x15065cu;
    // NOP
    ctx->pc = 0x150660u;
}
