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

// Function: sub_00315C30
// Address: 0x315c30 - 0x315c38
void sub_00315C30_0x315c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315C30_0x315c30");
#endif

    ctx->pc = 0x315c30u;

    // 0x315c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x315C30u;
    {
        const bool branch_taken_0x315c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C30u;
        // 0x315c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c30) {
            ctx->pc = 0x315C3Cu;
            return;
        }
    }
    ctx->pc = 0x315C38u;
}
