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

// Function: sub_003A33B0
// Address: 0x3a33b0 - 0x3a33d8
void sub_003A33B0_0x3a33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A33B0_0x3a33b0");
#endif

    switch (ctx->pc) {
        case 0x3a33c4u: goto label_3a33c4;
        default: break;
    }

    ctx->pc = 0x3a33b0u;

    // 0x3a33b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a33b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a33b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a33b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a33b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a33bc: 0xc0e8cf6  jal         func_3A33D8
    ctx->pc = 0x3A33BCu;
    SET_GPR_U32(ctx, 31, 0x3A33C4u);
    ctx->pc = 0x3A33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A33BCu;
    // 0x3a33c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A33D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A33D8u, 0x3A33BCu, 0x3A33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A33C4u;
label_3a33c4:
    // 0x3a33c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a33c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a33c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a33c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a33cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a33ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a33d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A33D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A33D0u;
        // 0x3a33d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A33D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A33D8u;
}
