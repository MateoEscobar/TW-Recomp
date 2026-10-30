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

// Function: sub_0043D010
// Address: 0x43d010 - 0x43d080
void sub_0043D010_0x43d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D010_0x43d010");
#endif

    switch (ctx->pc) {
        case 0x43d018u: goto label_43d018;
        case 0x43d028u: goto label_43d028;
        case 0x43d038u: goto label_43d038;
        case 0x43d048u: goto label_43d048;
        case 0x43d058u: goto label_43d058;
        case 0x43d068u: goto label_43d068;
        case 0x43d078u: goto label_43d078;
        default: break;
    }

    ctx->pc = 0x43d010u;

    // 0x43d010: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x43d010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x43d014: 0xc  syscall     0
    ctx->pc = 0x43d014u;
    ctx->pc = 0x43D018u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d018:
    // 0x43d018: 0x3e00008  jr          $ra
    ctx->pc = 0x43D018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D020u;
    // 0x43d020: 0x2403ffc8  addiu       $v1, $zero, -0x38
    ctx->pc = 0x43d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x43d024: 0xc  syscall     0
    ctx->pc = 0x43d024u;
    ctx->pc = 0x43D028u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d028:
    // 0x43d028: 0x3e00008  jr          $ra
    ctx->pc = 0x43D028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D030u;
    // 0x43d030: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x43d030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x43d034: 0xc  syscall     0
    ctx->pc = 0x43d034u;
    ctx->pc = 0x43D038u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d038:
    // 0x43d038: 0x3e00008  jr          $ra
    ctx->pc = 0x43D038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D040u;
    // 0x43d040: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x43d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x43d044: 0xc  syscall     0
    ctx->pc = 0x43d044u;
    ctx->pc = 0x43D048u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d048:
    // 0x43d048: 0x3e00008  jr          $ra
    ctx->pc = 0x43D048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D050u;
    // 0x43d050: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x43d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x43d054: 0xc  syscall     0
    ctx->pc = 0x43d054u;
    ctx->pc = 0x43D058u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d058:
    // 0x43d058: 0x3e00008  jr          $ra
    ctx->pc = 0x43D058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D060u;
    // 0x43d060: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x43d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x43d064: 0xc  syscall     0
    ctx->pc = 0x43d064u;
    ctx->pc = 0x43D068u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d068:
    // 0x43d068: 0x3e00008  jr          $ra
    ctx->pc = 0x43D068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D070u;
    // 0x43d070: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x43d070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x43d074: 0xc  syscall     0
    ctx->pc = 0x43d074u;
    ctx->pc = 0x43D078u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d078:
    // 0x43d078: 0x3e00008  jr          $ra
    ctx->pc = 0x43D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D080u;
}
