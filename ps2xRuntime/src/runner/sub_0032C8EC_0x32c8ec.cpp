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

// Function: sub_0032C8EC
// Address: 0x32c8ec - 0x32c900
void sub_0032C8EC_0x32c8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C8EC_0x32c8ec");
#endif

    ctx->pc = 0x32c8ecu;

    // 0x32c8ec: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x32c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32c8f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x32c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32c8f4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x32c8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x32c8f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32C8F8u;
    {
        const bool branch_taken_0x32c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8F8u;
        // 0x32c8fc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8f8) {
            ctx->pc = 0x32C904u;
            return;
        }
    }
    ctx->pc = 0x32C900u;
}
