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

// Function: sub_001091F8
// Address: 0x1091f8 - 0x109200
void sub_001091F8_0x1091f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001091F8_0x1091f8");
#endif

    ctx->pc = 0x1091f8u;

    // 0x1091f8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1091f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1091fc: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1091fcu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    ctx->pc = 0x109200u;
}
