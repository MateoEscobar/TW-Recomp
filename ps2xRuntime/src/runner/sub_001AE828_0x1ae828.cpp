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

// Function: sub_001AE828
// Address: 0x1ae828 - 0x1ae898
void sub_001AE828_0x1ae828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE828_0x1ae828");
#endif

    switch (ctx->pc) {
        case 0x1ae84cu: goto label_1ae84c;
        case 0x1ae858u: goto label_1ae858;
        case 0x1ae870u: goto label_1ae870;
        default: break;
    }

    ctx->pc = 0x1ae828u;

    // 0x1ae828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae82c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ae82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ae830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae834: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ae834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ae838: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ae838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ae83c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae840: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae844: 0xc06b936  jal         func_1AE4D8
    ctx->pc = 0x1AE844u;
    SET_GPR_U32(ctx, 31, 0x1AE84Cu);
    ctx->pc = 0x1AE848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE844u;
    // 0x1ae848: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE4D8u, 0x1AE844u, 0x1AE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE84Cu;
label_1ae84c:
    // 0x1ae84c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE84Cu;
    {
        const bool branch_taken_0x1ae84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE84Cu;
        // 0x1ae850: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae84c) {
            ctx->pc = 0x1AE860u;
            goto label_1ae860;
        }
    }
    ctx->pc = 0x1AE854u;
    // 0x1ae854: 0x0  nop
    ctx->pc = 0x1ae854u;
    // NOP
label_1ae858:
    // 0x1ae858: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ae85c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1ae85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ae860:
    // 0x1ae860: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE860u;
    {
        const bool branch_taken_0x1ae860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE860u;
        // 0x1ae864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae860) {
            ctx->pc = 0x1AE880u;
            goto label_1ae880;
        }
    }
    ctx->pc = 0x1AE868u;
    // 0x1ae868: 0xc06b98e  jal         func_1AE638
    ctx->pc = 0x1AE868u;
    SET_GPR_U32(ctx, 31, 0x1AE870u);
    ctx->pc = 0x1AE86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE868u;
    // 0x1ae86c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE638u, 0x1AE868u, 0x1AE870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE870u;
label_1ae870:
    // 0x1ae870: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ae870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae874: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x1ae874u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1ae878: 0x461fff7  bgez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AE878u;
    {
        const bool branch_taken_0x1ae878 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE878u;
        // 0x1ae87c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae878) {
            ctx->pc = 0x1AE858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae858;
        }
    }
    ctx->pc = 0x1AE880u;
label_1ae880:
    // 0x1ae880: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ae880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae884: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ae884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae888: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ae888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae890: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE890u;
        // 0x1ae894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE898u;
}
