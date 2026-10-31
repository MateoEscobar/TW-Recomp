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

// Function: sub_0044C828
// Address: 0x44c828 - 0x44c860
void sub_0044C828_0x44c828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C828_0x44c828");
#endif

    ctx->pc = 0x44c828u;

    // 0x44c828: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44c82c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x44c82cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x44c830: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x44c830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x44c834: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x44c834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x44c838: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44c838u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10000000
    // 0x44c83c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x44c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x44c840: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x44c840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x44c844: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44C844u;
    {
        const bool branch_taken_0x44c844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x44c844) {
            ctx->pc = 0x44C854u;
            goto label_44c854;
        }
    }
    ctx->pc = 0x44C84Cu;
    // 0x44c84c: 0x8112880  j           func_44A200
    ctx->pc = 0x44C84Cu;
    ctx->pc = 0x44A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A200u, 0x44C84Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x44C854u;
label_44c854:
    // 0x44c854: 0x3e00008  jr          $ra
    ctx->pc = 0x44C854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C85Cu;
    // 0x44c85c: 0x0  nop
    ctx->pc = 0x44c85cu;
    // NOP
    ctx->pc = 0x44c860u;
}
