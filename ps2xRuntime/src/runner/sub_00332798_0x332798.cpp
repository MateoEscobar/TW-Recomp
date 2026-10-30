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

// Function: sub_00332798
// Address: 0x332798 - 0x3327d8
void sub_00332798_0x332798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332798_0x332798");
#endif

    ctx->pc = 0x332798u;

    // 0x332798: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x332798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33279c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33279Cu;
    {
        const bool branch_taken_0x33279c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3327A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33279Cu;
        // 0x3327a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33279c) {
            ctx->pc = 0x3327B4u;
            goto label_3327b4;
        }
    }
    ctx->pc = 0x3327A4u;
    // 0x3327a4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3327A4u;
    {
        const bool branch_taken_0x3327a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3327A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327A4u;
        // 0x3327a8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3327a4) {
            ctx->pc = 0x3327C0u;
            goto label_3327c0;
        }
    }
    ctx->pc = 0x3327ACu;
    // 0x3327ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3327ACu;
    {
        const bool branch_taken_0x3327ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3327ac) {
            ctx->pc = 0x3327CCu;
            goto label_3327cc;
        }
    }
    ctx->pc = 0x3327B4u;
label_3327b4:
    // 0x3327b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3327b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3327b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3327B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3327BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327B8u;
        // 0x3327bc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3327B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3327C0u;
label_3327c0:
    // 0x3327c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3327c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3327c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3327C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3327C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327C4u;
        // 0x3327c8: 0x84620004  lh          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3327C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3327CCu;
label_3327cc:
    // 0x3327cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3327CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3327CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3327D4u;
    // 0x3327d4: 0x0  nop
    ctx->pc = 0x3327d4u;
    // NOP
    ctx->pc = 0x3327d8u;
}
