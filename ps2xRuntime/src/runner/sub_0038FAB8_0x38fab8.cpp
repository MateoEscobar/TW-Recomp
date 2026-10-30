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

// Function: sub_0038FAB8
// Address: 0x38fab8 - 0x38fae0
void sub_0038FAB8_0x38fab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FAB8_0x38fab8");
#endif

    ctx->pc = 0x38fab8u;

    // 0x38fab8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x38fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x38fabc: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x38fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x38fac0: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x38fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x38fac4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38fac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fac8: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x38fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
    // 0x38facc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38faccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38fad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fad4: 0xacc8001c  sw          $t0, 0x1C($a2)
    ctx->pc = 0x38fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 8));
    // 0x38fad8: 0x3e00008  jr          $ra
    ctx->pc = 0x38FAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAD8u;
        // 0x38fadc: 0xac890020  sw          $t1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FAE0u;
}
