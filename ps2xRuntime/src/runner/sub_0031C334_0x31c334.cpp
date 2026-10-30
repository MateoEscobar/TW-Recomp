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

// Function: sub_0031C334
// Address: 0x31c334 - 0x31c33c
void sub_0031C334_0x31c334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C334_0x31c334");
#endif

    ctx->pc = 0x31c334u;

    // 0x31c334: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C334u;
    {
        const bool branch_taken_0x31c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C334u;
        // 0x31c338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c334) {
            ctx->pc = 0x31C340u;
            return;
        }
    }
    ctx->pc = 0x31C33Cu;
}
