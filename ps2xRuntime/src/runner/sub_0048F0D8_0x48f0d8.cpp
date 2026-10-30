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

// Function: sub_0048F0D8
// Address: 0x48f0d8 - 0x48f0f8
void sub_0048F0D8_0x48f0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F0D8_0x48f0d8");
#endif

    switch (ctx->pc) {
        case 0x48f0e0u: goto label_48f0e0;
        case 0x48f0e4u: goto label_48f0e4;
        case 0x48f0e8u: goto label_48f0e8;
        default: break;
    }

    ctx->pc = 0x48f0d8u;

    // 0x48f0d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48F0D8u;
    {
        const bool branch_taken_0x48f0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0D8u;
        // 0x48f0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0d8) {
            ctx->pc = 0x48F0E4u;
            goto label_48f0e4;
        }
    }
    ctx->pc = 0x48F0E0u;
label_48f0e0:
    // 0x48f0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f0e4:
    // 0x48f0e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48f0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48f0e8:
    // 0x48f0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x48F0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0ECu;
        // 0x48f0f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F0F4u;
    // 0x48f0f4: 0x0  nop
    ctx->pc = 0x48f0f4u;
    // NOP
    ctx->pc = 0x48f0f8u;
}
