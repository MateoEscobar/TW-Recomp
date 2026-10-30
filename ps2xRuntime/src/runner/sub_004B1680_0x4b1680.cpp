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

// Function: sub_004B1680
// Address: 0x4b1680 - 0x4b16a0
void sub_004B1680_0x4b1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1680_0x4b1680");
#endif

    switch (ctx->pc) {
        case 0x4b1690u: goto label_4b1690;
        default: break;
    }

    ctx->pc = 0x4b1680u;

    // 0x4b1680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1688: 0xc12c54e  jal         func_4B1538
    ctx->pc = 0x4B1688u;
    SET_GPR_U32(ctx, 31, 0x4B1690u);
    ctx->pc = 0x4B1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1538u, 0x4B1688u, 0x4B1690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1690u;
label_4b1690:
    // 0x4b1690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1694: 0x812c588  j           func_4B1620
    ctx->pc = 0x4B1694u;
    ctx->pc = 0x4B1698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1694u;
    // 0x4b1698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1620u, 0x4B1694u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B169Cu;
    // 0x4b169c: 0x0  nop
    ctx->pc = 0x4b169cu;
    // NOP
    ctx->pc = 0x4b16a0u;
}
