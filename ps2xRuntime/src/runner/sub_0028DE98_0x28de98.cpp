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

// Function: sub_0028DE98
// Address: 0x28de98 - 0x28df30
void sub_0028DE98_0x28de98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DE98_0x28de98");
#endif

    switch (ctx->pc) {
        case 0x28dec8u: goto label_28dec8;
        case 0x28ded0u: goto label_28ded0;
        case 0x28ded8u: goto label_28ded8;
        case 0x28def0u: goto label_28def0;
        default: break;
    }

    ctx->pc = 0x28de98u;

    // 0x28de98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28de98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28de9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28de9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28dea0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28dea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28dea4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28dea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28deac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28deacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28deb0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28deb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28deb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28deb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28deb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28debc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28debcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dec0: 0x266401a4  addiu       $a0, $s3, 0x1A4
    ctx->pc = 0x28dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 420));
    // 0x28dec4: 0x0  nop
    ctx->pc = 0x28dec4u;
    // NOP
label_28dec8:
    // 0x28dec8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x28DEC8u;
    SET_GPR_U32(ctx, 31, 0x28DED0u);
    ctx->pc = 0x28DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEC8u;
    // 0x28decc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28DEC8u, 0x28DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DED0u;
label_28ded0:
    // 0x28ded0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28DED0u;
    SET_GPR_U32(ctx, 31, 0x28DED8u);
    ctx->pc = 0x28DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DED0u;
    // 0x28ded4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28DED0u, 0x28DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DED8u;
label_28ded8:
    // 0x28ded8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x28DED8u;
    {
        const bool branch_taken_0x28ded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ded8) {
            ctx->pc = 0x28DEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DED8u;
            // 0x28dedc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF04u;
            goto label_28df04;
        }
    }
    ctx->pc = 0x28DEE0u;
    // 0x28dee0: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28DEE0u;
    {
        const bool branch_taken_0x28dee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x28dee0) {
            ctx->pc = 0x28DEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DEE0u;
            // 0x28dee4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF04u;
            goto label_28df04;
        }
    }
    ctx->pc = 0x28DEE8u;
    // 0x28dee8: 0xc087502  jal         func_21D408
    ctx->pc = 0x28DEE8u;
    SET_GPR_U32(ctx, 31, 0x28DEF0u);
    ctx->pc = 0x28DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEE8u;
    // 0x28deec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28DEE8u, 0x28DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DEF0u;
label_28def0:
    // 0x28def0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28def4: 0x14720003  bne         $v1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DEF4u;
    {
        const bool branch_taken_0x28def4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x28DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEF4u;
        // 0x28def8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28def4) {
            ctx->pc = 0x28DF04u;
            goto label_28df04;
        }
    }
    ctx->pc = 0x28DEFCu;
    // 0x28defc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28DEFCu;
    {
        const bool branch_taken_0x28defc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEFCu;
        // 0x28df00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28defc) {
            ctx->pc = 0x28DF14u;
            goto label_28df14;
        }
    }
    ctx->pc = 0x28DF04u;
label_28df04:
    // 0x28df04: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x28df04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x28df08: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28DF08u;
    {
        const bool branch_taken_0x28df08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF08u;
        // 0x28df0c: 0x266401a4  addiu       $a0, $s3, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df08) {
            ctx->pc = 0x28DEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dec8;
        }
    }
    ctx->pc = 0x28DF10u;
    // 0x28df10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28df10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28df14:
    // 0x28df14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28df14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28df18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28df18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28df1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28df1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28df20: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28df20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28df24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28df24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28df28: 0x3e00008  jr          $ra
    ctx->pc = 0x28DF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF28u;
        // 0x28df2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DF30u;
}
