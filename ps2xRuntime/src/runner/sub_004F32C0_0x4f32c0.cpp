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

// Function: sub_004F32C0
// Address: 0x4f32c0 - 0x4f32f0
void sub_004F32C0_0x4f32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F32C0_0x4f32c0");
#endif

    switch (ctx->pc) {
        case 0x4f32d0u: goto label_4f32d0;
        default: break;
    }

    ctx->pc = 0x4f32c0u;

    // 0x4f32c0: 0x10850009  beq         $a0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F32C0u;
    {
        const bool branch_taken_0x4f32c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x4f32c0) {
            ctx->pc = 0x4F32E8u;
            goto label_4f32e8;
        }
    }
    ctx->pc = 0x4F32C8u;
    // 0x4f32c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f32cc: 0x0  nop
    ctx->pc = 0x4f32ccu;
    // NOP
label_4f32d0:
    // 0x4f32d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f32d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f32d4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4f32d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4f32d8: 0x0  nop
    ctx->pc = 0x4f32d8u;
    // NOP
    // 0x4f32dc: 0x0  nop
    ctx->pc = 0x4f32dcu;
    // NOP
    // 0x4f32e0: 0x5485fffb  bnel        $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4F32E0u;
    {
        const bool branch_taken_0x4f32e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x4f32e0) {
            ctx->pc = 0x4F32E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F32E0u;
            // 0x4f32e4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F32D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f32d0;
        }
    }
    ctx->pc = 0x4F32E8u;
label_4f32e8:
    // 0x4f32e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F32E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F32E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F32F0u;
}
