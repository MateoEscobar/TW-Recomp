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

// Function: sub_0042EB34
// Address: 0x42eb34 - 0x42eb3c
void sub_0042EB34_0x42eb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EB34_0x42eb34");
#endif

    ctx->pc = 0x42eb34u;

    // 0x42eb34: 0xc10ce84  jal         func_433A10
    ctx->pc = 0x42EB34u;
    SET_GPR_U32(ctx, 31, 0x42EB3Cu);
    ctx->pc = 0x433A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A10u, 0x42EB34u, 0x42EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42EB3Cu;
}
