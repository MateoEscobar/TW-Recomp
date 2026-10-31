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

// Function: sub_00447C60
// Address: 0x447c60 - 0x447c70
void sub_00447C60_0x447c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447C60_0x447c60");
#endif

    ctx->pc = 0x447c60u;

    // 0x447c60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x447c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447c64: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x447c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x447c68: 0x810fe1c  j           func_43F870
    ctx->pc = 0x447C68u;
    ctx->pc = 0x447C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447C68u;
    // 0x447c6c: 0x2484e1a0  addiu       $a0, $a0, -0x1E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    sub_0043F870_0x43f870(rdram, ctx, runtime); return;
    ctx->pc = 0x447C70u;
}
