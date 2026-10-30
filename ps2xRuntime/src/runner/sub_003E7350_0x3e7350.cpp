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

// Function: sub_003E7350
// Address: 0x3e7350 - 0x3e735c
void sub_003E7350_0x3e7350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7350_0x3e7350");
#endif

    ctx->pc = 0x3e7350u;

    // 0x3e7350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e7350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7354: 0xc0f9c68  jal         func_3E71A0
    ctx->pc = 0x3E7354u;
    SET_GPR_U32(ctx, 31, 0x3E735Cu);
    ctx->pc = 0x3E7358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7354u;
    // 0x3e7358: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E71A0u, 0x3E7354u, 0x3E735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E735Cu;
}
