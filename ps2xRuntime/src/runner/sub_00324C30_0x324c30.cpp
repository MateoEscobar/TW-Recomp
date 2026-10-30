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

// Function: sub_00324C30
// Address: 0x324c30 - 0x324c48
void sub_00324C30_0x324c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324C30_0x324c30");
#endif

    ctx->pc = 0x324c30u;

    // 0x324c30: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x324c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x324c34: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x324c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x324c38: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x324c38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x324c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x324C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C3Cu;
        // 0x324c40: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324C44u;
    // 0x324c44: 0x0  nop
    ctx->pc = 0x324c44u;
    // NOP
    ctx->pc = 0x324c48u;
}
