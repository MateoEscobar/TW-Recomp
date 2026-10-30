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

// Function: sub_0010F4B0
// Address: 0x10f4b0 - 0x10f4d0
void sub_0010F4B0_0x10f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F4B0_0x10f4b0");
#endif

    switch (ctx->pc) {
        case 0x10f4c0u: goto label_10f4c0;
        default: break;
    }

    ctx->pc = 0x10f4b0u;

    // 0x10f4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f4b8: 0xc043d14  jal         func_10F450
    ctx->pc = 0x10F4B8u;
    SET_GPR_U32(ctx, 31, 0x10F4C0u);
    ctx->pc = 0x10F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4B8u;
    // 0x10f4bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F450u, 0x10F4B8u, 0x10F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4C0u;
label_10f4c0:
    // 0x10f4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4C4u;
        // 0x10f4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4CCu;
    // 0x10f4cc: 0x0  nop
    ctx->pc = 0x10f4ccu;
    // NOP
    ctx->pc = 0x10f4d0u;
}
