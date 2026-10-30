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

// Function: sub_0043CE00
// Address: 0x43ce00 - 0x43ce10
void sub_0043CE00_0x43ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CE00_0x43ce00");
#endif

    switch (ctx->pc) {
        case 0x43ce08u: goto label_43ce08;
        default: break;
    }

    ctx->pc = 0x43ce00u;

    // 0x43ce00: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x43ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x43ce04: 0xc  syscall     0
    ctx->pc = 0x43ce04u;
    ctx->pc = 0x43CE08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ce08:
    // 0x43ce08: 0x3e00008  jr          $ra
    ctx->pc = 0x43CE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CE10u;
}
