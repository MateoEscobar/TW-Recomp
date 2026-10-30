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

// Function: sub_001482E0
// Address: 0x1482e0 - 0x148358
void sub_001482E0_0x1482e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001482E0_0x1482e0");
#endif

    switch (ctx->pc) {
        case 0x148308u: goto label_148308;
        case 0x148314u: goto label_148314;
        case 0x148328u: goto label_148328;
        default: break;
    }

    ctx->pc = 0x1482e0u;

    // 0x1482e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1482e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1482e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1482e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1482e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1482e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1482ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1482ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1482f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1482f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1482f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1482f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1482fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1482fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148304: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x148304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_148308:
    // 0x148308: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x148308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14830c: 0xc110bf0  jal         func_442FC0
    ctx->pc = 0x14830Cu;
    SET_GPR_U32(ctx, 31, 0x148314u);
    ctx->pc = 0x148310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14830Cu;
    // 0x148310: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442FC0u, 0x14830Cu, 0x148314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148314u;
label_148314:
    // 0x148314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148318: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148318u;
    {
        const bool branch_taken_0x148318 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x148318) {
            ctx->pc = 0x14831Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148318u;
            // 0x14831c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148334u;
            goto label_148334;
        }
    }
    ctx->pc = 0x148320u;
    // 0x148320: 0xc0520b6  jal         func_1482D8
    ctx->pc = 0x148320u;
    SET_GPR_U32(ctx, 31, 0x148328u);
    ctx->pc = 0x148324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148320u;
    // 0x148324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482D8u, 0x148320u, 0x148328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148328u;
label_148328:
    // 0x148328: 0x602fff7  bltzl       $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x148328u;
    {
        const bool branch_taken_0x148328 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x148328) {
            ctx->pc = 0x14832Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148328u;
            // 0x14832c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148308;
        }
    }
    ctx->pc = 0x148330u;
    // 0x148330: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x148330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_148334:
    // 0x148334: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x148334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14833c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14833cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148344: 0x3e00008  jr          $ra
    ctx->pc = 0x148344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148344u;
        // 0x148348: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14834Cu;
    // 0x14834c: 0x0  nop
    ctx->pc = 0x14834cu;
    // NOP
    // 0x148350: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x148350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x148354: 0x0  nop
    ctx->pc = 0x148354u;
    // NOP
    ctx->pc = 0x148358u;
}
