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

// Function: sub_001FE720
// Address: 0x1fe720 - 0x1fe730
void sub_001FE720_0x1fe720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE720_0x1fe720");
#endif

    ctx->pc = 0x1fe720u;

    // 0x1fe720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe724: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fe724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fe728: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe72c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    ctx->pc = 0x1fe730u;
}
