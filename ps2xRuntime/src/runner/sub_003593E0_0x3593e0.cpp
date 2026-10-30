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

// Function: sub_003593E0
// Address: 0x3593e0 - 0x359418
void sub_003593E0_0x3593e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003593E0_0x3593e0");
#endif

    switch (ctx->pc) {
        case 0x3593f4u: goto label_3593f4;
        case 0x3593fcu: goto label_3593fc;
        case 0x359404u: goto label_359404;
        default: break;
    }

    ctx->pc = 0x3593e0u;

    // 0x3593e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3593e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3593e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3593e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3593e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3593e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3593ec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3593ECu;
    SET_GPR_U32(ctx, 31, 0x3593F4u);
    ctx->pc = 0x3593F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593ECu;
    // 0x3593f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3593ECu, 0x3593F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3593F4u;
label_3593f4:
    // 0x3593f4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3593F4u;
    SET_GPR_U32(ctx, 31, 0x3593FCu);
    ctx->pc = 0x3593F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593F4u;
    // 0x3593f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3593F4u, 0x3593FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3593FCu;
label_3593fc:
    // 0x3593fc: 0xc08d35c  jal         func_234D70
    ctx->pc = 0x3593FCu;
    SET_GPR_U32(ctx, 31, 0x359404u);
    ctx->pc = 0x359400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3593FCu;
    // 0x359400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234D70u, 0x3593FCu, 0x359404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359404u;
label_359404:
    // 0x359404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35940c: 0x3e00008  jr          $ra
    ctx->pc = 0x35940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35940Cu;
        // 0x359410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35940Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359414u;
    // 0x359414: 0x0  nop
    ctx->pc = 0x359414u;
    // NOP
    ctx->pc = 0x359418u;
}
