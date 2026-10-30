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

// Function: sub_002516D0
// Address: 0x2516d0 - 0x2516f0
void sub_002516D0_0x2516d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002516D0_0x2516d0");
#endif

    ctx->pc = 0x2516d0u;

    // 0x2516d0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2516d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2516d4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2516d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2516d8: 0x8c43a21c  lw          $v1, -0x5DE4($v0)
    ctx->pc = 0x2516d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x2516dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2516dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2516e0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2516e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2516e4: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x2516e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
    // 0x2516e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2516E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2516ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516E8u;
        // 0x2516ec: 0xa4860004  sh          $a2, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2516E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2516F0u;
}
