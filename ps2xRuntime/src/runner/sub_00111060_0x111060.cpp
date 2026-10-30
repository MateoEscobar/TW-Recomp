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

// Function: sub_00111060
// Address: 0x111060 - 0x111080
void sub_00111060_0x111060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111060_0x111060");
#endif

    switch (ctx->pc) {
        case 0x111074u: goto label_111074;
        default: break;
    }

    ctx->pc = 0x111060u;

    // 0x111060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111064: 0x248401e0  addiu       $a0, $a0, 0x1E0
    ctx->pc = 0x111064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x111068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11106c: 0xc0456ec  jal         func_115BB0
    ctx->pc = 0x11106Cu;
    SET_GPR_U32(ctx, 31, 0x111074u);
    ctx->pc = 0x111070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11106Cu;
    // 0x111070: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115BB0u, 0x11106Cu, 0x111074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111074u;
label_111074:
    // 0x111074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111078: 0x3e00008  jr          $ra
    ctx->pc = 0x111078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111078u;
        // 0x11107c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111080u;
}
