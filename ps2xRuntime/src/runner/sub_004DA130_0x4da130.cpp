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

// Function: sub_004DA130
// Address: 0x4da130 - 0x4da140
void sub_004DA130_0x4da130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA130_0x4da130");
#endif

    ctx->pc = 0x4da130u;

    // 0x4da130: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4da130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4da134: 0x810bae0  j           func_42EB80
    ctx->pc = 0x4DA134u;
    ctx->pc = 0x4DA138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA134u;
    // 0x4da138: 0x248441f0  addiu       $a0, $a0, 0x41F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EB80u, 0x4DA134u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DA13Cu;
    // 0x4da13c: 0x0  nop
    ctx->pc = 0x4da13cu;
    // NOP
    ctx->pc = 0x4da140u;
}
