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

// Function: sub_001A4668
// Address: 0x1a4668 - 0x1a4690
void sub_001A4668_0x1a4668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4668_0x1a4668");
#endif

    switch (ctx->pc) {
        case 0x1a466cu: goto label_1a466c;
        default: break;
    }

    ctx->pc = 0x1a4668u;

    // 0x1a4668: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a4668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a466c:
    // 0x1a466c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a466cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4674: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4674u;
        // 0x1a4678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A467Cu;
    // 0x1a467c: 0x0  nop
    ctx->pc = 0x1a467cu;
    // NOP
    // 0x1a4680: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a4680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a4684: 0x0  nop
    ctx->pc = 0x1a4684u;
    // NOP
    // 0x1a4688: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a4688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a468c: 0x0  nop
    ctx->pc = 0x1a468cu;
    // NOP
    ctx->pc = 0x1a4690u;
}
