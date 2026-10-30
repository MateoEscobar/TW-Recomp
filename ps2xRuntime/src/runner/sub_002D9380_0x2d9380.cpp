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

// Function: sub_002D9380
// Address: 0x2d9380 - 0x2d93a0
void sub_002D9380_0x2d9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9380_0x2d9380");
#endif

    switch (ctx->pc) {
        case 0x2d9394u: goto label_2d9394;
        default: break;
    }

    ctx->pc = 0x2d9380u;

    // 0x2d9380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9388: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d9388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d938c: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2D938Cu;
    SET_GPR_U32(ctx, 31, 0x2D9394u);
    ctx->pc = 0x2D9390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D938Cu;
    // 0x2d9390: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2D938Cu, 0x2D9394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9394u;
label_2d9394:
    // 0x2d9394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9398: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9398u;
        // 0x2d939c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D93A0u;
}
