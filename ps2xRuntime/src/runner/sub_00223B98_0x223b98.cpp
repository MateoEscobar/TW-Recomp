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

// Function: sub_00223B98
// Address: 0x223b98 - 0x223bc0
void sub_00223B98_0x223b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223B98_0x223b98");
#endif

    switch (ctx->pc) {
        case 0x223bb4u: goto label_223bb4;
        default: break;
    }

    ctx->pc = 0x223b98u;

    // 0x223b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223ba0: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x223ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x223ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223BA4u;
    {
        const bool branch_taken_0x223ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BA4u;
        // 0x223ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ba4) {
            ctx->pc = 0x223BB4u;
            goto label_223bb4;
        }
    }
    ctx->pc = 0x223BACu;
    // 0x223bac: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223BACu;
    SET_GPR_U32(ctx, 31, 0x223BB4u);
    ctx->pc = 0x223BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BACu;
    // 0x223bb0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223BACu, 0x223BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BB4u;
label_223bb4:
    // 0x223bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x223BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BB8u;
        // 0x223bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223BC0u;
}
