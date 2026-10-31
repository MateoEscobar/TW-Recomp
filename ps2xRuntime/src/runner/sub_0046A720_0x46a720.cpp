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

// Function: sub_0046A720
// Address: 0x46a720 - 0x46a748
void sub_0046A720_0x46a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A720_0x46a720");
#endif

    switch (ctx->pc) {
        case 0x46a73cu: goto label_46a73c;
        default: break;
    }

    ctx->pc = 0x46a720u;

    // 0x46a720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46a724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46a728: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x46a728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a72c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x46a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x46a730: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x46a730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46a734: 0xc11a36a  jal         func_468DA8
    ctx->pc = 0x46A734u;
    SET_GPR_U32(ctx, 31, 0x46A73Cu);
    ctx->pc = 0x46A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A734u;
    // 0x46a738: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x468DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468DA8u, 0x46A734u, 0x46A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A73Cu;
label_46a73c:
    // 0x46a73c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46a73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a740: 0x3e00008  jr          $ra
    ctx->pc = 0x46A740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A740u;
        // 0x46a744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A748u;
}
