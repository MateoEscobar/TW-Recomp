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

// Function: sub_00372668
// Address: 0x372668 - 0x3726a0
void sub_00372668_0x372668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372668_0x372668");
#endif

    switch (ctx->pc) {
        case 0x37267cu: goto label_37267c;
        case 0x372684u: goto label_372684;
        case 0x37268cu: goto label_37268c;
        default: break;
    }

    ctx->pc = 0x372668u;

    // 0x372668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37266c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372674: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372674u;
    SET_GPR_U32(ctx, 31, 0x37267Cu);
    ctx->pc = 0x372678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372674u;
    // 0x372678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372674u, 0x37267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37267Cu;
label_37267c:
    // 0x37267c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37267Cu;
    SET_GPR_U32(ctx, 31, 0x372684u);
    ctx->pc = 0x372680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37267Cu;
    // 0x372680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37267Cu, 0x372684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372684u;
label_372684:
    // 0x372684: 0xc044f0c  jal         func_113C30
    ctx->pc = 0x372684u;
    SET_GPR_U32(ctx, 31, 0x37268Cu);
    ctx->pc = 0x372688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372684u;
    // 0x372688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113C30u, 0x372684u, 0x37268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37268Cu;
label_37268c:
    // 0x37268c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37268cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372694: 0x3e00008  jr          $ra
    ctx->pc = 0x372694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372694u;
        // 0x372698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37269Cu;
    // 0x37269c: 0x0  nop
    ctx->pc = 0x37269cu;
    // NOP
    ctx->pc = 0x3726a0u;
}
