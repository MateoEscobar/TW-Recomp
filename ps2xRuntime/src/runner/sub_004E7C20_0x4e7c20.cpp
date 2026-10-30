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

// Function: sub_004E7C20
// Address: 0x4e7c20 - 0x4e7c50
void sub_004E7C20_0x4e7c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7C20_0x4e7c20");
#endif

    switch (ctx->pc) {
        case 0x4e7c44u: goto label_4e7c44;
        default: break;
    }

    ctx->pc = 0x4e7c20u;

    // 0x4e7c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e7c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e7c24: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e7c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e7c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e7c2c: 0x2442a9c8  addiu       $v0, $v0, -0x5638
    ctx->pc = 0x4e7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945224));
    // 0x4e7c30: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4e7c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4e7c34: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E7C34u;
    {
        const bool branch_taken_0x4e7c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7C34u;
        // 0x4e7c38: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7c34) {
            ctx->pc = 0x4E7C44u;
            goto label_4e7c44;
        }
    }
    ctx->pc = 0x4E7C3Cu;
    // 0x4e7c3c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4E7C3Cu;
    SET_GPR_U32(ctx, 31, 0x4E7C44u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4E7C3Cu, 0x4E7C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7C44u;
label_4e7c44:
    // 0x4e7c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e7c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e7c48: 0x3e00008  jr          $ra
    ctx->pc = 0x4E7C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7C48u;
        // 0x4e7c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7C50u;
}
