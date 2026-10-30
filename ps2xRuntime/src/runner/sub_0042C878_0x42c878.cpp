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

// Function: sub_0042C878
// Address: 0x42c878 - 0x42c880
void sub_0042C878_0x42c878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C878_0x42c878");
#endif

    ctx->pc = 0x42c878u;

    // 0x42c878: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x42C878u;
    {
        const bool branch_taken_0x42c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c878) {
            ctx->pc = 0x42C840u;
            return;
        }
    }
    ctx->pc = 0x42C880u;
}
