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

// Function: sub_004F0270
// Address: 0x4f0270 - 0x4f02a0
void sub_004F0270_0x4f0270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0270_0x4f0270");
#endif

    switch (ctx->pc) {
        case 0x4f0294u: goto label_4f0294;
        default: break;
    }

    ctx->pc = 0x4f0270u;

    // 0x4f0270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f0274: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f0274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4f0278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f027c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x4f027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x4f0280: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4f0280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4f0284: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F0284u;
    {
        const bool branch_taken_0x4f0284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0284u;
        // 0x4f0288: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0284) {
            ctx->pc = 0x4F0294u;
            goto label_4f0294;
        }
    }
    ctx->pc = 0x4F028Cu;
    // 0x4f028c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4F028Cu;
    SET_GPR_U32(ctx, 31, 0x4F0294u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F028Cu, 0x4F0294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0294u;
label_4f0294:
    // 0x4f0294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0298: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0298u;
        // 0x4f029c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F02A0u;
}
