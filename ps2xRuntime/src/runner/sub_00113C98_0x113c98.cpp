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

// Function: sub_00113C98
// Address: 0x113c98 - 0x113ce8
void sub_00113C98_0x113c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113C98_0x113c98");
#endif

    switch (ctx->pc) {
        case 0x113cd8u: goto label_113cd8;
        default: break;
    }

    ctx->pc = 0x113c98u;

    // 0x113c98: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x113c98u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113ca4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x113ca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ca8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x113ca8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cac: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x113cacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cb0: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x113cb0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cb4: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x113cb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cb8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113cbc: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x113cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113cc4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x113cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cc8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x113cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ccc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x113cccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cd0: 0xc0443e8  jal         func_110FA0
    ctx->pc = 0x113CD0u;
    SET_GPR_U32(ctx, 31, 0x113CD8u);
    ctx->pc = 0x113CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113CD0u;
    // 0x113cd4: 0x1a0482d  daddu       $t1, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110FA0u, 0x113CD0u, 0x113CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CD8u;
label_113cd8:
    // 0x113cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x113CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CDCu;
        // 0x113ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113CE4u;
    // 0x113ce4: 0x0  nop
    ctx->pc = 0x113ce4u;
    // NOP
    ctx->pc = 0x113ce8u;
}
