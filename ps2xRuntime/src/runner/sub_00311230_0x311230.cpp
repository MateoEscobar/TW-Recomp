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

// Function: sub_00311230
// Address: 0x311230 - 0x311250
void sub_00311230_0x311230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311230_0x311230");
#endif

    switch (ctx->pc) {
        case 0x311240u: goto label_311240;
        default: break;
    }

    ctx->pc = 0x311230u;

    // 0x311230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x311234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311238: 0xc05a526  jal         func_169498
    ctx->pc = 0x311238u;
    SET_GPR_U32(ctx, 31, 0x311240u);
    ctx->pc = 0x31123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311238u;
    // 0x31123c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169498u, 0x311238u, 0x311240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311240u;
label_311240:
    // 0x311240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311244: 0x3e00008  jr          $ra
    ctx->pc = 0x311244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311244u;
        // 0x311248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31124Cu;
    // 0x31124c: 0x0  nop
    ctx->pc = 0x31124cu;
    // NOP
    ctx->pc = 0x311250u;
}
