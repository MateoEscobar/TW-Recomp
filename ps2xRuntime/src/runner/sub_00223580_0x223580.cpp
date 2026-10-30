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

// Function: sub_00223580
// Address: 0x223580 - 0x223590
void sub_00223580_0x223580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223580_0x223580");
#endif

    ctx->pc = 0x223580u;

    // 0x223580: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x223580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x223584: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x223584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x223588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x223588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22358c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x22358cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x223590u;
}
