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

// Function: sub_00443930
// Address: 0x443930 - 0x443940
void sub_00443930_0x443930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443930_0x443930");
#endif

    ctx->pc = 0x443930u;

    // 0x443930: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x443930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443934: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x443934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x443938: 0x8110e2c  j           func_4438B0
    ctx->pc = 0x443938u;
    ctx->pc = 0x44393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443938u;
    // 0x44393c: 0x34841010  ori         $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4438B0u;
    entry_4438b0_0x443920(rdram, ctx, runtime); return;
    ctx->pc = 0x443940u;
}
