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

// Function: sub_0043CE10
// Address: 0x43ce10 - 0x43cea0
void sub_0043CE10_0x43ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CE10_0x43ce10");
#endif

    switch (ctx->pc) {
        case 0x43ce18u: goto label_43ce18;
        case 0x43ce28u: goto label_43ce28;
        case 0x43ce38u: goto label_43ce38;
        case 0x43ce48u: goto label_43ce48;
        case 0x43ce58u: goto label_43ce58;
        case 0x43ce68u: goto label_43ce68;
        case 0x43ce78u: goto label_43ce78;
        case 0x43ce88u: goto label_43ce88;
        case 0x43ce98u: goto label_43ce98;
        default: break;
    }

    ctx->pc = 0x43ce10u;

    // 0x43ce10: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x43ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x43ce14: 0xc  syscall     0
    ctx->pc = 0x43ce14u;
    ctx->pc = 0x43CE18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce18:
    // 0x43ce18: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CE20u;
    // 0x43ce20: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x43ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x43ce24: 0xc  syscall     0
    ctx->pc = 0x43ce24u;
    ctx->pc = 0x43CE28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce28:
    // 0x43ce28: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CE30u;
    // 0x43ce30: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x43ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x43ce34: 0xc  syscall     0
    ctx->pc = 0x43ce34u;
    ctx->pc = 0x43CE38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce38:
    // 0x43ce38: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CE40u;
    // 0x43ce40: 0x2403ffe6  addiu       $v1, $zero, -0x1A
    ctx->pc = 0x43ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x43ce44: 0xc  syscall     0
    ctx->pc = 0x43ce44u;
    ctx->pc = 0x43CE48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce48:
    // 0x43ce48: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CE50u;
    // 0x43ce50: 0x2403ffe5  addiu       $v1, $zero, -0x1B
    ctx->pc = 0x43ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x43ce54: 0xc  syscall     0
    ctx->pc = 0x43ce54u;
    ctx->pc = 0x43CE58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce58:
    // 0x43ce58: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CE60u;
    // 0x43ce60: 0x2403ffe4  addiu       $v1, $zero, -0x1C
    ctx->pc = 0x43ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x43ce64: 0xc  syscall     0
    ctx->pc = 0x43ce64u;
    ctx->pc = 0x43CE68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce68:
    // 0x43ce68: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CE70u;
    // 0x43ce70: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x43ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x43ce74: 0xc  syscall     0
    ctx->pc = 0x43ce74u;
    ctx->pc = 0x43CE78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce78:
    // 0x43ce78: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CE80u;
    // 0x43ce80: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x43ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x43ce84: 0xc  syscall     0
    ctx->pc = 0x43ce84u;
    ctx->pc = 0x43CE88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce88:
    // 0x43ce88: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CE90u;
    // 0x43ce90: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x43ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x43ce94: 0xc  syscall     0
    ctx->pc = 0x43ce94u;
    ctx->pc = 0x43CE98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce98:
    // 0x43ce98: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CEA0u;
}
