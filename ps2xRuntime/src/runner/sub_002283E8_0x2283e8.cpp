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

// Function: sub_002283E8
// Address: 0x2283e8 - 0x228408
void sub_002283E8_0x2283e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002283E8_0x2283e8");
#endif

    switch (ctx->pc) {
        case 0x2283f8u: goto label_2283f8;
        default: break;
    }

    ctx->pc = 0x2283e8u;

    // 0x2283e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2283e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2283ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2283ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2283f0: 0xc089998  jal         func_226660
    ctx->pc = 0x2283F0u;
    SET_GPR_U32(ctx, 31, 0x2283F8u);
    ctx->pc = 0x2283F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2283F0u;
    // 0x2283f4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2283F0u, 0x2283F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283F8u;
label_2283f8:
    // 0x2283f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2283f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2283fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2283FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283FCu;
        // 0x228400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228404u;
    // 0x228404: 0x0  nop
    ctx->pc = 0x228404u;
    // NOP
    ctx->pc = 0x228408u;
}
