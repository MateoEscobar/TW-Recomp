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

// Function: sub_00433A10
// Address: 0x433a10 - 0x433a20
void sub_00433A10_0x433a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433A10_0x433a10");
#endif

    ctx->pc = 0x433a10u;

    // 0x433a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x433a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x433a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x433a18: 0xc040072  jal         func_1001C8
    ctx->pc = 0x433A18u;
    SET_GPR_U32(ctx, 31, 0x433A20u);
    ctx->pc = 0x433A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433A18u;
    // 0x433a1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001C8u, 0x433A18u, 0x433A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433A20u;
}
