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

// Function: sub_00153AB0
// Address: 0x153ab0 - 0x153abc
void sub_00153AB0_0x153ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153AB0_0x153ab0");
#endif

    ctx->pc = 0x153ab0u;

    // 0x153ab0: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x153ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x153ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x153AB4u;
    {
        const bool branch_taken_0x153ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AB4u;
        // 0x153ab8: 0x24103  sra         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ab4) {
            ctx->pc = 0x153AC4u;
            return;
        }
    }
    ctx->pc = 0x153ABCu;
}
