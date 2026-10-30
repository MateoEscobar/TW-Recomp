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

// Function: sub_00145670
// Address: 0x145670 - 0x145698
void sub_00145670_0x145670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145670_0x145670");
#endif

    switch (ctx->pc) {
        case 0x145680u: goto label_145680;
        default: break;
    }

    ctx->pc = 0x145670u;

    // 0x145670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145678: 0xc0527be  jal         func_149EF8
    ctx->pc = 0x145678u;
    SET_GPR_U32(ctx, 31, 0x145680u);
    ctx->pc = 0x149EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EF8u, 0x145678u, 0x145680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145680u;
label_145680:
    // 0x145680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145684: 0x3e00008  jr          $ra
    ctx->pc = 0x145684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145684u;
        // 0x145688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14568Cu;
    // 0x14568c: 0x0  nop
    ctx->pc = 0x14568cu;
    // NOP
    // 0x145690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x145690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x145694: 0x0  nop
    ctx->pc = 0x145694u;
    // NOP
    ctx->pc = 0x145698u;
}
