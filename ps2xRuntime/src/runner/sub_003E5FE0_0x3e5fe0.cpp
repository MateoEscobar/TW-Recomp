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

// Function: sub_003E5FE0
// Address: 0x3e5fe0 - 0x3e5fec
void sub_003E5FE0_0x3e5fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5FE0_0x3e5fe0");
#endif

    ctx->pc = 0x3e5fe0u;

    // 0x3e5fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e5fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5fe4: 0xc0f97ac  jal         func_3E5EB0
    ctx->pc = 0x3E5FE4u;
    SET_GPR_U32(ctx, 31, 0x3E5FECu);
    ctx->pc = 0x3E5FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5FE4u;
    // 0x3e5fe8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5EB0u, 0x3E5FE4u, 0x3E5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5FECu;
}
