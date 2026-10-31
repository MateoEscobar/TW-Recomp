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

// Function: sub_00105640
// Address: 0x105640 - 0x105678
void sub_00105640_0x105640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105640_0x105640");
#endif

    ctx->pc = 0x105640u;

    // 0x105640: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x105644: 0x8c62a8b0  lw          $v0, -0x5750($v1)
    ctx->pc = 0x105644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50A8B0u));
    // 0x105648: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105648u;
    {
        const bool branch_taken_0x105648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105648u;
        // 0x10564c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105648) {
            ctx->pc = 0x105664u;
            goto label_105664;
        }
    }
    ctx->pc = 0x105650u;
    // 0x105650: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x105650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x105654: 0x8c62a8ac  lw          $v0, -0x5754($v1)
    ctx->pc = 0x105654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50A8ACu));
    // 0x105658: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x105658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x10565c: 0x3e00008  jr          $ra
    ctx->pc = 0x10565Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10565Cu;
        // 0x105660: 0xac64a8ac  sw          $a0, -0x5754($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944940), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10565Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105664u;
label_105664:
    // 0x105664: 0x8c62a8a8  lw          $v0, -0x5758($v1)
    ctx->pc = 0x105664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944936)));
    // 0x105668: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x105668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x10566c: 0x3e00008  jr          $ra
    ctx->pc = 0x10566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10566Cu;
        // 0x105670: 0xac64a8a8  sw          $a0, -0x5758($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944936), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10566Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105674u;
    // 0x105674: 0x0  nop
    ctx->pc = 0x105674u;
    // NOP
    ctx->pc = 0x105678u;
}
