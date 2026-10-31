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

// Function: sub_001B4720
// Address: 0x1b4720 - 0x1b4740
void sub_001B4720_0x1b4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4720_0x1b4720");
#endif

    ctx->pc = 0x1b4720u;

    // 0x1b4720: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b4720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b4724: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b4724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b4728: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x1b4728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x1b472c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1b472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1b4730: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b4730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b4734: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4734u;
        // 0x1b4738: 0xac641120  sw          $a0, 0x1120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B473Cu;
    // 0x1b473c: 0x0  nop
    ctx->pc = 0x1b473cu;
    // NOP
    ctx->pc = 0x1b4740u;
}
