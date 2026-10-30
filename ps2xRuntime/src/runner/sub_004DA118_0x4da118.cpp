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

// Function: sub_004DA118
// Address: 0x4da118 - 0x4da130
void sub_004DA118_0x4da118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA118_0x4da118");
#endif

    ctx->pc = 0x4da118u;

    // 0x4da118: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4da118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4da11c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4da11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x4da120: 0x248441f0  addiu       $a0, $a0, 0x41F0
    ctx->pc = 0x4da120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16880));
    // 0x4da124: 0x810bad6  j           func_42EB58
    ctx->pc = 0x4DA124u;
    ctx->pc = 0x4DA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA124u;
    // 0x4da128: 0x24a54ae8  addiu       $a1, $a1, 0x4AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EB58u, 0x4DA124u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DA12Cu;
    // 0x4da12c: 0x0  nop
    ctx->pc = 0x4da12cu;
    // NOP
    ctx->pc = 0x4da130u;
}
