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

// Function: sub_0030AAB0
// Address: 0x30aab0 - 0x30ab58
void sub_0030AAB0_0x30aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AAB0_0x30aab0");
#endif

    switch (ctx->pc) {
        case 0x30aae0u: goto label_30aae0;
        case 0x30aae8u: goto label_30aae8;
        case 0x30aaf8u: goto label_30aaf8;
        case 0x30ab0cu: goto label_30ab0c;
        case 0x30ab1cu: goto label_30ab1c;
        case 0x30ab2cu: goto label_30ab2c;
        default: break;
    }

    ctx->pc = 0x30aab0u;

    // 0x30aab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30aab4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30aab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30aab8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30aabc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30aabcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aac0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30aac4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30aac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aac8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30aacc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30aaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30aad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30aad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30aad4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30aad8: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30aad8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30aadc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30aadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30aae0:
    // 0x30aae0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30AAE0u;
    SET_GPR_U32(ctx, 31, 0x30AAE8u);
    ctx->pc = 0x30AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AAE0u;
    // 0x30aae4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30AAE0u, 0x30AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAE8u;
label_30aae8:
    // 0x30aae8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30aae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30aaec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30aaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aaf0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30AAF0u;
    SET_GPR_U32(ctx, 31, 0x30AAF8u);
    ctx->pc = 0x30AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AAF0u;
    // 0x30aaf4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30AAF0u, 0x30AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAF8u;
label_30aaf8:
    // 0x30aaf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30aaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aafc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x30AAFCu;
    {
        const bool branch_taken_0x30aafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AAFCu;
        // 0x30ab00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aafc) {
            ctx->pc = 0x30AB2Cu;
            goto label_30ab2c;
        }
    }
    ctx->pc = 0x30AB04u;
    // 0x30ab04: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x30AB04u;
    SET_GPR_U32(ctx, 31, 0x30AB0Cu);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x30AB04u, 0x30AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB0Cu;
label_30ab0c:
    // 0x30ab0c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30AB0Cu;
    {
        const bool branch_taken_0x30ab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB0Cu;
        // 0x30ab10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab0c) {
            ctx->pc = 0x30AB2Cu;
            goto label_30ab2c;
        }
    }
    ctx->pc = 0x30AB14u;
    // 0x30ab14: 0xc088edc  jal         func_223B70
    ctx->pc = 0x30AB14u;
    SET_GPR_U32(ctx, 31, 0x30AB1Cu);
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x30AB14u, 0x30AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB1Cu;
label_30ab1c:
    // 0x30ab1c: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30AB1Cu;
    {
        const bool branch_taken_0x30ab1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB1Cu;
        // 0x30ab20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab1c) {
            ctx->pc = 0x30AB2Cu;
            goto label_30ab2c;
        }
    }
    ctx->pc = 0x30AB24u;
    // 0x30ab24: 0xc0c2ad6  jal         func_30AB58
    ctx->pc = 0x30AB24u;
    SET_GPR_U32(ctx, 31, 0x30AB2Cu);
    ctx->pc = 0x30AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB24u;
    // 0x30ab28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB58u, 0x30AB24u, 0x30AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB2Cu;
label_30ab2c:
    // 0x30ab2c: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x30ab2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30ab30: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30AB30u;
    {
        const bool branch_taken_0x30ab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB30u;
        // 0x30ab34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab30) {
            ctx->pc = 0x30AAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30aae0;
        }
    }
    ctx->pc = 0x30AB38u;
    // 0x30ab38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30ab38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ab3c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30ab3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ab40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30ab40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ab44: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30ab44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ab48: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30ab48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ab4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ab50: 0x3e00008  jr          $ra
    ctx->pc = 0x30AB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB50u;
        // 0x30ab54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AB58u;
}
