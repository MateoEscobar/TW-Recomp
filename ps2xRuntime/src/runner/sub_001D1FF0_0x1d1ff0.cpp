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

// Function: sub_001D1FF0
// Address: 0x1d1ff0 - 0x1d2018
void sub_001D1FF0_0x1d1ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1FF0_0x1d1ff0");
#endif

    switch (ctx->pc) {
        case 0x1d200cu: goto label_1d200c;
        default: break;
    }

    ctx->pc = 0x1d1ff0u;

    // 0x1d1ff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d1ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ff4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d1ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1ffc: 0x8c44ec8c  lw          $a0, -0x1374($v0)
    ctx->pc = 0x1d1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50EC8Cu));
    // 0x1d2000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2004: 0xc0748e6  jal         func_1D2398
    ctx->pc = 0x1D2004u;
    SET_GPR_U32(ctx, 31, 0x1D200Cu);
    ctx->pc = 0x1D2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2398u, 0x1D2004u, 0x1D200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D200Cu;
label_1d200c:
    // 0x1d200c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d200cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2010: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2010u;
        // 0x1d2014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2018u;
}
