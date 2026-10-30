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

// Function: sub_00165AA0
// Address: 0x165aa0 - 0x165b70
void sub_00165AA0_0x165aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165AA0_0x165aa0");
#endif

    switch (ctx->pc) {
        case 0x165ad0u: goto label_165ad0;
        case 0x165ad8u: goto label_165ad8;
        case 0x165ae0u: goto label_165ae0;
        case 0x165af0u: goto label_165af0;
        case 0x165af8u: goto label_165af8;
        case 0x165b00u: goto label_165b00;
        case 0x165b08u: goto label_165b08;
        case 0x165b18u: goto label_165b18;
        default: break;
    }

    ctx->pc = 0x165aa0u;

    // 0x165aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x165aa4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x165aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x165aa8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x165aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x165aac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x165aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ab0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x165ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x165ab4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x165ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ab8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x165ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x165abc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x165abcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ac0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x165ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x165ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165ac8: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x165ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    // 0x165acc: 0x0  nop
    ctx->pc = 0x165accu;
    // NOP
label_165ad0:
    // 0x165ad0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x165AD0u;
    SET_GPR_U32(ctx, 31, 0x165AD8u);
    ctx->pc = 0x165AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165AD0u;
    // 0x165ad4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x165AD0u, 0x165AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AD8u;
label_165ad8:
    // 0x165ad8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165AD8u;
    SET_GPR_U32(ctx, 31, 0x165AE0u);
    ctx->pc = 0x165ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165AD8u;
    // 0x165adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165AD8u, 0x165AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AE0u;
label_165ae0:
    // 0x165ae0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x165AE0u;
    {
        const bool branch_taken_0x165ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AE0u;
        // 0x165ae4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ae0) {
            ctx->pc = 0x165B38u;
            goto label_165b38;
        }
    }
    ctx->pc = 0x165AE8u;
    // 0x165ae8: 0xc087502  jal         func_21D408
    ctx->pc = 0x165AE8u;
    SET_GPR_U32(ctx, 31, 0x165AF0u);
    ctx->pc = 0x165AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165AE8u;
    // 0x165aec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x165AE8u, 0x165AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AF0u;
label_165af0:
    // 0x165af0: 0x24510164  addiu       $s1, $v0, 0x164
    ctx->pc = 0x165af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    // 0x165af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165af8:
    // 0x165af8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x165AF8u;
    SET_GPR_U32(ctx, 31, 0x165B00u);
    ctx->pc = 0x165AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165AF8u;
    // 0x165afc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x165AF8u, 0x165B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B00u;
label_165b00:
    // 0x165b00: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165B00u;
    SET_GPR_U32(ctx, 31, 0x165B08u);
    ctx->pc = 0x165B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B00u;
    // 0x165b04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165B00u, 0x165B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B08u;
label_165b08:
    // 0x165b08: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165B08u;
    {
        const bool branch_taken_0x165b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165b08) {
            ctx->pc = 0x165B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165B08u;
            // 0x165b0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165B2Cu;
            goto label_165b2c;
        }
    }
    ctx->pc = 0x165B10u;
    // 0x165b10: 0xc087502  jal         func_21D408
    ctx->pc = 0x165B10u;
    SET_GPR_U32(ctx, 31, 0x165B18u);
    ctx->pc = 0x165B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B10u;
    // 0x165b14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x165B10u, 0x165B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B18u;
label_165b18:
    // 0x165b18: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x165b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x165b1c: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x165B1Cu;
    {
        const bool branch_taken_0x165b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x165B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B1Cu;
        // 0x165b20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b1c) {
            ctx->pc = 0x165B2Cu;
            goto label_165b2c;
        }
    }
    ctx->pc = 0x165B24u;
    // 0x165b24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x165B24u;
    {
        const bool branch_taken_0x165b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B24u;
        // 0x165b28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b24) {
            ctx->pc = 0x165B4Cu;
            goto label_165b4c;
        }
    }
    ctx->pc = 0x165B2Cu;
label_165b2c:
    // 0x165b2c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x165b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165b30: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x165B30u;
    {
        const bool branch_taken_0x165b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B30u;
        // 0x165b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b30) {
            ctx->pc = 0x165AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165af8;
        }
    }
    ctx->pc = 0x165B38u;
label_165b38:
    // 0x165b38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x165b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x165b3c: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x165b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165b40: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x165B40u;
    {
        const bool branch_taken_0x165b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B40u;
        // 0x165b44: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b40) {
            ctx->pc = 0x165AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165ad0;
        }
    }
    ctx->pc = 0x165B48u;
    // 0x165b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165b4c:
    // 0x165b4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x165b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165b50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x165b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165b54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x165b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165b58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x165b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165b5c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x165b5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165b64: 0x3e00008  jr          $ra
    ctx->pc = 0x165B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B64u;
        // 0x165b68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165B6Cu;
    // 0x165b6c: 0x0  nop
    ctx->pc = 0x165b6cu;
    // NOP
    ctx->pc = 0x165b70u;
}
