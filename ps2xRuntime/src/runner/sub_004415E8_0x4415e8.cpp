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

// Function: sub_004415E8
// Address: 0x4415e8 - 0x4415f8
void sub_004415E8_0x4415e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004415E8_0x4415e8");
#endif

    ctx->pc = 0x4415e8u;

    // 0x4415e8: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4415e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4415ec: 0x810f430  j           func_43D0C0
    ctx->pc = 0x4415ECu;
    ctx->pc = 0x4415F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4415ECu;
    // 0x4415f0: 0x8c448ef4  lw          $a0, -0x710C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0C0u;
    sub_0043D0C0_0x43d0c0(rdram, ctx, runtime); return;
    ctx->pc = 0x4415F4u;
    // 0x4415f4: 0x0  nop
    ctx->pc = 0x4415f4u;
    // NOP
    ctx->pc = 0x4415f8u;
}
