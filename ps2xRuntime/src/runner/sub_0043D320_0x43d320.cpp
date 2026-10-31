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

// Function: sub_0043D320
// Address: 0x43d320 - 0x43d370
void sub_0043D320_0x43d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D320_0x43d320");
#endif

    switch (ctx->pc) {
        case 0x43d328u: goto label_43d328;
        case 0x43d338u: goto label_43d338;
        case 0x43d348u: goto label_43d348;
        case 0x43d358u: goto label_43d358;
        case 0x43d368u: goto label_43d368;
        default: break;
    }

    ctx->pc = 0x43d320u;

    // 0x43d320: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x43d320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x43d324: 0xc  syscall     0
    ctx->pc = 0x43d324u;
    ctx->pc = 0x43D328u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d328:
    // 0x43d328: 0x3e00008  jr          $ra
    ctx->pc = 0x43D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D330u;
    // 0x43d330: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x43d330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x43d334: 0xc  syscall     0
    ctx->pc = 0x43d334u;
    ctx->pc = 0x43D338u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d338:
    // 0x43d338: 0x3e00008  jr          $ra
    ctx->pc = 0x43D338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D340u;
    // 0x43d340: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x43d340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x43d344: 0xc  syscall     0
    ctx->pc = 0x43d344u;
    ctx->pc = 0x43D348u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d348:
    // 0x43d348: 0x3e00008  jr          $ra
    ctx->pc = 0x43D348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D350u;
    // 0x43d350: 0x2403ff98  addiu       $v1, $zero, -0x68
    ctx->pc = 0x43d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x43d354: 0xc  syscall     0
    ctx->pc = 0x43d354u;
    ctx->pc = 0x43D358u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d358:
    // 0x43d358: 0x3e00008  jr          $ra
    ctx->pc = 0x43D358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D360u;
    // 0x43d360: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x43d360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x43d364: 0xc  syscall     0
    ctx->pc = 0x43d364u;
    ctx->pc = 0x43D368u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d368:
    // 0x43d368: 0x3e00008  jr          $ra
    ctx->pc = 0x43D368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D370u;
}
