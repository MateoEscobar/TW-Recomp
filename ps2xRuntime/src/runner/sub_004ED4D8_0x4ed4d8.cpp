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

// Function: sub_004ED4D8
// Address: 0x4ed4d8 - 0x4ed510
void sub_004ED4D8_0x4ed4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED4D8_0x4ed4d8");
#endif

    switch (ctx->pc) {
        case 0x4ed4fcu: goto label_4ed4fc;
        default: break;
    }

    ctx->pc = 0x4ed4d8u;

    // 0x4ed4d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed4dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ed4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ed4e0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ed4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4ed4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed4e8: 0x2442ee98  addiu       $v0, $v0, -0x1168
    ctx->pc = 0x4ed4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962840));
    // 0x4ed4ec: 0x2463eec0  addiu       $v1, $v1, -0x1140
    ctx->pc = 0x4ed4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962880));
    // 0x4ed4f0: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x4ed4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x4ed4f4: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4ED4F4u;
    SET_GPR_U32(ctx, 31, 0x4ED4FCu);
    ctx->pc = 0x4ED4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED4F4u;
    // 0x4ed4f8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4ED4F4u, 0x4ED4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED4FCu;
label_4ed4fc:
    // 0x4ed4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed500: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED500u;
        // 0x4ed504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED508u;
    // 0x4ed508: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ed508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ed50c: 0x0  nop
    ctx->pc = 0x4ed50cu;
    // NOP
    ctx->pc = 0x4ed510u;
}
