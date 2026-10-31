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

// Function: sub_0028CD10
// Address: 0x28cd10 - 0x28cdf8
void sub_0028CD10_0x28cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CD10_0x28cd10");
#endif

    switch (ctx->pc) {
        case 0x28cd70u: goto label_28cd70;
        case 0x28cd78u: goto label_28cd78;
        case 0x28cd80u: goto label_28cd80;
        case 0x28cda4u: goto label_28cda4;
        case 0x28cdc4u: goto label_28cdc4;
        default: break;
    }

    ctx->pc = 0x28cd10u;

    // 0x28cd10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28cd14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28cd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28cd18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28cd1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28cd20: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28cd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28cd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28cd28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28cd2c: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x28cd2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x28cd30: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28cd30u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28cd34: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x28CD34u;
    {
        const bool branch_taken_0x28cd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD34u;
        // 0x28cd38: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd34) {
            ctx->pc = 0x28CDDCu;
            goto label_28cddc;
        }
    }
    ctx->pc = 0x28CD3Cu;
    // 0x28cd3c: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x28cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x28cd40: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x28CD40u;
    {
        const bool branch_taken_0x28cd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD40u;
        // 0x28cd44: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd40) {
            ctx->pc = 0x28CDE0u;
            goto label_28cde0;
        }
    }
    ctx->pc = 0x28CD48u;
    // 0x28cd48: 0x3c02bbbe  lui         $v0, 0xBBBE
    ctx->pc = 0x28cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48062 << 16));
    // 0x28cd4c: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x28cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x28cd50: 0x3442f927  ori         $v0, $v0, 0xF927
    ctx->pc = 0x28cd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63783);
    // 0x28cd54: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28CD54u;
    {
        const bool branch_taken_0x28cd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD54u;
        // 0x28cd58: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd54) {
            ctx->pc = 0x28CDE4u;
            goto label_28cde4;
        }
    }
    ctx->pc = 0x28CD5Cu;
    // 0x28cd5c: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x28cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x28cd60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28cd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd64: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x28cd64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x28cd68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28cd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd6c: 0x0  nop
    ctx->pc = 0x28cd6cu;
    // NOP
label_28cd70:
    // 0x28cd70: 0xc137826  jal         func_4DE098
    ctx->pc = 0x28CD70u;
    SET_GPR_U32(ctx, 31, 0x28CD78u);
    ctx->pc = 0x28CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD70u;
    // 0x28cd74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28CD70u, 0x28CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD78u;
label_28cd78:
    // 0x28cd78: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28CD78u;
    SET_GPR_U32(ctx, 31, 0x28CD80u);
    ctx->pc = 0x28CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD78u;
    // 0x28cd7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28CD78u, 0x28CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD80u;
label_28cd80:
    // 0x28cd80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28cd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd84: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28CD84u;
    {
        const bool branch_taken_0x28cd84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cd84) {
            ctx->pc = 0x28CD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CD84u;
            // 0x28cd88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CDD0u;
            goto label_28cdd0;
        }
    }
    ctx->pc = 0x28CD8Cu;
    // 0x28cd8c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x28cd8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x28cd90: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28cd90u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28cd94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28CD94u;
    {
        const bool branch_taken_0x28cd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD94u;
        // 0x28cd98: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd94) {
            ctx->pc = 0x28CDCCu;
            goto label_28cdcc;
        }
    }
    ctx->pc = 0x28CD9Cu;
    // 0x28cd9c: 0xc08a096  jal         func_228258
    ctx->pc = 0x28CD9Cu;
    SET_GPR_U32(ctx, 31, 0x28CDA4u);
    ctx->pc = 0x28CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD9Cu;
    // 0x28cda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x28CD9Cu, 0x28CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDA4u;
label_28cda4:
    // 0x28cda4: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28CDA4u;
    {
        const bool branch_taken_0x28cda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x28CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDA4u;
        // 0x28cda8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cda4) {
            ctx->pc = 0x28CDD0u;
            goto label_28cdd0;
        }
    }
    ctx->pc = 0x28CDACu;
    // 0x28cdac: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x28cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x28cdb0: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x28cdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x28cdb4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CDB4u;
    {
        const bool branch_taken_0x28cdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDB4u;
        // 0x28cdb8: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdb4) {
            ctx->pc = 0x28CDD4u;
            goto label_28cdd4;
        }
    }
    ctx->pc = 0x28CDBCu;
    // 0x28cdbc: 0xc0a4822  jal         func_292088
    ctx->pc = 0x28CDBCu;
    SET_GPR_U32(ctx, 31, 0x28CDC4u);
    ctx->pc = 0x28CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CDBCu;
    // 0x28cdc0: 0x24041194  addiu       $a0, $zero, 0x1194 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292088u, 0x28CDBCu, 0x28CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDC4u;
label_28cdc4:
    // 0x28cdc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28CDC4u;
    {
        const bool branch_taken_0x28cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDC4u;
        // 0x28cdc8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdc4) {
            ctx->pc = 0x28CDE0u;
            goto label_28cde0;
        }
    }
    ctx->pc = 0x28CDCCu;
label_28cdcc:
    // 0x28cdcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28cdccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28cdd0:
    // 0x28cdd0: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x28cdd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_28cdd4:
    // 0x28cdd4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x28CDD4u;
    {
        const bool branch_taken_0x28cdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDD4u;
        // 0x28cdd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdd4) {
            ctx->pc = 0x28CD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28cd70;
        }
    }
    ctx->pc = 0x28CDDCu;
label_28cddc:
    // 0x28cddc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28cddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28cde0:
    // 0x28cde0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28cde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28cde4:
    // 0x28cde4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28cde4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cde8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28cde8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cdec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x28CDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDF0u;
        // 0x28cdf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CDF8u;
}
