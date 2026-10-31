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

// Function: sub_001E7808
// Address: 0x1e7808 - 0x1e7868
void sub_001E7808_0x1e7808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7808_0x1e7808");
#endif

    switch (ctx->pc) {
        case 0x1e7838u: goto label_1e7838;
        case 0x1e7844u: goto label_1e7844;
        case 0x1e7850u: goto label_1e7850;
        default: break;
    }

    ctx->pc = 0x1e7808u;

    // 0x1e7808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e780c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e780cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e7810: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e7810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e7814: 0x2442cae0  addiu       $v0, $v0, -0x3520
    ctx->pc = 0x1e7814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953696));
    // 0x1e7818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e781c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e781cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7824: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e7824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7828: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e7828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e782c: 0x26040260  addiu       $a0, $s0, 0x260
    ctx->pc = 0x1e782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x1e7830: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1E7830u;
    SET_GPR_U32(ctx, 31, 0x1E7838u);
    ctx->pc = 0x1E7834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7830u;
    // 0x1e7834: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1E7830u, 0x1E7838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7838u;
label_1e7838:
    // 0x1e7838: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e7838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1e783c: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1E783Cu;
    SET_GPR_U32(ctx, 31, 0x1E7844u);
    ctx->pc = 0x1E7840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E783Cu;
    // 0x1e7840: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1E783Cu, 0x1E7844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7844u;
label_1e7844:
    // 0x1e7844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7848: 0xc07a4b4  jal         func_1E92D0
    ctx->pc = 0x1E7848u;
    SET_GPR_U32(ctx, 31, 0x1E7850u);
    ctx->pc = 0x1E784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7848u;
    // 0x1e784c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E92D0u, 0x1E7848u, 0x1E7850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7850u;
label_1e7850:
    // 0x1e7850: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e7850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e785c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E785Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E785Cu;
        // 0x1e7860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E785Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7864u;
    // 0x1e7864: 0x0  nop
    ctx->pc = 0x1e7864u;
    // NOP
    ctx->pc = 0x1e7868u;
}
