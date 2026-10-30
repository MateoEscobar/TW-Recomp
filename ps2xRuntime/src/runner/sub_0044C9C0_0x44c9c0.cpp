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

// Function: sub_0044C9C0
// Address: 0x44c9c0 - 0x44c9c8
void sub_0044C9C0_0x44c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C9C0_0x44c9c0");
#endif

    ctx->pc = 0x44c9c0u;

    // 0x44c9c0: 0x8113218  j           func_44C860
    ctx->pc = 0x44C9C0u;
    ctx->pc = 0x44C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C9C0u;
    // 0x44c9c4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C860u;
    sub_0044C860_0x44c860(rdram, ctx, runtime); return;
    ctx->pc = 0x44C9C8u;
}
