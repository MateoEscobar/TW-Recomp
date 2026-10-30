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

// Function: sub_003213B8
// Address: 0x3213b8 - 0x3213c0
void sub_003213B8_0x3213b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003213B8_0x3213b8");
#endif

    ctx->pc = 0x3213b8u;

    // 0x3213b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3213B8u;
    {
        const bool branch_taken_0x3213b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3213BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213B8u;
        // 0x3213bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213b8) {
            ctx->pc = 0x3213C4u;
            return;
        }
    }
    ctx->pc = 0x3213C0u;
}
