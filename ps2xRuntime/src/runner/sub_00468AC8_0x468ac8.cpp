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

// Function: sub_00468AC8
// Address: 0x468ac8 - 0x468b00
void sub_00468AC8_0x468ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468AC8_0x468ac8");
#endif

    ctx->pc = 0x468ac8u;

    // 0x468ac8: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x468ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x468acc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x468ACCu;
    {
        const bool branch_taken_0x468acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468acc) {
            ctx->pc = 0x468AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x468ACCu;
            // 0x468ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x468AE4u;
            goto label_468ae4;
        }
    }
    ctx->pc = 0x468AD4u;
    // 0x468ad4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x468ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x468ad8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x468AD8u;
    {
        const bool branch_taken_0x468ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x468ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468AD8u;
        // 0x468adc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468ad8) {
            ctx->pc = 0x468AE4u;
            goto label_468ae4;
        }
    }
    ctx->pc = 0x468AE0u;
    // 0x468ae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x468ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468ae4:
    // 0x468ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x468AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468AECu;
    // 0x468aec: 0x0  nop
    ctx->pc = 0x468aecu;
    // NOP
    // 0x468af0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x468af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x468af4: 0x0  nop
    ctx->pc = 0x468af4u;
    // NOP
    // 0x468af8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x468af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x468afc: 0x0  nop
    ctx->pc = 0x468afcu;
    // NOP
    ctx->pc = 0x468b00u;
}
