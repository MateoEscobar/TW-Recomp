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

// Function: sub_003234E8
// Address: 0x3234e8 - 0x323518
void sub_003234E8_0x3234e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003234E8_0x3234e8");
#endif

    ctx->pc = 0x3234e8u;

    // 0x3234e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3234e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3234ec: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3234ECu;
    {
        const bool branch_taken_0x3234ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3234ec) {
            ctx->pc = 0x3234F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3234ECu;
            // 0x3234f0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32350Cu;
            goto label_32350c;
        }
    }
    ctx->pc = 0x3234F4u;
    // 0x3234f4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3234f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x3234f8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3234f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3234fc: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x3234fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x323500: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x323500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x323504: 0x3e00008  jr          $ra
    ctx->pc = 0x323504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323504u;
        // 0x323508: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32350Cu;
label_32350c:
    // 0x32350c: 0x3e00008  jr          $ra
    ctx->pc = 0x32350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32350Cu;
        // 0x323510: 0x244247c0  addiu       $v0, $v0, 0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32350Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323514u;
    // 0x323514: 0x0  nop
    ctx->pc = 0x323514u;
    // NOP
    ctx->pc = 0x323518u;
}
