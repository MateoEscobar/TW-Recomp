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

// Function: sub_001C8628
// Address: 0x1c8628 - 0x1c8658
void sub_001C8628_0x1c8628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8628_0x1c8628");
#endif

    ctx->pc = 0x1c8628u;

    // 0x1c8628: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c8628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c862c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c862cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8630: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c8634: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c8634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8638: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8638u;
    {
        const bool branch_taken_0x1c8638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8638u;
        // 0x1c863c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8638) {
            ctx->pc = 0x1C8648u;
            goto label_1c8648;
        }
    }
    ctx->pc = 0x1C8640u;
    // 0x1c8640: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c8640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1c8644: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c8644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c8648:
    // 0x1c8648: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c8648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c864c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C864Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C864Cu;
        // 0x1c8650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C864Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8654u;
    // 0x1c8654: 0x0  nop
    ctx->pc = 0x1c8654u;
    // NOP
    ctx->pc = 0x1c8658u;
}
