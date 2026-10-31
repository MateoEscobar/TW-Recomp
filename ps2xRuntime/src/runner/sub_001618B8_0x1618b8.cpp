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

// Function: sub_001618B8
// Address: 0x1618b8 - 0x1618f0
void sub_001618B8_0x1618b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001618B8_0x1618b8");
#endif

    switch (ctx->pc) {
        case 0x1618d0u: goto label_1618d0;
        default: break;
    }

    ctx->pc = 0x1618b8u;

    // 0x1618b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1618b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1618bc: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1618bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1618c0: 0x8c43b720  lw          $v1, -0x48E0($v0)
    ctx->pc = 0x1618c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B720u));
    // 0x1618c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1618c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618c8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1618c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1618cc: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1618ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_1618d0:
    // 0x1618d0: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1618d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x1618d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1618d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1618d8: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x1618d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1618dc: 0x0  nop
    ctx->pc = 0x1618dcu;
    // NOP
    // 0x1618e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1618E0u;
    {
        const bool branch_taken_0x1618e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1618E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618E0u;
        // 0x1618e4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618e0) {
            ctx->pc = 0x1618D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1618d0;
        }
    }
    ctx->pc = 0x1618E8u;
    // 0x1618e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1618E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1618E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1618F0u;
}
