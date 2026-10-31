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

// Function: sub_00153ABC
// Address: 0x153abc - 0x153ac4
void sub_00153ABC_0x153abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153ABC_0x153abc");
#endif

    ctx->pc = 0x153abcu;

    // 0x153abc: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x153abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x153ac0: 0x24143  sra         $t0, $v0, 5
    ctx->pc = 0x153ac0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x153ac4u;
}
