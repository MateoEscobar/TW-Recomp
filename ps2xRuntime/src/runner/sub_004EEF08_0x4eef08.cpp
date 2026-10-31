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

// Function: sub_004EEF08
// Address: 0x4eef08 - 0x4eef20
void sub_004EEF08_0x4eef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEF08_0x4eef08");
#endif

    ctx->pc = 0x4eef08u;

    // 0x4eef08: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEF0Cu;
        // 0x4eef10: 0x24427c80  addiu       $v0, $v0, 0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEF14u;
    // 0x4eef14: 0x0  nop
    ctx->pc = 0x4eef14u;
    // NOP
    // 0x4eef18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4eef18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4eef1c: 0x0  nop
    ctx->pc = 0x4eef1cu;
    // NOP
    ctx->pc = 0x4eef20u;
}
