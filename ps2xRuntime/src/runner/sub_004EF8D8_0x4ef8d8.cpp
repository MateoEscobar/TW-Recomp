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

// Function: sub_004EF8D8
// Address: 0x4ef8d8 - 0x4ef908
void sub_004EF8D8_0x4ef8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF8D8_0x4ef8d8");
#endif

    switch (ctx->pc) {
        case 0x4ef8fcu: goto label_4ef8fc;
        default: break;
    }

    ctx->pc = 0x4ef8d8u;

    // 0x4ef8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ef8dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ef8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ef8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ef8e4: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x4ef8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x4ef8e8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4ef8e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4ef8ec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EF8ECu;
    {
        const bool branch_taken_0x4ef8ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF8ECu;
        // 0x4ef8f0: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef8ec) {
            ctx->pc = 0x4EF8FCu;
            goto label_4ef8fc;
        }
    }
    ctx->pc = 0x4EF8F4u;
    // 0x4ef8f4: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4EF8F4u;
    SET_GPR_U32(ctx, 31, 0x4EF8FCu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EF8F4u, 0x4EF8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF8FCu;
label_4ef8fc:
    // 0x4ef8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef900: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF900u;
        // 0x4ef904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF908u;
}
