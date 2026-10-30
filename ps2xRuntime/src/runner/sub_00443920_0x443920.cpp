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

// Function: sub_00443920
// Address: 0x443920 - 0x443930
void sub_00443920_0x443920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443920_0x443920");
#endif

    ctx->pc = 0x443920u;

    // 0x443920: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x443920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443924: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x443924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x443928: 0x8110e2c  j           func_4438B0
    ctx->pc = 0x443928u;
    ctx->pc = 0x44392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443928u;
    // 0x44392c: 0x34841000  ori         $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4438B0u;
    entry_4438b0_0x443920(rdram, ctx, runtime); return;
    ctx->pc = 0x443930u;
}
