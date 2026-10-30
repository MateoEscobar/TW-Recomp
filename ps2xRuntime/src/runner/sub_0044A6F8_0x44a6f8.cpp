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

// Function: sub_0044A6F8
// Address: 0x44a6f8 - 0x44a730
void sub_0044A6F8_0x44a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044A6F8_0x44a6f8");
#endif

    ctx->pc = 0x44a6f8u;

    // 0x44a6f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44a6fc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x44a6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x44a700: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x44a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x44a704: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x44a704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x44a708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44a708u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10000000
    // 0x44a70c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x44a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x44a710: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x44a710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x44a714: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44A714u;
    {
        const bool branch_taken_0x44a714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x44a714) {
            ctx->pc = 0x44A724u;
            goto label_44a724;
        }
    }
    ctx->pc = 0x44A71Cu;
    // 0x44a71c: 0x8112880  j           func_44A200
    ctx->pc = 0x44A71Cu;
    ctx->pc = 0x44A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A200u, 0x44A71Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x44A724u;
label_44a724:
    // 0x44a724: 0x3e00008  jr          $ra
    ctx->pc = 0x44A724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A72Cu;
    // 0x44a72c: 0x0  nop
    ctx->pc = 0x44a72cu;
    // NOP
    ctx->pc = 0x44a730u;
}
