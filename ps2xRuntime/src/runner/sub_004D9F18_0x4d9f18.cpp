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

// Function: sub_004D9F18
// Address: 0x4d9f18 - 0x4d9f20
void sub_004D9F18_0x4d9f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9F18_0x4d9f18");
#endif

    ctx->pc = 0x4d9f18u;

    // 0x4d9f18: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x4D9F18u;
    {
        const bool branch_taken_0x4d9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9f18) {
            ctx->pc = 0x4D9ED8u;
            return;
        }
    }
    ctx->pc = 0x4D9F20u;
}
