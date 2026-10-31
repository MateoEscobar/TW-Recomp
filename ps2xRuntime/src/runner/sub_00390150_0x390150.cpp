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

// Function: sub_00390150
// Address: 0x390150 - 0x390180
void sub_00390150_0x390150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390150_0x390150");
#endif

    ctx->pc = 0x390150u;

    // 0x390150: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x390150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x390154: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x390154u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x390158: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x390158u;
    {
        const bool branch_taken_0x390158 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x39015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390158u;
        // 0x39015c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390158) {
            ctx->pc = 0x390174u;
            goto label_390174;
        }
    }
    ctx->pc = 0x390160u;
    // 0x390160: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x390160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x390164: 0x2442bd38  addiu       $v0, $v0, -0x42C8
    ctx->pc = 0x390164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950200));
    // 0x390168: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x390168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39016c: 0x3e00008  jr          $ra
    ctx->pc = 0x39016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39016Cu;
        // 0x390170: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39016Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390174u;
label_390174:
    // 0x390174: 0x3e00008  jr          $ra
    ctx->pc = 0x390174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390174u;
        // 0x390178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39017Cu;
    // 0x39017c: 0x0  nop
    ctx->pc = 0x39017cu;
    // NOP
    ctx->pc = 0x390180u;
}
