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

// Function: sub_00223A98
// Address: 0x223a98 - 0x223ad0
void sub_00223A98_0x223a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223A98_0x223a98");
#endif

    switch (ctx->pc) {
        case 0x223abcu: goto label_223abc;
        default: break;
    }

    ctx->pc = 0x223a98u;

    // 0x223a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223a9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223aa0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x223aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223aa4: 0x8c8301a8  lw          $v1, 0x1A8($a0)
    ctx->pc = 0x223aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x223aa8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223AA8u;
    {
        const bool branch_taken_0x223aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x223AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AA8u;
        // 0x223aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223aa8) {
            ctx->pc = 0x223AC0u;
            goto label_223ac0;
        }
    }
    ctx->pc = 0x223AB0u;
    // 0x223ab0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x223ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x223ab4: 0xc089998  jal         func_226660
    ctx->pc = 0x223AB4u;
    SET_GPR_U32(ctx, 31, 0x223ABCu);
    ctx->pc = 0x223AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AB4u;
    // 0x223ab8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x223AB4u, 0x223ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223ABCu;
label_223abc:
    // 0x223abc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x223abcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_223ac0:
    // 0x223ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223ac4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x223ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x223AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AC8u;
        // 0x223acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223AD0u;
}
