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

// Function: sub_00323300
// Address: 0x323300 - 0x323318
void sub_00323300_0x323300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323300_0x323300");
#endif

    ctx->pc = 0x323300u;

    // 0x323300: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x323300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x323304: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x323304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x323308: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x323308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32330c: 0x3e00008  jr          $ra
    ctx->pc = 0x32330Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32330Cu;
        // 0x323310: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32330Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323314u;
    // 0x323314: 0x0  nop
    ctx->pc = 0x323314u;
    // NOP
    ctx->pc = 0x323318u;
}
