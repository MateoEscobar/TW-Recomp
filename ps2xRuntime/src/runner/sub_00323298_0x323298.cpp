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

// Function: sub_00323298
// Address: 0x323298 - 0x3232c0
void sub_00323298_0x323298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323298_0x323298");
#endif

    ctx->pc = 0x323298u;

    // 0x323298: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x323298u;
    {
        const bool branch_taken_0x323298 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x323298) {
            ctx->pc = 0x32329Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323298u;
            // 0x32329c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3232B4u;
            goto label_3232b4;
        }
    }
    ctx->pc = 0x3232A0u;
    // 0x3232a0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3232a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3232a4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3232a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3232a8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3232a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3232ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3232ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3232B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232ACu;
        // 0x3232b0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3232ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3232B4u;
label_3232b4:
    // 0x3232b4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3232b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3232b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3232B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3232BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232B8u;
        // 0x3232bc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3232B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3232C0u;
}
