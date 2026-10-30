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

// Function: sub_00335390
// Address: 0x335390 - 0x3353b8
void sub_00335390_0x335390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335390_0x335390");
#endif

    ctx->pc = 0x335390u;

    // 0x335390: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x335390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x335394: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x335394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x335398: 0x244217e0  addiu       $v0, $v0, 0x17E0
    ctx->pc = 0x335398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6112));
    // 0x33539c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3353a0: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x3353a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x3353a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3353a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3353a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3353a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3353ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3353acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3353b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3353B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3353B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353B0u;
        // 0x3353b4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3353B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3353B8u;
}
