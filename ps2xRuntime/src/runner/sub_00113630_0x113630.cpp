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

// Function: sub_00113630
// Address: 0x113630 - 0x113658
void sub_00113630_0x113630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113630_0x113630");
#endif

    switch (ctx->pc) {
        case 0x113648u: goto label_113648;
        default: break;
    }

    ctx->pc = 0x113630u;

    // 0x113630: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113634: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113638: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113638u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x11363c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113640: 0xc04431c  jal         func_110C70
    ctx->pc = 0x113640u;
    SET_GPR_U32(ctx, 31, 0x113648u);
    ctx->pc = 0x110C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C70u, 0x113640u, 0x113648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113648u;
label_113648:
    // 0x113648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11364c: 0x3e00008  jr          $ra
    ctx->pc = 0x11364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11364Cu;
        // 0x113650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11364Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113654u;
    // 0x113654: 0x0  nop
    ctx->pc = 0x113654u;
    // NOP
    ctx->pc = 0x113658u;
}
