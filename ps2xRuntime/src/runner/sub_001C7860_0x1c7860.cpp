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

// Function: sub_001C7860
// Address: 0x1c7860 - 0x1c7890
void sub_001C7860_0x1c7860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7860_0x1c7860");
#endif

    switch (ctx->pc) {
        case 0x1c7878u: goto label_1c7878;
        case 0x1c7880u: goto label_1c7880;
        default: break;
    }

    ctx->pc = 0x1c7860u;

    // 0x1c7860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7864: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c7864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c7868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c786c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7870: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1C7870u;
    SET_GPR_U32(ctx, 31, 0x1C7878u);
    ctx->pc = 0x1C7874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7870u;
    // 0x1c7874: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1C7870u, 0x1C7878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7878u;
label_1c7878:
    // 0x1c7878: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1C7878u;
    SET_GPR_U32(ctx, 31, 0x1C7880u);
    ctx->pc = 0x1C787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7878u;
    // 0x1c787c: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1C7878u, 0x1C7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7880u;
label_1c7880:
    // 0x1c7880: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7888: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7888u;
        // 0x1c788c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7890u;
}
