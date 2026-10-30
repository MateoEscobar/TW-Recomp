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

// Function: sub_0035F668
// Address: 0x35f668 - 0x35f688
void sub_0035F668_0x35f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F668_0x35f668");
#endif

    switch (ctx->pc) {
        case 0x35f678u: goto label_35f678;
        default: break;
    }

    ctx->pc = 0x35f668u;

    // 0x35f668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f670: 0xc05ae2c  jal         func_16B8B0
    ctx->pc = 0x35F670u;
    SET_GPR_U32(ctx, 31, 0x35F678u);
    ctx->pc = 0x16B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B8B0u, 0x35F670u, 0x35F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F678u;
label_35f678:
    // 0x35f678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f67c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f680: 0x3e00008  jr          $ra
    ctx->pc = 0x35F680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F680u;
        // 0x35f684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F688u;
}
