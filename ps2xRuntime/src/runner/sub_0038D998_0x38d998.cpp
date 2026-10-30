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

// Function: sub_0038D998
// Address: 0x38d998 - 0x38d9d8
void sub_0038D998_0x38d998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D998_0x38d998");
#endif

    switch (ctx->pc) {
        case 0x38d9a8u: goto label_38d9a8;
        default: break;
    }

    ctx->pc = 0x38d998u;

    // 0x38d998: 0x80a50092  lb          $a1, 0x92($a1)
    ctx->pc = 0x38d998u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x38d99c: 0x248412da  addiu       $a0, $a0, 0x12DA
    ctx->pc = 0x38d99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4826));
    // 0x38d9a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38d9a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d9a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x38d9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38d9a8:
    // 0x38d9a8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x38d9a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d9ac: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D9ACu;
    {
        const bool branch_taken_0x38d9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x38D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9ACu;
        // 0x38d9b0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9ac) {
            ctx->pc = 0x38D9C0u;
            goto label_38d9c0;
        }
    }
    ctx->pc = 0x38D9B4u;
    // 0x38d9b4: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x38d9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x38d9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x38D9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9B8u;
        // 0x38d9bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D9C0u;
label_38d9c0:
    // 0x38d9c0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x38d9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x38d9c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x38D9C4u;
    {
        const bool branch_taken_0x38d9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9C4u;
        // 0x38d9c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9c4) {
            ctx->pc = 0x38D9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d9a8;
        }
    }
    ctx->pc = 0x38D9CCu;
    // 0x38d9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x38D9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9CCu;
        // 0x38d9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D9D4u;
    // 0x38d9d4: 0x0  nop
    ctx->pc = 0x38d9d4u;
    // NOP
    ctx->pc = 0x38d9d8u;
}
