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

// Function: sub_002A7594
// Address: 0x2a7594 - 0x2a759c
void sub_002A7594_0x2a7594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7594_0x2a7594");
#endif

    ctx->pc = 0x2a7594u;

    // 0x2a7594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7594u;
    {
        const bool branch_taken_0x2a7594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7594u;
        // 0x2a7598: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7594) {
            ctx->pc = 0x2A75A8u;
            return;
        }
    }
    ctx->pc = 0x2A759Cu;
}
