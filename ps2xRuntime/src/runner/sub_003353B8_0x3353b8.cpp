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

// Function: sub_003353B8
// Address: 0x3353b8 - 0x3353f0
void sub_003353B8_0x3353b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003353B8_0x3353b8");
#endif

    switch (ctx->pc) {
        case 0x3353ccu: goto label_3353cc;
        default: break;
    }

    ctx->pc = 0x3353b8u;

    // 0x3353b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3353b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3353bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3353bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3353c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3353c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3353c4: 0xc0cd4e4  jal         func_335390
    ctx->pc = 0x3353C4u;
    SET_GPR_U32(ctx, 31, 0x3353CCu);
    ctx->pc = 0x3353C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3353C4u;
    // 0x3353c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x3353C4u, 0x3353CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3353CCu;
label_3353cc:
    // 0x3353cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3353ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3353d0: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x3353d0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3353d4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3353D4u;
    {
        const bool branch_taken_0x3353d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3353d4) {
            ctx->pc = 0x3353D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3353D4u;
            // 0x3353d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3353DCu;
            goto label_3353dc;
        }
    }
    ctx->pc = 0x3353DCu;
label_3353dc:
    // 0x3353dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3353dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3353e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3353e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3353e4: 0x1010  mfhi        $v0
    ctx->pc = 0x3353e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3353e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3353E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3353ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353E8u;
        // 0x3353ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3353E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3353F0u;
}
