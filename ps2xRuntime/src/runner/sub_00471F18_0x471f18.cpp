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

// Function: sub_00471F18
// Address: 0x471f18 - 0x471f38
void sub_00471F18_0x471f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471F18_0x471f18");
#endif

    ctx->pc = 0x471f18u;

    // 0x471f18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x471f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x471f1c: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x471F1Cu;
    {
        const bool branch_taken_0x471f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x471F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F1Cu;
        // 0x471f20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471f1c) {
            ctx->pc = 0x471F2Cu;
            goto label_471f2c;
        }
    }
    ctx->pc = 0x471F24u;
    // 0x471f24: 0x3e00008  jr          $ra
    ctx->pc = 0x471F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F24u;
        // 0x471f28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471F2Cu;
label_471f2c:
    // 0x471f2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x471f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471f30: 0x3e00008  jr          $ra
    ctx->pc = 0x471F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F30u;
        // 0x471f34: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471F38u;
}
