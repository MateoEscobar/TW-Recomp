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

// Function: sub_004D33F8
// Address: 0x4d33f8 - 0x4d3420
void sub_004D33F8_0x4d33f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D33F8_0x4d33f8");
#endif

    switch (ctx->pc) {
        case 0x4d3414u: goto label_4d3414;
        default: break;
    }

    ctx->pc = 0x4d33f8u;

    // 0x4d33f8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4d33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4d33fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d33fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d3400: 0x244241a0  addiu       $v0, $v0, 0x41A0
    ctx->pc = 0x4d3400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16800));
    // 0x4d3404: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x4d3404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x4d3408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d3408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d340c: 0xc1349f6  jal         func_4D27D8
    ctx->pc = 0x4D340Cu;
    SET_GPR_U32(ctx, 31, 0x4D3414u);
    ctx->pc = 0x4D3410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D340Cu;
    // 0x4d3410: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D27D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D27D8u, 0x4D340Cu, 0x4D3414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D3414u;
label_4d3414:
    // 0x4d3414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d3414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d3418: 0x3e00008  jr          $ra
    ctx->pc = 0x4D3418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3418u;
        // 0x4d341c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D3420u;
}
