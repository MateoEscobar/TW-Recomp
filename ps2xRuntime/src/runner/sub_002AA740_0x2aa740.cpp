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

// Function: sub_002AA740
// Address: 0x2aa740 - 0x2aa760
void sub_002AA740_0x2aa740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA740_0x2aa740");
#endif

    switch (ctx->pc) {
        case 0x2aa754u: goto label_2aa754;
        default: break;
    }

    ctx->pc = 0x2aa740u;

    // 0x2aa740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa748: 0x8085001e  lb          $a1, 0x1E($a0)
    ctx->pc = 0x2aa748u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x2aa74c: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2AA74Cu;
    SET_GPR_U32(ctx, 31, 0x2AA754u);
    ctx->pc = 0x2AA750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA74Cu;
    // 0x2aa750: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2AA74Cu, 0x2AA754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA754u;
label_2aa754:
    // 0x2aa754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa758: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA758u;
        // 0x2aa75c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA760u;
}
