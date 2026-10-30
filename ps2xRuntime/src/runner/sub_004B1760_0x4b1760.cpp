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

// Function: sub_004B1760
// Address: 0x4b1760 - 0x4b1798
void sub_004B1760_0x4b1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1760_0x4b1760");
#endif

    ctx->pc = 0x4b1760u;

    // 0x4b1760: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4b1760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4b1764: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1764u;
    {
        const bool branch_taken_0x4b1764 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1764) {
            ctx->pc = 0x4B1768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1764u;
            // 0x4b1768: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1774u;
            goto label_4b1774;
        }
    }
    ctx->pc = 0x4B176Cu;
    // 0x4b176c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B176Cu;
        // 0x4b1770: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1774u;
label_4b1774:
    // 0x4b1774: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b1774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b1778: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B1778u;
    {
        const bool branch_taken_0x4b1778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1778) {
            ctx->pc = 0x4B177Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1778u;
            // 0x4b177c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1784u;
            goto label_4b1784;
        }
    }
    ctx->pc = 0x4B1780u;
    // 0x4b1780: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4b1780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4b1784:
    // 0x4b1784: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4b1784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4b1788: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x4b1788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b178c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4b178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b1790: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1790u;
        // 0x4b1794: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1798u;
}
