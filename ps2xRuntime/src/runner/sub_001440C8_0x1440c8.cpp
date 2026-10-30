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

// Function: sub_001440C8
// Address: 0x1440c8 - 0x1440f0
void sub_001440C8_0x1440c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001440C8_0x1440c8");
#endif

    ctx->pc = 0x1440c8u;

    // 0x1440c8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1440c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1440cc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x1440ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x1440d0: 0x8cc3b6d0  lw          $v1, -0x4930($a2)
    ctx->pc = 0x1440d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B6D0u));
    // 0x1440d4: 0x24a595f0  addiu       $a1, $a1, -0x6A10
    ctx->pc = 0x1440d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940144));
    // 0x1440d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1440d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1440dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1440dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1440e0: 0xacc3b6d0  sw          $v1, -0x4930($a2)
    ctx->pc = 0x1440e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294948560), GPR_U32(ctx, 3));
    // 0x1440e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1440e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1440e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1440E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1440ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1440E8u;
        // 0x1440ec: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1440E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1440F0u;
}
