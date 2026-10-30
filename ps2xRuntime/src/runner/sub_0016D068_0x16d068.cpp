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

// Function: sub_0016D068
// Address: 0x16d068 - 0x16d074
void sub_0016D068_0x16d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D068_0x16d068");
#endif

    ctx->pc = 0x16d068u;

    // 0x16d068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16d068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d06c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16d070: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16d070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    ctx->pc = 0x16d074u;
}
