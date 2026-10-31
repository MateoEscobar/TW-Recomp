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

// Function: sub_00165260
// Address: 0x165260 - 0x1652a0
void sub_00165260_0x165260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165260_0x165260");
#endif

    switch (ctx->pc) {
        case 0x165268u: goto label_165268;
        default: break;
    }

    ctx->pc = 0x165260u;

    // 0x165260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165264: 0x2483015c  addiu       $v1, $a0, 0x15C
    ctx->pc = 0x165264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
label_165268:
    // 0x165268: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16526c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16526Cu;
    {
        const bool branch_taken_0x16526c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x165270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16526Cu;
        // 0x165270: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16526c) {
            ctx->pc = 0x165288u;
            goto label_165288;
        }
    }
    ctx->pc = 0x165274u;
    // 0x165274: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x165274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x165278: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x165278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x16527c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x165280: 0x3e00008  jr          $ra
    ctx->pc = 0x165280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165280u;
        // 0x165284: 0xac82017c  sw          $v0, 0x17C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165288u;
label_165288:
    // 0x165288: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x165288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x16528c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16528Cu;
    {
        const bool branch_taken_0x16528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16528Cu;
        // 0x165290: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16528c) {
            ctx->pc = 0x165268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165268;
        }
    }
    ctx->pc = 0x165294u;
    // 0x165294: 0x3e00008  jr          $ra
    ctx->pc = 0x165294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16529Cu;
    // 0x16529c: 0x0  nop
    ctx->pc = 0x16529cu;
    // NOP
    ctx->pc = 0x1652a0u;
}
