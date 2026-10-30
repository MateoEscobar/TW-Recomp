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

// Function: sub_0031891C
// Address: 0x31891c - 0x318940
void sub_0031891C_0x31891c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031891C_0x31891c");
#endif

    switch (ctx->pc) {
        case 0x318920u: goto label_318920;
        case 0x318924u: goto label_318924;
        default: break;
    }

    ctx->pc = 0x31891cu;

    // 0x31891c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31891cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318920:
    // 0x318920: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x318920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_318924:
    // 0x318924: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x318924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x318928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31892c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31892cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318934: 0x3e00008  jr          $ra
    ctx->pc = 0x318934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318934u;
        // 0x318938: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31893Cu;
    // 0x31893c: 0x0  nop
    ctx->pc = 0x31893cu;
    // NOP
    ctx->pc = 0x318940u;
}
