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

// Function: sub_0042DD34
// Address: 0x42dd34 - 0x42dd40
void sub_0042DD34_0x42dd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DD34_0x42dd34");
#endif

    switch (ctx->pc) {
        case 0x42dd3cu: goto label_42dd3c;
        default: break;
    }

    ctx->pc = 0x42dd34u;

    // 0x42dd34: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x42DD34u;
    SET_GPR_U32(ctx, 31, 0x42DD3Cu);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x42DD34u, 0x42DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DD3Cu;
label_42dd3c:
    // 0x42dd3c: 0x0  nop
    ctx->pc = 0x42dd3cu;
    // NOP
    ctx->pc = 0x42dd40u;
}
