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

// Function: sub_002F7328
// Address: 0x2f7328 - 0x2f7348
void sub_002F7328_0x2f7328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7328_0x2f7328");
#endif

    ctx->pc = 0x2f7328u;

    // 0x2f7328: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x2f7328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2f732c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F732Cu;
    {
        const bool branch_taken_0x2f732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F732Cu;
        // 0x2f7330: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f732c) {
            ctx->pc = 0x2F7340u;
            goto label_2f7340;
        }
    }
    ctx->pc = 0x2F7334u;
    // 0x2f7334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7338: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7338u;
        // 0x2f733c: 0xa083001f  sb          $v1, 0x1F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7340u;
label_2f7340:
    // 0x2f7340: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7340u;
        // 0x2f7344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7348u;
}
