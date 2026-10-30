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

// Function: sub_0032050C
// Address: 0x32050c - 0x320514
void sub_0032050C_0x32050c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032050C_0x32050c");
#endif

    ctx->pc = 0x32050cu;

    // 0x32050c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32050Cu;
    {
        const bool branch_taken_0x32050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32050Cu;
        // 0x320510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32050c) {
            ctx->pc = 0x320518u;
            return;
        }
    }
    ctx->pc = 0x320514u;
}
