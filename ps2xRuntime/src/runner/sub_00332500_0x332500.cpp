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

// Function: sub_00332500
// Address: 0x332500 - 0x332530
void sub_00332500_0x332500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332500_0x332500");
#endif

    ctx->pc = 0x332500u;

    // 0x332500: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x332500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x332504: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x332504u;
    {
        const bool branch_taken_0x332504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332504u;
        // 0x332508: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332504) {
            ctx->pc = 0x332528u;
            goto label_332528;
        }
    }
    ctx->pc = 0x33250Cu;
    // 0x33250c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x33250cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x332510: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x332510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x332514: 0x246365f0  addiu       $v1, $v1, 0x65F0
    ctx->pc = 0x332514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26096));
    // 0x332518: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x332518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33251c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332520: 0x3e00008  jr          $ra
    ctx->pc = 0x332520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332520u;
        // 0x332524: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332528u;
label_332528:
    // 0x332528: 0x3e00008  jr          $ra
    ctx->pc = 0x332528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332528u;
        // 0x33252c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332530u;
}
