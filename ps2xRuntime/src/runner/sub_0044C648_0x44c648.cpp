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

// Function: sub_0044C648
// Address: 0x44c648 - 0x44c658
void sub_0044C648_0x44c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C648_0x44c648");
#endif

    ctx->pc = 0x44c648u;

    // 0x44c648: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x44c648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x44c64c: 0x8111f76  j           func_447DD8
    ctx->pc = 0x44C64Cu;
    ctx->pc = 0x44C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C64Cu;
    // 0x44c650: 0x24a5e4a0  addiu       $a1, $a1, -0x1B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    sub_00447DD8_0x447dd8(rdram, ctx, runtime); return;
    ctx->pc = 0x44C654u;
    // 0x44c654: 0x0  nop
    ctx->pc = 0x44c654u;
    // NOP
    ctx->pc = 0x44c658u;
}
