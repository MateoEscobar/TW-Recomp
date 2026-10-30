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

// Function: sub_00292310
// Address: 0x292310 - 0x292330
void sub_00292310_0x292310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292310_0x292310");
#endif

    switch (ctx->pc) {
        case 0x292324u: goto label_292324;
        default: break;
    }

    ctx->pc = 0x292310u;

    // 0x292310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x292310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x292314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x292314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29231c: 0xc0a48aa  jal         func_2922A8
    ctx->pc = 0x29231Cu;
    SET_GPR_U32(ctx, 31, 0x292324u);
    ctx->pc = 0x292320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29231Cu;
    // 0x292320: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2922A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2922A8u, 0x29231Cu, 0x292324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292324u;
label_292324:
    // 0x292324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292328: 0x3e00008  jr          $ra
    ctx->pc = 0x292328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292328u;
        // 0x29232c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292330u;
}
