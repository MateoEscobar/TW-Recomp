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

// Function: sub_004D9EA0
// Address: 0x4d9ea0 - 0x4d9ea8
void sub_004D9EA0_0x4d9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9EA0_0x4d9ea0");
#endif

    ctx->pc = 0x4d9ea0u;

    // 0x4d9ea0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x4D9EA0u;
    {
        const bool branch_taken_0x4d9ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9ea0) {
            ctx->pc = 0x4D9E68u;
            return;
        }
    }
    ctx->pc = 0x4D9EA8u;
}
