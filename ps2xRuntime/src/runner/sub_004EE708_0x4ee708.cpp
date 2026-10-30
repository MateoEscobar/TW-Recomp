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

// Function: sub_004EE708
// Address: 0x4ee708 - 0x4ee720
void sub_004EE708_0x4ee708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE708_0x4ee708");
#endif

    ctx->pc = 0x4ee708u;

    // 0x4ee708: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee70c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE70Cu;
        // 0x4ee710: 0x24424c00  addiu       $v0, $v0, 0x4C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE714u;
    // 0x4ee714: 0x0  nop
    ctx->pc = 0x4ee714u;
    // NOP
    // 0x4ee718: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ee718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ee71c: 0x0  nop
    ctx->pc = 0x4ee71cu;
    // NOP
    ctx->pc = 0x4ee720u;
}
