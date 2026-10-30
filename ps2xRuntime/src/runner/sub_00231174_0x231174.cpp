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

// Function: sub_00231174
// Address: 0x231174 - 0x23117c
void sub_00231174_0x231174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231174_0x231174");
#endif

    ctx->pc = 0x231174u;

    // 0x231174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231174u;
    {
        const bool branch_taken_0x231174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231174u;
        // 0x231178: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231174) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x23117Cu;
}
