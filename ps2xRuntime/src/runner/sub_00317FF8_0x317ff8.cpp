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

// Function: sub_00317FF8
// Address: 0x317ff8 - 0x318020
void sub_00317FF8_0x317ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317FF8_0x317ff8");
#endif

    switch (ctx->pc) {
        case 0x318010u: goto label_318010;
        default: break;
    }

    ctx->pc = 0x317ff8u;

    // 0x317ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x317ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x317ffc: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x317ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x318000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x318000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318004: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x318004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x318008: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x318008u;
    SET_GPR_U32(ctx, 31, 0x318010u);
    ctx->pc = 0x31800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318008u;
    // 0x31800c: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x318008u, 0x318010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318010u;
label_318010:
    // 0x318010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318014: 0x3e00008  jr          $ra
    ctx->pc = 0x318014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318014u;
        // 0x318018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31801Cu;
    // 0x31801c: 0x0  nop
    ctx->pc = 0x31801cu;
    // NOP
    ctx->pc = 0x318020u;
}
