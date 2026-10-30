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

// Function: sub_0048ECC4
// Address: 0x48ecc4 - 0x48ece8
void sub_0048ECC4_0x48ecc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048ECC4_0x48ecc4");
#endif

    switch (ctx->pc) {
        case 0x48ecccu: goto label_48eccc;
        case 0x48ecd0u: goto label_48ecd0;
        case 0x48ecd4u: goto label_48ecd4;
        default: break;
    }

    ctx->pc = 0x48ecc4u;

    // 0x48ecc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48ECC4u;
    {
        const bool branch_taken_0x48ecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ECC4u;
        // 0x48ecc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ecc4) {
            ctx->pc = 0x48ECD0u;
            goto label_48ecd0;
        }
    }
    ctx->pc = 0x48ECCCu;
label_48eccc:
    // 0x48eccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48ecd0:
    // 0x48ecd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48ecd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48ecd4:
    // 0x48ecd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48ecd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ecd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ecd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x48ECDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ECDCu;
        // 0x48ece0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ECDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48ECE4u;
    // 0x48ece4: 0x0  nop
    ctx->pc = 0x48ece4u;
    // NOP
    ctx->pc = 0x48ece8u;
}
