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

// Function: sub_00327590
// Address: 0x327590 - 0x3275b0
void sub_00327590_0x327590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327590_0x327590");
#endif

    switch (ctx->pc) {
        case 0x3275a4u: goto label_3275a4;
        default: break;
    }

    ctx->pc = 0x327590u;

    // 0x327590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x327594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32759c: 0xc0c9d74  jal         func_3275D0
    ctx->pc = 0x32759Cu;
    SET_GPR_U32(ctx, 31, 0x3275A4u);
    ctx->pc = 0x3275A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32759Cu;
    // 0x3275a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275D0u, 0x32759Cu, 0x3275A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3275A4u;
label_3275a4:
    // 0x3275a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3275a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3275a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3275A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3275ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275A8u;
        // 0x3275ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3275A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3275B0u;
}
