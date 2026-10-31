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

// Function: sub_0043F828
// Address: 0x43f828 - 0x43f870
void sub_0043F828_0x43f828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043F828_0x43f828");
#endif

    switch (ctx->pc) {
        case 0x43f864u: goto label_43f864;
        default: break;
    }

    ctx->pc = 0x43f828u;

    // 0x43f828: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x43f828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x43f82c: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x43f82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x43f830: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x43f830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x43f834: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x43f834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f838: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x43f838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x43f83c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43f83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f840: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x43f840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x43f844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43f848: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x43f848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x43f84c: 0x2484f730  addiu       $a0, $a0, -0x8D0
    ctx->pc = 0x43f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965040));
    // 0x43f850: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x43f850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x43f854: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x43f854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43f858: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x43f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x43f85c: 0xc10fa86  jal         func_43EA18
    ctx->pc = 0x43F85Cu;
    SET_GPR_U32(ctx, 31, 0x43F864u);
    ctx->pc = 0x43F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43F85Cu;
    // 0x43f860: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43EA18u, 0x43F85Cu, 0x43F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43F864u;
label_43f864:
    // 0x43f864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43f864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43f868: 0x3e00008  jr          $ra
    ctx->pc = 0x43F868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F868u;
        // 0x43f86c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F870u;
}
