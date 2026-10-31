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

// Function: sub_004F0440
// Address: 0x4f0440 - 0x4f0470
void sub_004F0440_0x4f0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0440_0x4f0440");
#endif

    switch (ctx->pc) {
        case 0x4f0464u: goto label_4f0464;
        default: break;
    }

    ctx->pc = 0x4f0440u;

    // 0x4f0440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f0444: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f0444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4f0448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f044c: 0x24424258  addiu       $v0, $v0, 0x4258
    ctx->pc = 0x4f044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16984));
    // 0x4f0450: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4f0450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4f0454: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F0454u;
    {
        const bool branch_taken_0x4f0454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0454u;
        // 0x4f0458: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0454) {
            ctx->pc = 0x4F0464u;
            goto label_4f0464;
        }
    }
    ctx->pc = 0x4F045Cu;
    // 0x4f045c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4F045Cu;
    SET_GPR_U32(ctx, 31, 0x4F0464u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F045Cu, 0x4F0464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0464u;
label_4f0464:
    // 0x4f0464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0468: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0468u;
        // 0x4f046c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0470u;
}
