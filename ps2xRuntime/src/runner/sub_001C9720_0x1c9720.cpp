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

// Function: sub_001C9720
// Address: 0x1c9720 - 0x1c9748
void sub_001C9720_0x1c9720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9720_0x1c9720");
#endif

    switch (ctx->pc) {
        case 0x1c9734u: goto label_1c9734;
        default: break;
    }

    ctx->pc = 0x1c9720u;

    // 0x1c9720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9724: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c9724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c9728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c972c: 0xc0725b8  jal         func_1C96E0
    ctx->pc = 0x1C972Cu;
    SET_GPR_U32(ctx, 31, 0x1C9734u);
    ctx->pc = 0x1C9730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C972Cu;
    // 0x1c9730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C96E0u, 0x1C972Cu, 0x1C9734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9734u;
label_1c9734:
    // 0x1c9734: 0xae020420  sw          $v0, 0x420($s0)
    ctx->pc = 0x1c9734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
    // 0x1c9738: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c9738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c973c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9740: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9740u;
        // 0x1c9744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9748u;
}
