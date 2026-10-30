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

// Function: sub_0042D880
// Address: 0x42d880 - 0x42d890
void sub_0042D880_0x42d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D880_0x42d880");
#endif

    ctx->pc = 0x42d880u;

    // 0x42d880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42d884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42d888: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x42D888u;
    SET_GPR_U32(ctx, 31, 0x42D890u);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x42D888u, 0x42D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D890u;
}
