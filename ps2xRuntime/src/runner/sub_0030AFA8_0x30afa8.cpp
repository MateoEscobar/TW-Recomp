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

// Function: sub_0030AFA8
// Address: 0x30afa8 - 0x30b050
void sub_0030AFA8_0x30afa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AFA8_0x30afa8");
#endif

    switch (ctx->pc) {
        case 0x30afd8u: goto label_30afd8;
        case 0x30afe0u: goto label_30afe0;
        case 0x30aff0u: goto label_30aff0;
        case 0x30b004u: goto label_30b004;
        case 0x30b014u: goto label_30b014;
        case 0x30b024u: goto label_30b024;
        default: break;
    }

    ctx->pc = 0x30afa8u;

    // 0x30afa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30afa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30afac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30afb0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30afb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30afb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30afb8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30afbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30afbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30afc0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30afc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30afc4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30afc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30afc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30afcc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30afccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30afd0: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30afd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30afd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30afd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30afd8:
    // 0x30afd8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30AFD8u;
    SET_GPR_U32(ctx, 31, 0x30AFE0u);
    ctx->pc = 0x30AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AFD8u;
    // 0x30afdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30AFD8u, 0x30AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFE0u;
label_30afe0:
    // 0x30afe0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30afe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30afe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30afe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30afe8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30AFE8u;
    SET_GPR_U32(ctx, 31, 0x30AFF0u);
    ctx->pc = 0x30AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AFE8u;
    // 0x30afec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30AFE8u, 0x30AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFF0u;
label_30aff0:
    // 0x30aff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30aff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aff4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x30AFF4u;
    {
        const bool branch_taken_0x30aff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AFF4u;
        // 0x30aff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aff4) {
            ctx->pc = 0x30B024u;
            goto label_30b024;
        }
    }
    ctx->pc = 0x30AFFCu;
    // 0x30affc: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x30AFFCu;
    SET_GPR_U32(ctx, 31, 0x30B004u);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x30AFFCu, 0x30B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B004u;
label_30b004:
    // 0x30b004: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B004u;
    {
        const bool branch_taken_0x30b004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B004u;
        // 0x30b008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b004) {
            ctx->pc = 0x30B024u;
            goto label_30b024;
        }
    }
    ctx->pc = 0x30B00Cu;
    // 0x30b00c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x30B00Cu;
    SET_GPR_U32(ctx, 31, 0x30B014u);
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x30B00Cu, 0x30B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B014u;
label_30b014:
    // 0x30b014: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B014u;
    {
        const bool branch_taken_0x30b014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B014u;
        // 0x30b018: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b014) {
            ctx->pc = 0x30B024u;
            goto label_30b024;
        }
    }
    ctx->pc = 0x30B01Cu;
    // 0x30b01c: 0xc0c2c14  jal         func_30B050
    ctx->pc = 0x30B01Cu;
    SET_GPR_U32(ctx, 31, 0x30B024u);
    ctx->pc = 0x30B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B01Cu;
    // 0x30b020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B050u, 0x30B01Cu, 0x30B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B024u;
label_30b024:
    // 0x30b024: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x30b024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30b028: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30B028u;
    {
        const bool branch_taken_0x30b028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B028u;
        // 0x30b02c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b028) {
            ctx->pc = 0x30AFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30afd8;
        }
    }
    ctx->pc = 0x30B030u;
    // 0x30b030: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30b030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30b034: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30b034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b038: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30b038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b03c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30b03cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b040: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30b040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b048: 0x3e00008  jr          $ra
    ctx->pc = 0x30B048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B048u;
        // 0x30b04c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B050u;
}
