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

// Function: sub_0014A188
// Address: 0x14a188 - 0x14a1a8
void sub_0014A188_0x14a188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A188_0x14a188");
#endif

    ctx->pc = 0x14a188u;

    // 0x14a188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a18c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x14a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x14a190: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x14a190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x14a194: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14a194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14a198: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x14a198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x14a19c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x14a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x14a1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x14A1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1A0u;
        // 0x14a1a4: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A1A8u;
}
