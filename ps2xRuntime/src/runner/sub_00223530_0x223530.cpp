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

// Function: sub_00223530
// Address: 0x223530 - 0x223540
void sub_00223530_0x223530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223530_0x223530");
#endif

    ctx->pc = 0x223530u;

    // 0x223530: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x223530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x223534: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x223534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x223538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22353c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x22353cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x223540u;
}
