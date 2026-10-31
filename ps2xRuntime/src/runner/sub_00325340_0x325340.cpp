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

// Function: sub_00325340
// Address: 0x325340 - 0x325350
void sub_00325340_0x325340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325340_0x325340");
#endif

    ctx->pc = 0x325340u;

    // 0x325340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x325344: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x325344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x325348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32534c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32534cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x325350u;
}
