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

// Function: sub_003E6C18
// Address: 0x3e6c18 - 0x3e6c24
void sub_003E6C18_0x3e6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6C18_0x3e6c18");
#endif

    ctx->pc = 0x3e6c18u;

    // 0x3e6c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c1c: 0xc0f9a98  jal         func_3E6A60
    ctx->pc = 0x3E6C1Cu;
    SET_GPR_U32(ctx, 31, 0x3E6C24u);
    ctx->pc = 0x3E6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C1Cu;
    // 0x3e6c20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6A60u, 0x3E6C1Cu, 0x3E6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C24u;
}
