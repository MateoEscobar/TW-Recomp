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

// Function: sub_0043F788
// Address: 0x43f788 - 0x43f7b0
void sub_0043F788_0x43f788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043F788_0x43f788");
#endif

    switch (ctx->pc) {
        case 0x43f7a0u: goto label_43f7a0;
        default: break;
    }

    ctx->pc = 0x43f788u;

    // 0x43f788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x43f788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43f78c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x43f78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f790: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43F790u;
    {
        const bool branch_taken_0x43f790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F790u;
        // 0x43f794: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f790) {
            ctx->pc = 0x43F7A0u;
            goto label_43f7a0;
        }
    }
    ctx->pc = 0x43F798u;
    // 0x43f798: 0xc10f9b2  jal         func_43E6C8
    ctx->pc = 0x43F798u;
    SET_GPR_U32(ctx, 31, 0x43F7A0u);
    ctx->pc = 0x43E6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E6C8u, 0x43F798u, 0x43F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F7A0u;
label_43f7a0:
    // 0x43f7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43f7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43f7a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43f7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x43F7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F7A8u;
        // 0x43f7ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F7B0u;
}
