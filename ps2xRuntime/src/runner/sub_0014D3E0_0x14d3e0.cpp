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

// Function: sub_0014D3E0
// Address: 0x14d3e0 - 0x14d408
void sub_0014D3E0_0x14d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D3E0_0x14d3e0");
#endif

    switch (ctx->pc) {
        case 0x14d3f8u: goto label_14d3f8;
        default: break;
    }

    ctx->pc = 0x14d3e0u;

    // 0x14d3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d3e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d3ec: 0xac820b88  sw          $v0, 0xB88($a0)
    ctx->pc = 0x14d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2952), GPR_U32(ctx, 2));
    // 0x14d3f0: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x14D3F0u;
    SET_GPR_U32(ctx, 31, 0x14D3F8u);
    ctx->pc = 0x14D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D3F0u;
    // 0x14d3f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x14D3F0u, 0x14D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3F8u;
label_14d3f8:
    // 0x14d3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x14D3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3FCu;
        // 0x14d400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D404u;
    // 0x14d404: 0x0  nop
    ctx->pc = 0x14d404u;
    // NOP
    ctx->pc = 0x14d408u;
}
