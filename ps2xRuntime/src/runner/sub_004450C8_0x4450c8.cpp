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

// Function: sub_004450C8
// Address: 0x4450c8 - 0x4450e0
void sub_004450C8_0x4450c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004450C8_0x4450c8");
#endif

    ctx->pc = 0x4450c8u;

    // 0x4450c8: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4450c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4450cc: 0x810f434  j           func_43D0D0
    ctx->pc = 0x4450CCu;
    ctx->pc = 0x4450D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4450CCu;
    // 0x4450d0: 0x8c44a530  lw          $a0, -0x5AD0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0D0u;
    sub_0043D0D0_0x43d0d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4450D4u;
    // 0x4450d4: 0x0  nop
    ctx->pc = 0x4450d4u;
    // NOP
    // 0x4450d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4450d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4450dc: 0x0  nop
    ctx->pc = 0x4450dcu;
    // NOP
    ctx->pc = 0x4450e0u;
}
