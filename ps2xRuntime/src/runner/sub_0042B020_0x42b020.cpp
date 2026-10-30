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

// Function: sub_0042B020
// Address: 0x42b020 - 0x42b040
void sub_0042B020_0x42b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B020_0x42b020");
#endif

    ctx->pc = 0x42b020u;

    // 0x42b020: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x42b020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x42b024: 0x8c62f280  lw          $v0, -0xD80($v1)
    ctx->pc = 0x42b024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6FF280u));
    // 0x42b028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42B028u;
    {
        const bool branch_taken_0x42b028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B028u;
        // 0x42b02c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b028) {
            ctx->pc = 0x42B038u;
            goto label_42b038;
        }
    }
    ctx->pc = 0x42B030u;
    // 0x42b030: 0x810abdc  j           func_42AF70
    ctx->pc = 0x42B030u;
    ctx->pc = 0x42B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B030u;
    // 0x42b034: 0xac62f280  sw          $v0, -0xD80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42AF70u, 0x42B030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x42B038u;
label_42b038:
    // 0x42b038: 0x3e00008  jr          $ra
    ctx->pc = 0x42B038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42B040u;
}
