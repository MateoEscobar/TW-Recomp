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

// Function: sub_001A8578
// Address: 0x1a8578 - 0x1a8580
void sub_001A8578_0x1a8578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8578_0x1a8578");
#endif

    ctx->pc = 0x1a8578u;

    // 0x1a8578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8578u;
    {
        const bool branch_taken_0x1a8578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8578u;
        // 0x1a857c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8578) {
            ctx->pc = 0x1A8584u;
            return;
        }
    }
    ctx->pc = 0x1A8580u;
}
