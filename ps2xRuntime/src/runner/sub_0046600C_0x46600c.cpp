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

// Function: sub_0046600C
// Address: 0x46600c - 0x466018
void sub_0046600C_0x46600c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046600C_0x46600c");
#endif

    ctx->pc = 0x46600cu;

    // 0x46600c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x46600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x466010: 0xfca00078  sd          $zero, 0x78($a1)
    ctx->pc = 0x466010u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 0));
    // 0x466014: 0xfca20070  sd          $v0, 0x70($a1)
    ctx->pc = 0x466014u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 2));
    ctx->pc = 0x466018u;
}
