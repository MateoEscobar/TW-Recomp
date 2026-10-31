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

// Function: sub_0040CC40
// Address: 0x40cc40 - 0x40cc68
void sub_0040CC40_0x40cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CC40_0x40cc40");
#endif

    switch (ctx->pc) {
        case 0x40cc5cu: goto label_40cc5c;
        default: break;
    }

    ctx->pc = 0x40cc40u;

    // 0x40cc40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x40cc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cc44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x40cc48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40cc4c: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x40cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x40cc50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40cc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40cc54: 0xc103868  jal         func_40E1A0
    ctx->pc = 0x40CC54u;
    SET_GPR_U32(ctx, 31, 0x40CC5Cu);
    ctx->pc = 0x40E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E1A0u, 0x40CC54u, 0x40CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CC5Cu;
label_40cc5c:
    // 0x40cc5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40cc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40cc60: 0x3e00008  jr          $ra
    ctx->pc = 0x40CC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CC60u;
        // 0x40cc64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CC68u;
}
