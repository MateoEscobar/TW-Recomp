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

// Function: sub_0035C278
// Address: 0x35c278 - 0x35c288
void sub_0035C278_0x35c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C278_0x35c278");
#endif

    ctx->pc = 0x35c278u;

    // 0x35c278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35c27c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c280: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35c280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35c284: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35c284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    ctx->pc = 0x35c288u;
}
