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

// Function: sub_001C8838
// Address: 0x1c8838 - 0x1c8880
void sub_001C8838_0x1c8838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8838_0x1c8838");
#endif

    switch (ctx->pc) {
        case 0x1c8860u: goto label_1c8860;
        case 0x1c886cu: goto label_1c886c;
        default: break;
    }

    ctx->pc = 0x1c8838u;

    // 0x1c8838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c883c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c883cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c8840: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c8840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c8844: 0x2442aa20  addiu       $v0, $v0, -0x55E0
    ctx->pc = 0x1c8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945312));
    // 0x1c8848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c884c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c884cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8854: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8858: 0xc0722a8  jal         func_1C8AA0
    ctx->pc = 0x1C8858u;
    SET_GPR_U32(ctx, 31, 0x1C8860u);
    ctx->pc = 0x1C885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8858u;
    // 0x1c885c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8AA0u, 0x1C8858u, 0x1C8860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8860u;
label_1c8860:
    // 0x1c8860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8864: 0xc079bbc  jal         func_1E6EF0
    ctx->pc = 0x1C8864u;
    SET_GPR_U32(ctx, 31, 0x1C886Cu);
    ctx->pc = 0x1C8868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8864u;
    // 0x1c8868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6EF0u, 0x1C8864u, 0x1C886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C886Cu;
label_1c886c:
    // 0x1c886c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c886cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8878: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8878u;
        // 0x1c887c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8880u;
}
