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

// Function: sub_00222E40
// Address: 0x222e40 - 0x222e60
void sub_00222E40_0x222e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222E40_0x222e40");
#endif

    ctx->pc = 0x222e40u;

    // 0x222e40: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x222e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x222e44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222E44u;
    {
        const bool branch_taken_0x222e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e44) {
            ctx->pc = 0x222E54u;
            goto label_222e54;
        }
    }
    ctx->pc = 0x222E4Cu;
    // 0x222e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x222E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E4Cu;
        // 0x222e50: 0x84420144  lh          $v0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222E54u;
label_222e54:
    // 0x222e54: 0x3e00008  jr          $ra
    ctx->pc = 0x222E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E54u;
        // 0x222e58: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222E5Cu;
    // 0x222e5c: 0x0  nop
    ctx->pc = 0x222e5cu;
    // NOP
    ctx->pc = 0x222e60u;
}
