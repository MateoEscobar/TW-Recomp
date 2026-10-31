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

// Function: sub_00443738
// Address: 0x443738 - 0x443740
void sub_00443738_0x443738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443738_0x443738");
#endif

    ctx->pc = 0x443738u;

    // 0x443738: 0x81112b6  j           func_444AD8
    ctx->pc = 0x443738u;
    ctx->pc = 0x444AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444AD8u, 0x443738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x443740u;
}
