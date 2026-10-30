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

// Function: sub_001B46E0
// Address: 0x1b46e0 - 0x1b4700
void sub_001B46E0_0x1b46e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B46E0_0x1b46e0");
#endif

    ctx->pc = 0x1b46e0u;

    // 0x1b46e0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b46e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b46e8: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x1b46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x1b46ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1b46ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1b46f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b46f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B46F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46F4u;
        // 0x1b46f8: 0xac6410d0  sw          $a0, 0x10D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4304), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B46F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B46FCu;
    // 0x1b46fc: 0x0  nop
    ctx->pc = 0x1b46fcu;
    // NOP
    ctx->pc = 0x1b4700u;
}
