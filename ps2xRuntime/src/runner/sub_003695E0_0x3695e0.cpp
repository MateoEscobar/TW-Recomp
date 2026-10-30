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

// Function: sub_003695E0
// Address: 0x3695e0 - 0x369600
void sub_003695E0_0x3695e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003695E0_0x3695e0");
#endif

    switch (ctx->pc) {
        case 0x3695f0u: goto label_3695f0;
        default: break;
    }

    ctx->pc = 0x3695e0u;

    // 0x3695e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3695e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3695e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3695e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3695e8: 0xc051878  jal         func_1461E0
    ctx->pc = 0x3695E8u;
    SET_GPR_U32(ctx, 31, 0x3695F0u);
    ctx->pc = 0x1461E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1461E0u, 0x3695E8u, 0x3695F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3695F0u;
label_3695f0:
    // 0x3695f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3695f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3695f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3695f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3695F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3695FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695F8u;
        // 0x3695fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3695F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369600u;
}
