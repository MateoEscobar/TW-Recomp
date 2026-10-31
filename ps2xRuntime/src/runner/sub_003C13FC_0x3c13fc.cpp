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

// Function: sub_003C13FC
// Address: 0x3c13fc - 0x3c1404
void sub_003C13FC_0x3c13fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C13FC_0x3c13fc");
#endif

    ctx->pc = 0x3c13fcu;

    // 0x3c13fc: 0xc0e8616  jal         func_3A1858
    ctx->pc = 0x3C13FCu;
    SET_GPR_U32(ctx, 31, 0x3C1404u);
    ctx->pc = 0x3C1400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C13FCu;
    // 0x3c1400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3C13FCu, 0x3C1404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1404u;
}
