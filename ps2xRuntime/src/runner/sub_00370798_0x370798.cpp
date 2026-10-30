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

// Function: sub_00370798
// Address: 0x370798 - 0x3707d0
void sub_00370798_0x370798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370798_0x370798");
#endif

    switch (ctx->pc) {
        case 0x3707acu: goto label_3707ac;
        case 0x3707b4u: goto label_3707b4;
        case 0x3707bcu: goto label_3707bc;
        default: break;
    }

    ctx->pc = 0x370798u;

    // 0x370798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37079c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37079cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3707a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3707a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3707a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3707A4u;
    SET_GPR_U32(ctx, 31, 0x3707ACu);
    ctx->pc = 0x3707A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3707A4u;
    // 0x3707a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3707A4u, 0x3707ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3707ACu;
label_3707ac:
    // 0x3707ac: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3707ACu;
    SET_GPR_U32(ctx, 31, 0x3707B4u);
    ctx->pc = 0x3707B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3707ACu;
    // 0x3707b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3707ACu, 0x3707B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3707B4u;
label_3707b4:
    // 0x3707b4: 0xc06cff0  jal         func_1B3FC0
    ctx->pc = 0x3707B4u;
    SET_GPR_U32(ctx, 31, 0x3707BCu);
    ctx->pc = 0x3707B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3707B4u;
    // 0x3707b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FC0u, 0x3707B4u, 0x3707BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3707BCu;
label_3707bc:
    // 0x3707bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3707bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3707c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3707c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3707c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3707C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3707C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707C4u;
        // 0x3707c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3707C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3707CCu;
    // 0x3707cc: 0x0  nop
    ctx->pc = 0x3707ccu;
    // NOP
    ctx->pc = 0x3707d0u;
}
