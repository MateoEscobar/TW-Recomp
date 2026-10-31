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

// Function: sub_002D7000
// Address: 0x2d7000 - 0x2d70a0
void sub_002D7000_0x2d7000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7000_0x2d7000");
#endif

    switch (ctx->pc) {
        case 0x2d7034u: goto label_2d7034;
        case 0x2d7048u: goto label_2d7048;
        case 0x2d705cu: goto label_2d705c;
        case 0x2d7070u: goto label_2d7070;
        case 0x2d707cu: goto label_2d707c;
        default: break;
    }

    ctx->pc = 0x2d7000u;

    // 0x2d7000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d7004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7008: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d7008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d700c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7014: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d7014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7018: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D7018u;
    {
        const bool branch_taken_0x2d7018 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7018u;
        // 0x2d701c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7018) {
            ctx->pc = 0x2D7064u;
            goto label_2d7064;
        }
    }
    ctx->pc = 0x2D7020u;
    // 0x2d7020: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d7020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d7024: 0x26040468  addiu       $a0, $s0, 0x468
    ctx->pc = 0x2d7024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1128));
    // 0x2d7028: 0x24a56458  addiu       $a1, $a1, 0x6458
    ctx->pc = 0x2d7028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25688));
    // 0x2d702c: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D702Cu;
    SET_GPR_U32(ctx, 31, 0x2D7034u);
    ctx->pc = 0x2D7030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D702Cu;
    // 0x2d7030: 0x240602a0  addiu       $a2, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D702Cu, 0x2D7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7034u;
label_2d7034:
    // 0x2d7034: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d7034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d7038: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x2d7038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x2d703c: 0x24a56468  addiu       $a1, $a1, 0x6468
    ctx->pc = 0x2d703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25704));
    // 0x2d7040: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D7040u;
    SET_GPR_U32(ctx, 31, 0x2D7048u);
    ctx->pc = 0x2D7044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7040u;
    // 0x2d7044: 0x2406029f  addiu       $a2, $zero, 0x29F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D7040u, 0x2D7048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7048u;
label_2d7048:
    // 0x2d7048: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d7048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d704c: 0x260404b8  addiu       $a0, $s0, 0x4B8
    ctx->pc = 0x2d704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1208));
    // 0x2d7050: 0x24a56478  addiu       $a1, $a1, 0x6478
    ctx->pc = 0x2d7050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25720));
    // 0x2d7054: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D7054u;
    SET_GPR_U32(ctx, 31, 0x2D705Cu);
    ctx->pc = 0x2D7058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7054u;
    // 0x2d7058: 0x240602a1  addiu       $a2, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D7054u, 0x2D705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D705Cu;
label_2d705c:
    // 0x2d705c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D705Cu;
    {
        const bool branch_taken_0x2d705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D705Cu;
        // 0x2d7060: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d705c) {
            ctx->pc = 0x2D708Cu;
            goto label_2d708c;
        }
    }
    ctx->pc = 0x2D7064u;
label_2d7064:
    // 0x2d7064: 0x26100468  addiu       $s0, $s0, 0x468
    ctx->pc = 0x2d7064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1128));
    // 0x2d7068: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d7068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d706c: 0x0  nop
    ctx->pc = 0x2d706cu;
    // NOP
label_2d7070:
    // 0x2d7070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7074: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D7074u;
    SET_GPR_U32(ctx, 31, 0x2D707Cu);
    ctx->pc = 0x2D7078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7074u;
    // 0x2d7078: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D7074u, 0x2D707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D707Cu;
label_2d707c:
    // 0x2d707c: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x2d707cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d7080: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7080u;
    {
        const bool branch_taken_0x2d7080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7080u;
        // 0x2d7084: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7080) {
            ctx->pc = 0x2D7070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7070;
        }
    }
    ctx->pc = 0x2D7088u;
    // 0x2d7088: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d7088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d708c:
    // 0x2d708c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d708cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7094: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7094u;
        // 0x2d7098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D709Cu;
    // 0x2d709c: 0x0  nop
    ctx->pc = 0x2d709cu;
    // NOP
    ctx->pc = 0x2d70a0u;
}
