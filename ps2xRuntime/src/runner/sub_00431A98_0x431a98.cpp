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

// Function: sub_00431A98
// Address: 0x431a98 - 0x431ac0
void sub_00431A98_0x431a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431A98_0x431a98");
#endif

    switch (ctx->pc) {
        case 0x431aacu: goto label_431aac;
        default: break;
    }

    ctx->pc = 0x431a98u;

    // 0x431a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x431a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x431a9c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x431a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x431aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x431aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x431aa4: 0xc10c91e  jal         func_432478
    ctx->pc = 0x431AA4u;
    SET_GPR_U32(ctx, 31, 0x431AACu);
    ctx->pc = 0x431AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431AA4u;
    // 0x431aa8: 0x24a515f8  addiu       $a1, $a1, 0x15F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432478u, 0x431AA4u, 0x431AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431AACu;
label_431aac:
    // 0x431aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x431aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x431ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x431AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431AB0u;
        // 0x431ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431AB8u;
    // 0x431ab8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x431ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x431abc: 0x0  nop
    ctx->pc = 0x431abcu;
    // NOP
    ctx->pc = 0x431ac0u;
}
