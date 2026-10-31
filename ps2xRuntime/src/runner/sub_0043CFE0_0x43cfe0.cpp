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

// Function: sub_0043CFE0
// Address: 0x43cfe0 - 0x43d010
void sub_0043CFE0_0x43cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CFE0_0x43cfe0");
#endif

    switch (ctx->pc) {
        case 0x43cfe8u: goto label_43cfe8;
        case 0x43cff8u: goto label_43cff8;
        case 0x43d008u: goto label_43d008;
        default: break;
    }

    ctx->pc = 0x43cfe0u;

    // 0x43cfe0: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x43cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x43cfe4: 0xc  syscall     0
    ctx->pc = 0x43cfe4u;
    ctx->pc = 0x43CFE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cfe8:
    // 0x43cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CFF0u;
    // 0x43cff0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x43cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x43cff4: 0xc  syscall     0
    ctx->pc = 0x43cff4u;
    ctx->pc = 0x43CFF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cff8:
    // 0x43cff8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D000u;
    // 0x43d000: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x43d000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x43d004: 0xc  syscall     0
    ctx->pc = 0x43d004u;
    ctx->pc = 0x43D008u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d008:
    // 0x43d008: 0x3e00008  jr          $ra
    ctx->pc = 0x43D008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D010u;
}
