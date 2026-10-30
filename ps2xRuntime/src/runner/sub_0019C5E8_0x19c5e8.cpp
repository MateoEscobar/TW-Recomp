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

// Function: sub_0019C5E8
// Address: 0x19c5e8 - 0x19c608
void sub_0019C5E8_0x19c5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C5E8_0x19c5e8");
#endif

    ctx->pc = 0x19c5e8u;

    // 0x19c5e8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x19c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x19c5ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19c5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5f0: 0x246391e0  addiu       $v1, $v1, -0x6E20
    ctx->pc = 0x19c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939104));
    // 0x19c5f4: 0xac8032f0  sw          $zero, 0x32F0($a0)
    ctx->pc = 0x19c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13040), GPR_U32(ctx, 0));
    // 0x19c5f8: 0xac83330c  sw          $v1, 0x330C($a0)
    ctx->pc = 0x19c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13068), GPR_U32(ctx, 3));
    // 0x19c5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5FCu;
        // 0x19c600: 0xac8032f4  sw          $zero, 0x32F4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 13044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C604u;
    // 0x19c604: 0x0  nop
    ctx->pc = 0x19c604u;
    // NOP
    ctx->pc = 0x19c608u;
}
