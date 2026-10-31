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

// Function: sub_003E7FF8
// Address: 0x3e7ff8 - 0x3e8004
void sub_003E7FF8_0x3e7ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7FF8_0x3e7ff8");
#endif

    ctx->pc = 0x3e7ff8u;

    // 0x3e7ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7ffc: 0xc0f9ece  jal         func_3E7B38
    ctx->pc = 0x3E7FFCu;
    SET_GPR_U32(ctx, 31, 0x3E8004u);
    ctx->pc = 0x3E8000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7FFCu;
    // 0x3e8000: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7B38u, 0x3E7FFCu, 0x3E8004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8004u;
}
