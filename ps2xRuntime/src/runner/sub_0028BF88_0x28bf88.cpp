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

// Function: sub_0028BF88
// Address: 0x28bf88 - 0x28bfa8
void sub_0028BF88_0x28bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BF88_0x28bf88");
#endif

    ctx->pc = 0x28bf88u;

    // 0x28bf88: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BF88u;
    {
        const bool branch_taken_0x28bf88 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x28BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF88u;
        // 0x28bf8c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf88) {
            ctx->pc = 0x28BF98u;
            goto label_28bf98;
        }
    }
    ctx->pc = 0x28BF90u;
    // 0x28bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x28BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF90u;
        // 0x28bf94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BF98u;
label_28bf98:
    // 0x28bf98: 0x90620150  lbu         $v0, 0x150($v1)
    ctx->pc = 0x28bf98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x28bf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x28BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF9Cu;
        // 0x28bfa0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BFA4u;
    // 0x28bfa4: 0x0  nop
    ctx->pc = 0x28bfa4u;
    // NOP
    ctx->pc = 0x28bfa8u;
}
