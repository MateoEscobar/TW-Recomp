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

// Function: sub_0040A290
// Address: 0x40a290 - 0x40a2b0
void sub_0040A290_0x40a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A290_0x40a290");
#endif

    switch (ctx->pc) {
        case 0x40a2a4u: goto label_40a2a4;
        default: break;
    }

    ctx->pc = 0x40a290u;

    // 0x40a290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40a294: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40a294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40a298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a29c: 0xc102880  jal         func_40A200
    ctx->pc = 0x40A29Cu;
    SET_GPR_U32(ctx, 31, 0x40A2A4u);
    ctx->pc = 0x40A2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A29Cu;
    // 0x40a2a0: 0x24c68158  addiu       $a2, $a2, -0x7EA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A200u, 0x40A29Cu, 0x40A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A2A4u;
label_40a2a4:
    // 0x40a2a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x40A2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A2A8u;
        // 0x40a2ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A2B0u;
}
