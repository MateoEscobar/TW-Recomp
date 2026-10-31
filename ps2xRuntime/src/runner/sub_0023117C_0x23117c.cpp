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

// Function: sub_0023117C
// Address: 0x23117c - 0x231184
void sub_0023117C_0x23117c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023117C_0x23117c");
#endif

    ctx->pc = 0x23117cu;

    // 0x23117c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23117Cu;
    {
        const bool branch_taken_0x23117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23117Cu;
        // 0x231180: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23117c) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x231184u;
}
