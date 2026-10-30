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

// Function: sub_003275B0
// Address: 0x3275b0 - 0x3275d0
void sub_003275B0_0x3275b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003275B0_0x3275b0");
#endif

    switch (ctx->pc) {
        case 0x3275c0u: goto label_3275c0;
        default: break;
    }

    ctx->pc = 0x3275b0u;

    // 0x3275b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3275b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3275b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3275b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3275b8: 0xc0c9d74  jal         func_3275D0
    ctx->pc = 0x3275B8u;
    SET_GPR_U32(ctx, 31, 0x3275C0u);
    ctx->pc = 0x3275BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3275B8u;
    // 0x3275bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275D0u, 0x3275B8u, 0x3275C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3275C0u;
label_3275c0:
    // 0x3275c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3275c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3275c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3275C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3275C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275C4u;
        // 0x3275c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3275C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3275CCu;
    // 0x3275cc: 0x0  nop
    ctx->pc = 0x3275ccu;
    // NOP
    ctx->pc = 0x3275d0u;
}
