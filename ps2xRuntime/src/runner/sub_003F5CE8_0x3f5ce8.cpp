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

// Function: sub_003F5CE8
// Address: 0x3f5ce8 - 0x3f5cf4
void sub_003F5CE8_0x3f5ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5CE8_0x3f5ce8");
#endif

    ctx->pc = 0x3f5ce8u;

    // 0x3f5ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5cec: 0xc0fd254  jal         func_3F4950
    ctx->pc = 0x3F5CECu;
    SET_GPR_U32(ctx, 31, 0x3F5CF4u);
    ctx->pc = 0x3F5CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5CECu;
    // 0x3f5cf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4950u, 0x3F5CECu, 0x3F5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5CF4u;
}
