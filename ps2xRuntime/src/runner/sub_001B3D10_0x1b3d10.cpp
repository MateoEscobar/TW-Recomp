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

// Function: sub_001B3D10
// Address: 0x1b3d10 - 0x1b3d28
void sub_001B3D10_0x1b3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3D10_0x1b3d10");
#endif

    ctx->pc = 0x1b3d10u;

    // 0x1b3d10: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b3d14: 0x344234a0  ori         $v0, $v0, 0x34A0
    ctx->pc = 0x1b3d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13472);
    // 0x1b3d18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b3d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D1Cu;
        // 0x1b3d20: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3D24u;
    // 0x1b3d24: 0x0  nop
    ctx->pc = 0x1b3d24u;
    // NOP
    ctx->pc = 0x1b3d28u;
}
