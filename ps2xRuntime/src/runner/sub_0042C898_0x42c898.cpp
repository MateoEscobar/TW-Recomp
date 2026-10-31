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

// Function: sub_0042C898
// Address: 0x42c898 - 0x42c8a8
void sub_0042C898_0x42c898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C898_0x42c898");
#endif

    ctx->pc = 0x42c898u;

    // 0x42c898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42c898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42c89c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42c8a0: 0xc10ce84  jal         func_433A10
    ctx->pc = 0x42C8A0u;
    SET_GPR_U32(ctx, 31, 0x42C8A8u);
    ctx->pc = 0x433A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A10u, 0x42C8A0u, 0x42C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C8A8u;
}
