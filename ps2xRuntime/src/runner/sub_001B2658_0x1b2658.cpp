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

// Function: sub_001B2658
// Address: 0x1b2658 - 0x1b26a8
void sub_001B2658_0x1b2658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2658_0x1b2658");
#endif

    switch (ctx->pc) {
        case 0x1b268cu: goto label_1b268c;
        default: break;
    }

    ctx->pc = 0x1b2658u;

    // 0x1b2658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b265c: 0x24032940  addiu       $v1, $zero, 0x2940
    ctx->pc = 0x1b265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10560));
    // 0x1b2660: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b2664: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b2664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b2668: 0xa38018  mult        $s0, $a1, $v1
    ctx->pc = 0x1b2668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1b266c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b2670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2678: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b2678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b267c: 0xac4077b0  sw          $zero, 0x77B0($v0)
    ctx->pc = 0x1b267cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30640), GPR_U32(ctx, 0));
    // 0x1b2680: 0x260415d0  addiu       $a0, $s0, 0x15D0
    ctx->pc = 0x1b2680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    // 0x1b2684: 0xc071112  jal         func_1C4448
    ctx->pc = 0x1B2684u;
    SET_GPR_U32(ctx, 31, 0x1B268Cu);
    ctx->pc = 0x1B2688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2684u;
    // 0x1b2688: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4448u, 0x1B2684u, 0x1B268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B268Cu;
label_1b268c:
    // 0x1b268c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1b268cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1b2690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2694: 0xae0015d4  sw          $zero, 0x15D4($s0)
    ctx->pc = 0x1b2694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5588), GPR_U32(ctx, 0));
    // 0x1b2698: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b269c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b269cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b26a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B26A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26A0u;
        // 0x1b26a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B26A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B26A8u;
}
