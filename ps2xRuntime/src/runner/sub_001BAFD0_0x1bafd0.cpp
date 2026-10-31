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

// Function: sub_001BAFD0
// Address: 0x1bafd0 - 0x1bb000
void sub_001BAFD0_0x1bafd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAFD0_0x1bafd0");
#endif

    ctx->pc = 0x1bafd0u;

    // 0x1bafd0: 0x8c8201a4  lw          $v0, 0x1A4($a0)
    ctx->pc = 0x1bafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x1bafd4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAFD4u;
    {
        const bool branch_taken_0x1bafd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bafd4) {
            ctx->pc = 0x1BAFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAFD4u;
            // 0x1bafd8: 0x8c8301a8  lw          $v1, 0x1A8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAFE4u;
            goto label_1bafe4;
        }
    }
    ctx->pc = 0x1BAFDCu;
    // 0x1bafdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFDCu;
        // 0x1bafe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAFE4u;
label_1bafe4:
    // 0x1bafe4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bafe8: 0xac8201a4  sw          $v0, 0x1A4($a0)
    ctx->pc = 0x1bafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 2));
    // 0x1bafec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bafecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1baff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1baff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFF4u;
        // 0x1baff8: 0xac8301a8  sw          $v1, 0x1A8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAFFCu;
    // 0x1baffc: 0x0  nop
    ctx->pc = 0x1baffcu;
    // NOP
    ctx->pc = 0x1bb000u;
}
