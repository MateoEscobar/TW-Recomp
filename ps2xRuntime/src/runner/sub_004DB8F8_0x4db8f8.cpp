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

// Function: sub_004DB8F8
// Address: 0x4db8f8 - 0x4db928
void sub_004DB8F8_0x4db8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB8F8_0x4db8f8");
#endif

    switch (ctx->pc) {
        case 0x4db900u: goto label_4db900;
        default: break;
    }

    ctx->pc = 0x4db8f8u;

    // 0x4db8f8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4db8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4db8fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4db8fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db900:
    // 0x4db900: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4db900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4db904: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DB904u;
    {
        const bool branch_taken_0x4db904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4db904) {
            ctx->pc = 0x4DB908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB904u;
            // 0x4db908: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB914u;
            goto label_4db914;
        }
    }
    ctx->pc = 0x4DB90Cu;
    // 0x4db90c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB90Cu;
        // 0x4db910: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB914u;
label_4db914:
    // 0x4db914: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x4db914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4db918: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4DB918u;
    {
        const bool branch_taken_0x4db918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB918u;
        // 0x4db91c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db918) {
            ctx->pc = 0x4DB900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4db900;
        }
    }
    ctx->pc = 0x4DB920u;
    // 0x4db920: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB920u;
        // 0x4db924: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB928u;
}
