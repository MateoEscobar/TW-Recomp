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

// Function: sub_001E7300
// Address: 0x1e7300 - 0x1e7330
void sub_001E7300_0x1e7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7300_0x1e7300");
#endif

    ctx->pc = 0x1e7300u;

    // 0x1e7300: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1e7300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1e7304: 0x24860310  addiu       $a2, $a0, 0x310
    ctx->pc = 0x1e7304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x1e7308: 0xac850214  sw          $a1, 0x214($a0)
    ctx->pc = 0x1e7308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 5));
    // 0x1e730c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e730cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e7310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e7310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e7314: 0x8cc300c8  lw          $v1, 0xC8($a2)
    ctx->pc = 0x1e7314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x1e7318: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7318u;
    {
        const bool branch_taken_0x1e7318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7318) {
            ctx->pc = 0x1E7328u;
            goto label_1e7328;
        }
    }
    ctx->pc = 0x1E7320u;
    // 0x1e7320: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7320u;
        // 0x1e7324: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7328u;
label_1e7328:
    // 0x1e7328: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7328u;
        // 0x1e732c: 0xacc50004  sw          $a1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7330u;
}
