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

// Function: sub_001AAD70
// Address: 0x1aad70 - 0x1aad90
void sub_001AAD70_0x1aad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAD70_0x1aad70");
#endif

    switch (ctx->pc) {
        case 0x1aad84u: goto label_1aad84;
        default: break;
    }

    ctx->pc = 0x1aad70u;

    // 0x1aad70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aad74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aad78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aad7c: 0xc06ab3c  jal         func_1AACF0
    ctx->pc = 0x1AAD7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD84u);
    ctx->pc = 0x1AAD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD7Cu;
    // 0x1aad80: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AACF0u, 0x1AAD7Cu, 0x1AAD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD84u;
label_1aad84:
    // 0x1aad84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aad88: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD88u;
        // 0x1aad8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAD90u;
}
