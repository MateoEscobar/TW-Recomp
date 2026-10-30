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

// Function: sub_004813D0
// Address: 0x4813d0 - 0x481408
void sub_004813D0_0x4813d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004813D0_0x4813d0");
#endif

    switch (ctx->pc) {
        case 0x4813fcu: goto label_4813fc;
        default: break;
    }

    ctx->pc = 0x4813d0u;

    // 0x4813d0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4813d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4813d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4813d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4813d8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4813d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4813dc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4813dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4813e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4813e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4813e4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4813e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4813e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4813e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4813ec: 0x2444ec08  addiu       $a0, $v0, -0x13F8
    ctx->pc = 0x4813ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962184));
    // 0x4813f0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4813f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4813f4: 0xc11fd86  jal         func_47F618
    ctx->pc = 0x4813F4u;
    SET_GPR_U32(ctx, 31, 0x4813FCu);
    ctx->pc = 0x4813F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4813F4u;
    // 0x4813f8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F618u, 0x4813F4u, 0x4813FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4813FCu;
label_4813fc:
    // 0x4813fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4813fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481400: 0x3e00008  jr          $ra
    ctx->pc = 0x481400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481400u;
        // 0x481404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481408u;
}
