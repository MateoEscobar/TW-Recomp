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

// Function: sub_0043D150
// Address: 0x43d150 - 0x43d320
void sub_0043D150_0x43d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D150_0x43d150");
#endif

    switch (ctx->pc) {
        case 0x43d158u: goto label_43d158;
        case 0x43d168u: goto label_43d168;
        case 0x43d178u: goto label_43d178;
        case 0x43d188u: goto label_43d188;
        case 0x43d198u: goto label_43d198;
        case 0x43d1a8u: goto label_43d1a8;
        case 0x43d1b8u: goto label_43d1b8;
        case 0x43d1c8u: goto label_43d1c8;
        case 0x43d1d8u: goto label_43d1d8;
        case 0x43d1e8u: goto label_43d1e8;
        case 0x43d1f8u: goto label_43d1f8;
        case 0x43d208u: goto label_43d208;
        case 0x43d218u: goto label_43d218;
        case 0x43d228u: goto label_43d228;
        case 0x43d238u: goto label_43d238;
        case 0x43d248u: goto label_43d248;
        case 0x43d258u: goto label_43d258;
        case 0x43d268u: goto label_43d268;
        case 0x43d278u: goto label_43d278;
        case 0x43d288u: goto label_43d288;
        case 0x43d298u: goto label_43d298;
        case 0x43d2a8u: goto label_43d2a8;
        case 0x43d2b8u: goto label_43d2b8;
        case 0x43d2c8u: goto label_43d2c8;
        case 0x43d2d8u: goto label_43d2d8;
        case 0x43d2e8u: goto label_43d2e8;
        case 0x43d2f8u: goto label_43d2f8;
        case 0x43d308u: goto label_43d308;
        case 0x43d318u: goto label_43d318;
        default: break;
    }

    ctx->pc = 0x43d150u;

    // 0x43d150: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x43d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x43d154: 0xc  syscall     0
    ctx->pc = 0x43d154u;
    ctx->pc = 0x43D158u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d158:
    // 0x43d158: 0x3e00008  jr          $ra
    ctx->pc = 0x43D158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D160u;
    // 0x43d160: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x43d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x43d164: 0xc  syscall     0
    ctx->pc = 0x43d164u;
    ctx->pc = 0x43D168u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d168:
    // 0x43d168: 0x3e00008  jr          $ra
    ctx->pc = 0x43D168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D170u;
    // 0x43d170: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x43d170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x43d174: 0xc  syscall     0
    ctx->pc = 0x43d174u;
    ctx->pc = 0x43D178u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d178:
    // 0x43d178: 0x3e00008  jr          $ra
    ctx->pc = 0x43D178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D180u;
    // 0x43d180: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x43d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x43d184: 0xc  syscall     0
    ctx->pc = 0x43d184u;
    ctx->pc = 0x43D188u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d188:
    // 0x43d188: 0x3e00008  jr          $ra
    ctx->pc = 0x43D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D190u;
    // 0x43d190: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x43d190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x43d194: 0xc  syscall     0
    ctx->pc = 0x43d194u;
    ctx->pc = 0x43D198u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d198:
    // 0x43d198: 0x3e00008  jr          $ra
    ctx->pc = 0x43D198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D1A0u;
    // 0x43d1a0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x43d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x43d1a4: 0xc  syscall     0
    ctx->pc = 0x43d1a4u;
    ctx->pc = 0x43D1A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d1a8:
    // 0x43d1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D1B0u;
    // 0x43d1b0: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x43d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x43d1b4: 0xc  syscall     0
    ctx->pc = 0x43d1b4u;
    ctx->pc = 0x43D1B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d1b8:
    // 0x43d1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D1C0u;
    // 0x43d1c0: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x43d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x43d1c4: 0xc  syscall     0
    ctx->pc = 0x43d1c4u;
    ctx->pc = 0x43D1C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d1c8:
    // 0x43d1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D1D0u;
    // 0x43d1d0: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x43d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x43d1d4: 0xc  syscall     0
    ctx->pc = 0x43d1d4u;
    ctx->pc = 0x43D1D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d1d8:
    // 0x43d1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D1E0u;
    // 0x43d1e0: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x43d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x43d1e4: 0xc  syscall     0
    ctx->pc = 0x43d1e4u;
    ctx->pc = 0x43D1E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d1e8:
    // 0x43d1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D1F0u;
    // 0x43d1f0: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x43d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x43d1f4: 0xc  syscall     0
    ctx->pc = 0x43d1f4u;
    ctx->pc = 0x43D1F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d1f8:
    // 0x43d1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D200u;
    // 0x43d200: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x43d200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x43d204: 0xc  syscall     0
    ctx->pc = 0x43d204u;
    ctx->pc = 0x43D208u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d208:
    // 0x43d208: 0x3e00008  jr          $ra
    ctx->pc = 0x43D208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D210u;
    // 0x43d210: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x43d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x43d214: 0xc  syscall     0
    ctx->pc = 0x43d214u;
    ctx->pc = 0x43D218u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d218:
    // 0x43d218: 0x3e00008  jr          $ra
    ctx->pc = 0x43D218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D220u;
    // 0x43d220: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x43d220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x43d224: 0xc  syscall     0
    ctx->pc = 0x43d224u;
    ctx->pc = 0x43D228u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d228:
    // 0x43d228: 0x3e00008  jr          $ra
    ctx->pc = 0x43D228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D230u;
    // 0x43d230: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x43d230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x43d234: 0xc  syscall     0
    ctx->pc = 0x43d234u;
    ctx->pc = 0x43D238u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d238:
    // 0x43d238: 0x3e00008  jr          $ra
    ctx->pc = 0x43D238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D240u;
    // 0x43d240: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x43d240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x43d244: 0xc  syscall     0
    ctx->pc = 0x43d244u;
    ctx->pc = 0x43D248u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d248:
    // 0x43d248: 0x3e00008  jr          $ra
    ctx->pc = 0x43D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D250u;
    // 0x43d250: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x43d250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x43d254: 0xc  syscall     0
    ctx->pc = 0x43d254u;
    ctx->pc = 0x43D258u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d258:
    // 0x43d258: 0x3e00008  jr          $ra
    ctx->pc = 0x43D258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D260u;
    // 0x43d260: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x43d260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x43d264: 0xc  syscall     0
    ctx->pc = 0x43d264u;
    ctx->pc = 0x43D268u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d268:
    // 0x43d268: 0x3e00008  jr          $ra
    ctx->pc = 0x43D268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D270u;
    // 0x43d270: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x43d270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x43d274: 0xc  syscall     0
    ctx->pc = 0x43d274u;
    ctx->pc = 0x43D278u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d278:
    // 0x43d278: 0x3e00008  jr          $ra
    ctx->pc = 0x43D278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D280u;
    // 0x43d280: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x43d280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x43d284: 0xc  syscall     0
    ctx->pc = 0x43d284u;
    ctx->pc = 0x43D288u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d288:
    // 0x43d288: 0x3e00008  jr          $ra
    ctx->pc = 0x43D288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D290u;
    // 0x43d290: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x43d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x43d294: 0xc  syscall     0
    ctx->pc = 0x43d294u;
    ctx->pc = 0x43D298u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d298:
    // 0x43d298: 0x3e00008  jr          $ra
    ctx->pc = 0x43D298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D2A0u;
    // 0x43d2a0: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x43d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x43d2a4: 0xc  syscall     0
    ctx->pc = 0x43d2a4u;
    ctx->pc = 0x43D2A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d2a8:
    // 0x43d2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D2B0u;
    // 0x43d2b0: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x43d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x43d2b4: 0xc  syscall     0
    ctx->pc = 0x43d2b4u;
    ctx->pc = 0x43D2B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d2b8:
    // 0x43d2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D2C0u;
    // 0x43d2c0: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x43d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x43d2c4: 0xc  syscall     0
    ctx->pc = 0x43d2c4u;
    ctx->pc = 0x43D2C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d2c8:
    // 0x43d2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D2D0u;
    // 0x43d2d0: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x43d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x43d2d4: 0xc  syscall     0
    ctx->pc = 0x43d2d4u;
    ctx->pc = 0x43D2D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d2d8:
    // 0x43d2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D2E0u;
    // 0x43d2e0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x43d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x43d2e4: 0xc  syscall     0
    ctx->pc = 0x43d2e4u;
    ctx->pc = 0x43D2E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d2e8:
    // 0x43d2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D2F0u;
    // 0x43d2f0: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x43d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x43d2f4: 0xc  syscall     0
    ctx->pc = 0x43d2f4u;
    ctx->pc = 0x43D2F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d2f8:
    // 0x43d2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D300u;
    // 0x43d300: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x43d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x43d304: 0xc  syscall     0
    ctx->pc = 0x43d304u;
    ctx->pc = 0x43D308u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d308:
    // 0x43d308: 0x3e00008  jr          $ra
    ctx->pc = 0x43D308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D310u;
    // 0x43d310: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x43d310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x43d314: 0xc  syscall     0
    ctx->pc = 0x43d314u;
    ctx->pc = 0x43D318u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d318:
    // 0x43d318: 0x3e00008  jr          $ra
    ctx->pc = 0x43D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D320u;
}
