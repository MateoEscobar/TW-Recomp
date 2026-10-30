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

// Function: sub_00443940
// Address: 0x443940 - 0x443950
void sub_00443940_0x443940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443940_0x443940");
#endif

    ctx->pc = 0x443940u;

    // 0x443940: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x443940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443944: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x443944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x443948: 0x8110e2c  j           func_4438B0
    ctx->pc = 0x443948u;
    ctx->pc = 0x44394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443948u;
    // 0x44394c: 0x34841020  ori         $a0, $a0, 0x1020 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4438B0u;
    entry_4438b0_0x443920(rdram, ctx, runtime); return;
    ctx->pc = 0x443950u;
}
