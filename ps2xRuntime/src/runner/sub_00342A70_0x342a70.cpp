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

// Function: sub_00342A70
// Address: 0x342a70 - 0x342aa0
void sub_00342A70_0x342a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342A70_0x342a70");
#endif

    switch (ctx->pc) {
        case 0x342a94u: goto label_342a94;
        default: break;
    }

    ctx->pc = 0x342a70u;

    // 0x342a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342a74: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x342a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x342a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342a7c: 0x24424870  addiu       $v0, $v0, 0x4870
    ctx->pc = 0x342a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18544));
    // 0x342a80: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x342a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x342a84: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342A84u;
    {
        const bool branch_taken_0x342a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x342A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A84u;
        // 0x342a88: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a84) {
            ctx->pc = 0x342A94u;
            goto label_342a94;
        }
    }
    ctx->pc = 0x342A8Cu;
    // 0x342a8c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x342A8Cu;
    SET_GPR_U32(ctx, 31, 0x342A94u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x342A8Cu, 0x342A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A94u;
label_342a94:
    // 0x342a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342a98: 0x3e00008  jr          $ra
    ctx->pc = 0x342A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A98u;
        // 0x342a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342AA0u;
}
