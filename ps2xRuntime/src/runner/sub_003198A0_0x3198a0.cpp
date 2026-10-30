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

// Function: sub_003198A0
// Address: 0x3198a0 - 0x3198d0
void sub_003198A0_0x3198a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003198A0_0x3198a0");
#endif

    switch (ctx->pc) {
        case 0x3198a8u: goto label_3198a8;
        default: break;
    }

    ctx->pc = 0x3198a0u;

    // 0x3198a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3198a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198a4: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x3198a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_3198a8:
    // 0x3198a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3198a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3198ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3198acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3198b0: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x3198b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3198b4: 0x0  nop
    ctx->pc = 0x3198b4u;
    // NOP
    // 0x3198b8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3198B8u;
    {
        const bool branch_taken_0x3198b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3198BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198B8u;
        // 0x3198bc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198b8) {
            ctx->pc = 0x3198A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3198a8;
        }
    }
    ctx->pc = 0x3198C0u;
    // 0x3198c0: 0xa080003d  sb          $zero, 0x3D($a0)
    ctx->pc = 0x3198c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 0));
    // 0x3198c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3198C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3198C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198C4u;
        // 0x3198c8: 0xa080003c  sb          $zero, 0x3C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3198C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3198CCu;
    // 0x3198cc: 0x0  nop
    ctx->pc = 0x3198ccu;
    // NOP
    ctx->pc = 0x3198d0u;
}
