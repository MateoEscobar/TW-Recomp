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

// Function: sub_00422AE8
// Address: 0x422ae8 - 0x422b00
void sub_00422AE8_0x422ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422AE8_0x422ae8");
#endif

    ctx->pc = 0x422ae8u;

    // 0x422ae8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x422ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x422aec: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x422aecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x422af0: 0x24425840  addiu       $v0, $v0, 0x5840
    ctx->pc = 0x422af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22592));
    // 0x422af4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x422af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x422af8: 0x3e00008  jr          $ra
    ctx->pc = 0x422AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422AF8u;
        // 0x422afc: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422B00u;
}
