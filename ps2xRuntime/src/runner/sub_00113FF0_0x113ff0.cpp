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

// Function: sub_00113FF0
// Address: 0x113ff0 - 0x114000
void sub_00113FF0_0x113ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113FF0_0x113ff0");
#endif

    ctx->pc = 0x113ff0u;

    // 0x113ff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ff4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113ffc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x113ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    ctx->pc = 0x114000u;
}
