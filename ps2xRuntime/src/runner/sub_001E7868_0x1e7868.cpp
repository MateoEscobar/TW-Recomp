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

// Function: sub_001E7868
// Address: 0x1e7868 - 0x1e7898
void sub_001E7868_0x1e7868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7868_0x1e7868");
#endif

    switch (ctx->pc) {
        case 0x1e7880u: goto label_1e7880;
        case 0x1e7888u: goto label_1e7888;
        default: break;
    }

    ctx->pc = 0x1e7868u;

    // 0x1e7868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e786c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e7870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7878: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1E7878u;
    SET_GPR_U32(ctx, 31, 0x1E7880u);
    ctx->pc = 0x1E787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7878u;
    // 0x1e787c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1E7878u, 0x1E7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7880u;
label_1e7880:
    // 0x1e7880: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1E7880u;
    SET_GPR_U32(ctx, 31, 0x1E7888u);
    ctx->pc = 0x1E7884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7880u;
    // 0x1e7884: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1E7880u, 0x1E7888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7888u;
label_1e7888:
    // 0x1e7888: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e7888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e788c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e788cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7890: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7890u;
        // 0x1e7894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7898u;
}
