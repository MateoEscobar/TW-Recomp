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

// Function: sub_004EF790
// Address: 0x4ef790 - 0x4ef7c0
void sub_004EF790_0x4ef790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF790_0x4ef790");
#endif

    switch (ctx->pc) {
        case 0x4ef7b4u: goto label_4ef7b4;
        default: break;
    }

    ctx->pc = 0x4ef790u;

    // 0x4ef790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ef794: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ef794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ef798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ef79c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x4ef79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x4ef7a0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4ef7a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4ef7a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EF7A4u;
    {
        const bool branch_taken_0x4ef7a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF7A4u;
        // 0x4ef7a8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef7a4) {
            ctx->pc = 0x4EF7B4u;
            goto label_4ef7b4;
        }
    }
    ctx->pc = 0x4EF7ACu;
    // 0x4ef7ac: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4EF7ACu;
    SET_GPR_U32(ctx, 31, 0x4EF7B4u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EF7ACu, 0x4EF7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF7B4u;
label_4ef7b4:
    // 0x4ef7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF7B8u;
        // 0x4ef7bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF7C0u;
}
