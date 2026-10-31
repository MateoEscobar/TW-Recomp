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

// Function: sub_00233830
// Address: 0x233830 - 0x233890
void sub_00233830_0x233830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233830_0x233830");
#endif

    switch (ctx->pc) {
        case 0x233844u: goto label_233844;
        case 0x233880u: goto label_233880;
        default: break;
    }

    ctx->pc = 0x233830u;

    // 0x233830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233834: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x233834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x233838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23383c: 0xc087502  jal         func_21D408
    ctx->pc = 0x23383Cu;
    SET_GPR_U32(ctx, 31, 0x233844u);
    ctx->pc = 0x233840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23383Cu;
    // 0x233840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23383Cu, 0x233844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233844u;
label_233844:
    // 0x233844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23384c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x233850: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x233850u;
    {
        const bool branch_taken_0x233850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x233850) {
            ctx->pc = 0x233854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233850u;
            // 0x233854: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233884u;
            goto label_233884;
        }
    }
    ctx->pc = 0x233858u;
    // 0x233858: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x233858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x23385c: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x23385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x233860: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x233860u;
    {
        const bool branch_taken_0x233860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233860) {
            ctx->pc = 0x233864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233860u;
            // 0x233864: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233868u;
            goto label_233868;
        }
    }
    ctx->pc = 0x233868u;
label_233868:
    // 0x233868: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x233868u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x23386c: 0x1810  mfhi        $v1
    ctx->pc = 0x23386cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x233870: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x233870u;
    {
        const bool branch_taken_0x233870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233870) {
            ctx->pc = 0x233874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233870u;
            // 0x233874: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233884u;
            goto label_233884;
        }
    }
    ctx->pc = 0x233878u;
    // 0x233878: 0xc087b78  jal         func_21EDE0
    ctx->pc = 0x233878u;
    SET_GPR_U32(ctx, 31, 0x233880u);
    ctx->pc = 0x23387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233878u;
    // 0x23387c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EDE0u, 0x233878u, 0x233880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233880u;
label_233880:
    // 0x233880: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x233880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_233884:
    // 0x233884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233888: 0x3e00008  jr          $ra
    ctx->pc = 0x233888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233888u;
        // 0x23388c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233890u;
}
