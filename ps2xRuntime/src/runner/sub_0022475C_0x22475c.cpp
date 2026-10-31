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

// Function: sub_0022475C
// Address: 0x22475c - 0x224778
void sub_0022475C_0x22475c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022475C_0x22475c");
#endif

    switch (ctx->pc) {
        case 0x224760u: goto label_224760;
        case 0x224764u: goto label_224764;
        default: break;
    }

    ctx->pc = 0x22475cu;

    // 0x22475c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22475cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224760:
    // 0x224760: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x224760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_224764:
    // 0x224764: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x224764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224768: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x224768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22476c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22476cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224770: 0x3e00008  jr          $ra
    ctx->pc = 0x224770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224770u;
        // 0x224774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224778u;
}
