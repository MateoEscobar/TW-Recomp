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

// Function: sub_0031EA00
// Address: 0x31ea00 - 0x31eaf0
void sub_0031EA00_0x31ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EA00_0x31ea00");
#endif

    switch (ctx->pc) {
        case 0x31ea5cu: goto label_31ea5c;
        case 0x31ea80u: goto label_31ea80;
        case 0x31ea9cu: goto label_31ea9c;
        case 0x31eaa4u: goto label_31eaa4;
        case 0x31eab4u: goto label_31eab4;
        default: break;
    }

    ctx->pc = 0x31ea00u;

    // 0x31ea00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31ea04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31ea08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31ea0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31ea0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x31ea14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31ea14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31ea18: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x31ea1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ea20: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x31ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x31ea24: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x31ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x31ea28: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x31ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31ea2c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x31ea2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31ea30: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x31EA30u;
    {
        const bool branch_taken_0x31ea30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA30u;
        // 0x31ea34: 0x24420bb8  addiu       $v0, $v0, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea30) {
            ctx->pc = 0x31EACCu;
            goto label_31eacc;
        }
    }
    ctx->pc = 0x31EA38u;
    // 0x31ea38: 0x92230044  lbu         $v1, 0x44($s1)
    ctx->pc = 0x31ea38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x31ea3c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x31EA3Cu;
    {
        const bool branch_taken_0x31ea3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA3Cu;
        // 0x31ea40: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea3c) {
            ctx->pc = 0x31EA6Cu;
            goto label_31ea6c;
        }
    }
    ctx->pc = 0x31EA44u;
    // 0x31ea44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31ea48: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x31ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x31ea4c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x31ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x31ea50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ea54: 0xc0e6960  jal         func_39A580
    ctx->pc = 0x31EA54u;
    SET_GPR_U32(ctx, 31, 0x31EA5Cu);
    ctx->pc = 0x31EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA54u;
    // 0x31ea58: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A580u, 0x31EA54u, 0x31EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EA5Cu;
label_31ea5c:
    // 0x31ea5c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31EA5Cu;
    {
        const bool branch_taken_0x31ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA5Cu;
        // 0x31ea60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea5c) {
            ctx->pc = 0x31EAD0u;
            goto label_31ead0;
        }
    }
    ctx->pc = 0x31EA64u;
    // 0x31ea64: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x31EA64u;
    {
        const bool branch_taken_0x31ea64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA64u;
        // 0x31ea68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea64) {
            ctx->pc = 0x31EAD0u;
            goto label_31ead0;
        }
    }
    ctx->pc = 0x31EA6Cu;
label_31ea6c:
    // 0x31ea6c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x31ea6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ea70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31ea70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31EA74u;
    {
        const bool branch_taken_0x31ea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA74u;
        // 0x31ea78: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea74) {
            ctx->pc = 0x31EA84u;
            goto label_31ea84;
        }
    }
    ctx->pc = 0x31EA7Cu;
    // 0x31ea7c: 0x0  nop
    ctx->pc = 0x31ea7cu;
    // NOP
label_31ea80:
    // 0x31ea80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31ea80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31ea84:
    // 0x31ea84: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x31ea84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x31ea88: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x31ea88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31ea8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31EA8Cu;
    {
        const bool branch_taken_0x31ea8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA8Cu;
        // 0x31ea90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea8c) {
            ctx->pc = 0x31EAC4u;
            goto label_31eac4;
        }
    }
    ctx->pc = 0x31EA94u;
    // 0x31ea94: 0xc0e4060  jal         func_390180
    ctx->pc = 0x31EA94u;
    SET_GPR_U32(ctx, 31, 0x31EA9Cu);
    ctx->pc = 0x31EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA94u;
    // 0x31ea98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x31EA94u, 0x31EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EA9Cu;
label_31ea9c:
    // 0x31ea9c: 0xc0e2612  jal         func_389848
    ctx->pc = 0x31EA9Cu;
    SET_GPR_U32(ctx, 31, 0x31EAA4u);
    ctx->pc = 0x31EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA9Cu;
    // 0x31eaa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x31EA9Cu, 0x31EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAA4u;
label_31eaa4:
    // 0x31eaa4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x31EAA4u;
    {
        const bool branch_taken_0x31eaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eaa4) {
            ctx->pc = 0x31EAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EAA4u;
            // 0x31eaa8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ea80;
        }
    }
    ctx->pc = 0x31EAACu;
    // 0x31eaac: 0xc0e36b8  jal         func_38DAE0
    ctx->pc = 0x31EAACu;
    SET_GPR_U32(ctx, 31, 0x31EAB4u);
    ctx->pc = 0x31EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EAACu;
    // 0x31eab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DAE0u, 0x31EAACu, 0x31EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAB4u;
label_31eab4:
    // 0x31eab4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x31EAB4u;
    {
        const bool branch_taken_0x31eab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAB4u;
        // 0x31eab8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eab4) {
            ctx->pc = 0x31EA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ea80;
        }
    }
    ctx->pc = 0x31EABCu;
    // 0x31eabc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31eabcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31eac4:
    // 0x31eac4: 0x12630002  beq         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31EAC4u;
    {
        const bool branch_taken_0x31eac4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x31EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAC4u;
        // 0x31eac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eac4) {
            ctx->pc = 0x31EAD0u;
            goto label_31ead0;
        }
    }
    ctx->pc = 0x31EACCu;
label_31eacc:
    // 0x31eacc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31eaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ead0:
    // 0x31ead0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31ead0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ead4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31ead4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ead8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31ead8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31eadc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31eadcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31eae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31eae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31eae4: 0x3e00008  jr          $ra
    ctx->pc = 0x31EAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAE4u;
        // 0x31eae8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EAECu;
    // 0x31eaec: 0x0  nop
    ctx->pc = 0x31eaecu;
    // NOP
    ctx->pc = 0x31eaf0u;
}
