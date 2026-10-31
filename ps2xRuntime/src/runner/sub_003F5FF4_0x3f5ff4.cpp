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

// Function: sub_003F5FF4
// Address: 0x3f5ff4 - 0x3f5ffc
void sub_003F5FF4_0x3f5ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5FF4_0x3f5ff4");
#endif

    ctx->pc = 0x3f5ff4u;

    // 0x3f5ff4: 0xc0fd61c  jal         func_3F5870
    ctx->pc = 0x3F5FF4u;
    SET_GPR_U32(ctx, 31, 0x3F5FFCu);
    ctx->pc = 0x3F5FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5FF4u;
    // 0x3f5ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5870u, 0x3F5FF4u, 0x3F5FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5FFCu;
}
