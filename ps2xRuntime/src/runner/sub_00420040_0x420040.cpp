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

// Function: sub_00420040
// Address: 0x420040 - 0x420048
void sub_00420040_0x420040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420040_0x420040");
#endif

    ctx->pc = 0x420040u;

    // 0x420040: 0xc1081a8  jal         func_4206A0
    ctx->pc = 0x420040u;
    SET_GPR_U32(ctx, 31, 0x420048u);
    ctx->pc = 0x420044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420040u;
    // 0x420044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4206A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4206A0u, 0x420040u, 0x420048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420048u;
}
