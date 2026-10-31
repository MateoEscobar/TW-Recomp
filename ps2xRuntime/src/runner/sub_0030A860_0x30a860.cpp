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

// Function: sub_0030A860
// Address: 0x30a860 - 0x30a878
void sub_0030A860_0x30a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A860_0x30a860");
#endif

    switch (ctx->pc) {
        case 0x30a864u: goto label_30a864;
        default: break;
    }

    ctx->pc = 0x30a860u;

    // 0x30a860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a864:
    // 0x30a864: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30a864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a870: 0x3e00008  jr          $ra
    ctx->pc = 0x30A870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A870u;
        // 0x30a874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A878u;
}
