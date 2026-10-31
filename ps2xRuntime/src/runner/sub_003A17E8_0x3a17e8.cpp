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

// Function: sub_003A17E8
// Address: 0x3a17e8 - 0x3a1810
void sub_003A17E8_0x3a17e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A17E8_0x3a17e8");
#endif

    ctx->pc = 0x3a17e8u;

    // 0x3a17e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a17ec: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A17ECu;
    {
        const bool branch_taken_0x3a17ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17ECu;
        // 0x3a17f0: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a17ec) {
            ctx->pc = 0x3A1804u;
            goto label_3a1804;
        }
    }
    ctx->pc = 0x3A17F4u;
    // 0x3a17f4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3a17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3a17f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a17f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a17fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A17FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17FCu;
        // 0x3a1800: 0xac820054  sw          $v0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A17FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1804u;
label_3a1804:
    // 0x3a1804: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3a1804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3a1808: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1808u;
        // 0x3a180c: 0xac820054  sw          $v0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1810u;
}
