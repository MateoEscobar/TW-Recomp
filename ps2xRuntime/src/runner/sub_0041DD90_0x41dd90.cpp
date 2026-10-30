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

// Function: sub_0041DD90
// Address: 0x41dd90 - 0x41ddb8
void sub_0041DD90_0x41dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DD90_0x41dd90");
#endif

    switch (ctx->pc) {
        case 0x41ddacu: goto label_41ddac;
        default: break;
    }

    ctx->pc = 0x41dd90u;

    // 0x41dd90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41dd94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41dd94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41dd98: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41dd9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41DD9Cu;
    {
        const bool branch_taken_0x41dd9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DD9Cu;
        // 0x41dda0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dd9c) {
            ctx->pc = 0x41DDACu;
            goto label_41ddac;
        }
    }
    ctx->pc = 0x41DDA4u;
    // 0x41dda4: 0xc106918  jal         func_41A460
    ctx->pc = 0x41DDA4u;
    SET_GPR_U32(ctx, 31, 0x41DDACu);
    ctx->pc = 0x41DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DDA4u;
    // 0x41dda8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A460u, 0x41DDA4u, 0x41DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DDACu;
label_41ddac:
    // 0x41ddac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ddacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ddb0: 0x3e00008  jr          $ra
    ctx->pc = 0x41DDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DDB0u;
        // 0x41ddb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DDB8u;
}
