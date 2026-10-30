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

// Function: sub_004F32F0
// Address: 0x4f32f0 - 0x4f3318
void sub_004F32F0_0x4f32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F32F0_0x4f32f0");
#endif

    switch (ctx->pc) {
        case 0x4f32f8u: goto label_4f32f8;
        default: break;
    }

    ctx->pc = 0x4f32f0u;

    // 0x4f32f0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F32F0u;
    {
        const bool branch_taken_0x4f32f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f32f0) {
            ctx->pc = 0x4F3310u;
            goto label_4f3310;
        }
    }
    ctx->pc = 0x4F32F8u;
label_4f32f8:
    // 0x4f32f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f32fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4f32fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4f3300: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f3300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f3304: 0x0  nop
    ctx->pc = 0x4f3304u;
    // NOP
    // 0x4f3308: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4F3308u;
    {
        const bool branch_taken_0x4f3308 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3308u;
        // 0x4f330c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3308) {
            ctx->pc = 0x4F32F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f32f8;
        }
    }
    ctx->pc = 0x4F3310u;
label_4f3310:
    // 0x4f3310: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3310u;
        // 0x4f3314: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3318u;
}
