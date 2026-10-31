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

// Function: sub_004EF868
// Address: 0x4ef868 - 0x4ef8a0
void sub_004EF868_0x4ef868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF868_0x4ef868");
#endif

    switch (ctx->pc) {
        case 0x4ef88cu: goto label_4ef88c;
        default: break;
    }

    ctx->pc = 0x4ef868u;

    // 0x4ef868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ef86c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ef86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ef870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ef874: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x4ef874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x4ef878: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4ef878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4ef87c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EF87Cu;
    {
        const bool branch_taken_0x4ef87c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF87Cu;
        // 0x4ef880: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef87c) {
            ctx->pc = 0x4EF88Cu;
            goto label_4ef88c;
        }
    }
    ctx->pc = 0x4EF884u;
    // 0x4ef884: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4EF884u;
    SET_GPR_U32(ctx, 31, 0x4EF88Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EF884u, 0x4EF88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF88Cu;
label_4ef88c:
    // 0x4ef88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef890: 0x3e00008  jr          $ra
    ctx->pc = 0x4EF890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF890u;
        // 0x4ef894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF898u;
    // 0x4ef898: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ef898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ef89c: 0x0  nop
    ctx->pc = 0x4ef89cu;
    // NOP
    ctx->pc = 0x4ef8a0u;
}
