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

// Function: sub_002A759C
// Address: 0x2a759c - 0x2a75a4
void sub_002A759C_0x2a759c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A759C_0x2a759c");
#endif

    ctx->pc = 0x2a759cu;

    // 0x2a759c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A759Cu;
    {
        const bool branch_taken_0x2a759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A759Cu;
        // 0x2a75a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a759c) {
            ctx->pc = 0x2A75A8u;
            return;
        }
    }
    ctx->pc = 0x2A75A4u;
}
