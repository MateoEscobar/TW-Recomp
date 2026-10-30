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

// Function: sub_0042D948
// Address: 0x42d948 - 0x42d970
void sub_0042D948_0x42d948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D948_0x42d948");
#endif

    switch (ctx->pc) {
        case 0x42d958u: goto label_42d958;
        case 0x42d968u: goto label_42d968;
        default: break;
    }

    ctx->pc = 0x42d948u;

    // 0x42d948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42d948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42d94c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42d950: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x42D950u;
    SET_GPR_U32(ctx, 31, 0x42D958u);
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x42D950u, 0x42D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D958u;
label_42d958:
    // 0x42d958: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42D958u;
    {
        const bool branch_taken_0x42d958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D958u;
        // 0x42d95c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d958) {
            ctx->pc = 0x42D968u;
            goto label_42d968;
        }
    }
    ctx->pc = 0x42D960u;
    // 0x42d960: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x42D960u;
    SET_GPR_U32(ctx, 31, 0x42D968u);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x42D960u, 0x42D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D968u;
label_42d968:
    // 0x42d968: 0x3e00008  jr          $ra
    ctx->pc = 0x42D968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D968u;
        // 0x42d96c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D970u;
}
