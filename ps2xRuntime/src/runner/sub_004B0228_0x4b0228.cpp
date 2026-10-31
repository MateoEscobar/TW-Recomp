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

// Function: sub_004B0228
// Address: 0x4b0228 - 0x4b0250
void sub_004B0228_0x4b0228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0228_0x4b0228");
#endif

    ctx->pc = 0x4b0228u;

    // 0x4b0228: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B0228u;
    {
        const bool branch_taken_0x4b0228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0228u;
        // 0x4b022c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0228) {
            ctx->pc = 0x4B023Cu;
            goto label_4b023c;
        }
    }
    ctx->pc = 0x4B0230u;
    // 0x4b0230: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x4b0230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x4b0234: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0234u;
        // 0x4b0238: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B023Cu;
label_4b023c:
    // 0x4b023c: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x4b023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x4b0240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b0240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b0244: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0244u;
        // 0x4b0248: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B024Cu;
    // 0x4b024c: 0x0  nop
    ctx->pc = 0x4b024cu;
    // NOP
    ctx->pc = 0x4b0250u;
}
