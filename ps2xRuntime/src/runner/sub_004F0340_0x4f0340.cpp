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

// Function: sub_004F0340
// Address: 0x4f0340 - 0x4f0370
void sub_004F0340_0x4f0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0340_0x4f0340");
#endif

    switch (ctx->pc) {
        case 0x4f0364u: goto label_4f0364;
        default: break;
    }

    ctx->pc = 0x4f0340u;

    // 0x4f0340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f0344: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f0344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4f0348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f034c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x4f034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x4f0350: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4f0350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4f0354: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F0354u;
    {
        const bool branch_taken_0x4f0354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0354u;
        // 0x4f0358: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0354) {
            ctx->pc = 0x4F0364u;
            goto label_4f0364;
        }
    }
    ctx->pc = 0x4F035Cu;
    // 0x4f035c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4F035Cu;
    SET_GPR_U32(ctx, 31, 0x4F0364u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F035Cu, 0x4F0364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0364u;
label_4f0364:
    // 0x4f0364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0368: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0368u;
        // 0x4f036c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0370u;
}
